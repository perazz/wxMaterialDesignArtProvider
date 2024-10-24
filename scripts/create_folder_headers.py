import os
import string
from glob import glob
from pathlib import Path

def camel_case(s):
    s1 = s.replace("_", " ")
    s2 = s1.replace("-"," ")
    res = string.capwords(s2).replace(" ", "")
    return res

def macro_case(s):
    s1 = s.replace(" ","_")
    s2 = s1.replace("-","_")
    res = s2.upper()
    return res


def create_svg_folder_header(base_path,folder,save_path,client_name):

    # Create all names
    cliup = macro_case(client_name)
    clicm = camel_case(client_name)
    art_client = "wxART_CLIENT_" + cliup + "_" + macro_case(folder)
    safeguard  = art_client.upper() + "_H"

    header_name = "wx" + clicm + camel_case(folder) + "Art"
    fid = open(os.path.join(save_path,header_name+".hpp"),"w")


    print(safeguard)

    # Headers
    fid.write("#ifndef "+safeguard+"\n")
    fid.write("#define "+safeguard+"\n")

    fid.write("\n#include <wx/string.h> \n")
    fid.write("#include <wx/arrstr.h> \n")
    fid.write("#include <wx/artprov.h> \n")
    fid.write("#include <wx/colour.h> \n")

    # Define art client
    fid.write("// Define art client \n")
    fid.write("#define " + art_client + " wxART_MAKE_CLIENT_ID(" + art_client + ") \n\n")

    # Add raw contents of all svg files
    svg_files = glob(os.path.join(os.path.join(base_path,folder),"*.svg"))

    svg_files = sorted(svg_files)

    for svg in svg_files:
        as_text = open(svg,"r")
        raw_string = as_text.read()

        as_text.close()

        # Add literal to header
        icon_name = macro_case(Path(svg).stem)

        fid.write("\n\n")

        # Define art ID if necessary
        art_ID = "wxART_" + icon_name
        fid.write("#ifndef " + art_ID + "\n")
        fid.write("#define " + art_ID + " wxART_MAKE_ART_ID(" + art_ID + ") \n")
        fid.write("#endif \n")

        char_name = "SVG_" + cliup + "_" + macro_case(folder) + "_" + icon_name

        # Actual data
        fid.write("static constexpr const char *" + char_name + "= \n")

        #MSVC fix: constant literals cannot be longer than 16380 characters each
        chunk_size = 16300

        # Convert to a raw c++ literal
        literal = 'R"rawsvg(' + raw_string + ')rawsvg"'

        for i in range(0, len(raw_string), chunk_size):
            chunk = ('R"rawsvg(' if i==0 else '\nR"rawsvg(') + raw_string[i:i+chunk_size] + ')rawsvg"'
            fid.write(chunk)

        # fid.write(literal)
        fid.write("\n;")

    # Define prototype functions
    fid.write("\n\n// Function definitions \n")
    fid.write("wxString " + camel_case(folder) + clicm + "ArtSVGByID(const wxArtID& id);\n")
    fid.write("wxString " + camel_case(folder) + clicm + "ArtColorSVGByID(const wxArtID& id, const wxColour& color=wxNullColour);\n")
    fid.write("wxArrayString " + camel_case(folder) + clicm + "ArtIDs();\n")
    fid.write("wxBitmap Create" + camel_case(folder) + clicm + "ArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color=wxNullColour);\n")
    fid.write("wxBitmapBundle Create" + camel_case(folder) + clicm + "ArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color=wxNullColour);\n")


    fid.write("\n\n\n#endif // " + safeguard+"\n")
    fid.close()

    # Now write prototype functions
    fcpp = open(os.path.join(save_path,header_name+".cpp"),"w")

    fcpp.write('#include "'+ header_name + '.hpp" \n')
    fcpp.write('#include <wx/regex.h> \n\n')

    # 1) Return wxString containing the SVG
    fcpp.write("// Return SVG for the current ID as a string \n")
    fcpp.write("wxString " + camel_case(folder) + clicm + "ArtSVGByID(const wxArtID& id)\n{\n")
    for svg in svg_files:
        icon_name = macro_case(Path(svg).stem)
        art_ID = "wxART_" + icon_name
        char_name = "SVG_" + cliup + "_" + macro_case(folder) + "_" + icon_name

        fcpp.write("  if (wxASCII_STR(id) == wxASCII_STR(" + art_ID + "))  \n")
        fcpp.write("      return wxString(" + char_name + ");\n")

    fcpp.write("\n\n// Any IDs not implemented here will return a null string \n")
    fcpp.write("return wxString(); \n")
    fcpp.write("}\n\n\n")

    # 2) Return wxString containing the COLORED SVG
    fcpp.write("// Return SVG for the current ID as a string, with given color\n")
    fcpp.write("wxString " + camel_case(folder) + clicm + "ArtColorSVGByID(const wxArtID& id, const wxColour& color)\n{\n")
    fcpp.write("wxString svg = " + camel_case(folder) + clicm + "ArtSVGByID(id); \n")
    fcpp.write("if (svg.IsEmpty() || (color==wxNullColour)) return svg; \n")
    fcpp.write('static constexpr const char FILL_REGEX[36] = "fill=\\\"#(?:[0-9a-fA-F]{3,4}){1,2}\\\""; \n');
    fcpp.write("static constexpr const char NEW_PATH[7] = \"<path \";  \n")
    fcpp.write("static constexpr const size_t NPSIZE = 7;  \n")
    fcpp.write('// Replace existing fills, if any   \n');
    fcpp.write('wxString newFill("fill=\\"" + color.GetAsString(wxC2S_HTML_SYNTAX) + "\\"");\n');
    fcpp.write('wxRegEx reFill(FILL_REGEX);\n');
    fcpp.write('size_t count = reFill.ReplaceAll(&svg, newFill);\n');
    fcpp.write('if (count>0) return svg; \n\n');
    fcpp.write("// Set color to the first path  \n")
    fcpp.write("int ifirst = svg.Find(NEW_PATH);  \n")
    fcpp.write("wxString tmp;  \n")
    fcpp.write("while (!(ifirst==wxNOT_FOUND)) {  \n")
    fcpp.write("   // Add color to the current fill  \n")
    fcpp.write("   tmp.append(svg.substr(0,(size_t)ifirst+NPSIZE-1)  \n")
    fcpp.write('              + "fill=\\""  \n')
    fcpp.write("              + color.GetAsString(wxC2S_HTML_SYNTAX)  \n")
    fcpp.write('              + "\\" ");  \n')
    fcpp.write("   svg = svg.substr((size_t)ifirst+NPSIZE-1,svg.Length()-NPSIZE-1-ifirst);  \n")
    fcpp.write("   // Find another path  \n")
    fcpp.write("   ifirst = svg.Find(NEW_PATH);  \n")
    fcpp.write("}  \n")
    fcpp.write("tmp.append(svg);  \n")
    fcpp.write("svg = tmp;  \n")
    fcpp.write("return svg; \n")
    fcpp.write("}\n\n\n")


    # 2) Return a list of all IDs (as stirngs) contained in the current client
    fcpp.write("// Return list of all IDs present in the current client \n")
    fcpp.write("wxArrayString " + camel_case(folder) + clicm + "ArtIDs()\n{\n")
    fcpp.write("    wxArrayString list; \n\n")

    for svg in svg_files:
        icon_name = macro_case(Path(svg).stem)
        art_ID = "wxART_" + icon_name
        char_name = "SVG_" + cliup + "_" + macro_case(folder) + "_" + icon_name
        fcpp.write("    list.Add(" + art_ID + "); \n")

    fcpp.write("    return list; \n")
    fcpp.write("}\n\n\n")

    # 3) Return bitmap, given the ID and size
    fcpp.write("// Return SVG for the current ID as a wxBitmap \n")
    fcpp.write("wxBitmap Create" + camel_case(folder) + clicm + "ArtBitmapByID(const wxArtID& id, const wxSize& size, const wxColour& color)\n{\n")
    fcpp.write("  // Return SVG as a string \n")
    fcpp.write("  wxString svg = " + camel_case(folder) + clicm + "ArtColorSVGByID(id,color); \n")
    fcpp.write("  if (svg.IsEmpty()) return wxNullBitmap; \n\n")
    fcpp.write("  // Create bundle and get bitmap from it \n")
    fcpp.write("  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;\n")

    fcpp.write("  wxBitmapBundle bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);\n")
    fcpp.write("  if (!bundle.IsOk()) return wxNullBitmap; \n")
    fcpp.write("  wxBitmap bmp = bundle.GetBitmap(useSize); \n")
    fcpp.write("  if (!bmp.IsOk()) return wxNullBitmap; \n")
    fcpp.write("  return bmp; \n")
    fcpp.write("}\n\n\n")

    # 3) Return bitmap bundle, given the ID
    fcpp.write("// Return SVG for the current ID as a wxBitmapBundle \n")
    fcpp.write("wxBitmapBundle Create" + camel_case(folder) + clicm + "ArtBitmapBundleByID(const wxArtID& id, const wxSize& size, const wxColour& color)\n{\n")
    fcpp.write("  // Return SVG as a string \n")
    fcpp.write("  wxBitmapBundle bundle; \n")
    fcpp.write("  wxString svg = " + camel_case(folder) + clicm + "ArtColorSVGByID(id,color); \n")
    fcpp.write("  if (svg.IsEmpty()) return bundle; \n\n")
    fcpp.write("  // Create bundle and get bitmap from it \n")
    fcpp.write("  wxSize useSize = size==wxDefaultSize? wxSize(24,24) : size;\n")
    fcpp.write("  bundle = wxBitmapBundle::FromSVG(svg.mb_str(),useSize);\n")
    fcpp.write("  return bundle; \n")
    fcpp.write("}\n\n\n")

    fcpp.close()



storage = os.path.join("..","svg")
create_svg_folder_header(os.path.join(storage,"MaterialDesign"),"filled",os.path.join("..","MaterialDesign"),"Material")
create_svg_folder_header(os.path.join(storage,"MaterialDesign"),"outlined",os.path.join("..","MaterialDesign"),"Material")
create_svg_folder_header(os.path.join(storage,"MaterialDesign"),"round",os.path.join("..","MaterialDesign"),"Material")
create_svg_folder_header(os.path.join(storage,"MaterialDesign"),"sharp",os.path.join("..","MaterialDesign"),"Material")
create_svg_folder_header(os.path.join(storage,"MaterialDesign"),"two-tone",os.path.join("..","MaterialDesign"),"Material")
create_svg_folder_header(os.path.join(storage,"Font-Awesome-6"),"brands",os.path.join("..","MaterialDesign"),"Awesome")
create_svg_folder_header(os.path.join(storage,"Font-Awesome-6"),"regular",os.path.join("..","MaterialDesign"),"Awesome")
create_svg_folder_header(os.path.join(storage,"Font-Awesome-6"),"solid",os.path.join("..","MaterialDesign"),"Awesome")
create_svg_folder_header(os.path.join(storage,"SimpleIcons"),"icons",os.path.join("..","MaterialDesign"),"Simple")
create_svg_folder_header(os.path.join(storage,"FluentUI"),"regular",os.path.join("..","MaterialDesign"),"FluentUI")
create_svg_folder_header(os.path.join(storage,"FluentUI"),"filled",os.path.join("..","MaterialDesign"),"FluentUI")

