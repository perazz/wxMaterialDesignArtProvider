#include "wxMaterialDesignArtProvider.h"
#include <wx/artprov.h>
#include <wx/msgdlg.h>
#include <wx/bmpbndl.h>
#include <wx/log.h>
#include <wx/colour.h>

// Implement createBitmapBundle with color
wxBitmapBundle wxMaterialDesignArtProvider::CreateBitmapBundle(const wxArtID& id,
                                                       const wxArtClient& client,
                                                       const wxSize& size,
                                                       const wxColour& color)
{

    // Assemble bitmap
    if (client == wxART_CLIENT_MATERIAL_FILLED)
        return CreateFilledMaterialArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_MATERIAL_OUTLINED)
        return CreateOutlinedMaterialArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_MATERIAL_ROUND)
        return CreateRoundMaterialArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_MATERIAL_SHARP)
        return CreateSharpMaterialArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_MATERIAL_TWO_TONE)
        return CreateTwoToneMaterialArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_AWESOME_BRANDS)
        return CreateBrandsAwesomeArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_AWESOME_REGULAR)
        return CreateRegularAwesomeArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_AWESOME_SOLID)
        return CreateSolidAwesomeArtBitmapBundleByID(id,size);
    if (client == wxART_CLIENT_SIMPLE_ICONS)
        return CreateIconsSimpleArtBitmapBundleByID(id,size);

    // Not implemented
    wxBitmapBundle bb;
    return bb;

}

// Implement createBitmapBundle
wxBitmapBundle wxMaterialDesignArtProvider::CreateBitmapBundle(const wxArtID& id,
                                                       const wxArtClient& client,
                                                       const wxSize& size)
{
    return wxMaterialDesignArtProvider::CreateBitmapBundle(id,client,size,wxNullColour);
}

// Implement GetBitmap with custom color
wxBitmap wxMaterialDesignArtProvider::GetBitmap(const wxArtID& id,
                                           const wxArtClient& client,
                                           const wxSize& size,
                                           const wxColour& color)
{
    // Assemble bitmap
    if (client == wxART_CLIENT_MATERIAL_FILLED)
        return CreateFilledMaterialArtBitmapByID(id, size, color);
    if (client == wxART_CLIENT_MATERIAL_OUTLINED)
        return CreateOutlinedMaterialArtBitmapByID(id, size, color);
    if (client == wxART_CLIENT_MATERIAL_ROUND)
        return CreateRoundMaterialArtBitmapByID(id,size, color);
    if (client == wxART_CLIENT_MATERIAL_SHARP)
        return CreateSharpMaterialArtBitmapByID(id,size, color);
    if (client == wxART_CLIENT_MATERIAL_TWO_TONE)
        return CreateTwoToneMaterialArtBitmapByID(id,size, color);
    if (client == wxART_CLIENT_AWESOME_BRANDS)
        return CreateBrandsAwesomeArtBitmapByID(id,size, color);
    if (client == wxART_CLIENT_AWESOME_REGULAR)
        return CreateRegularAwesomeArtBitmapByID(id,size, color);
    if (client == wxART_CLIENT_AWESOME_SOLID)
        return CreateSolidAwesomeArtBitmapByID(id,size, color);
    if (client == wxART_CLIENT_SIMPLE_ICONS)
        return CreateIconsSimpleArtBitmapByID(id,size);

    // Not implemented
    return wxNullBitmap;
}
// Implement createBitmap with custom color
wxBitmap wxMaterialDesignArtProvider::CreateBitmap(const wxArtID& id,
                                           const wxArtClient& client,
                                           const wxSize& size,
                                           const wxColour& color)
{
    return wxMaterialDesignArtProvider::GetBitmap(id,client,size,color);
}

// Implement createBitmap
wxBitmap wxMaterialDesignArtProvider::CreateBitmap(const wxArtID& id,
                                           const wxArtClient& client,
                                           const wxSize& size)
{
   return wxMaterialDesignArtProvider::CreateBitmap(id,client,size,wxNullColour);
}

bool wxMaterialDesignArtProvider::HasClient(const wxArtClient& client)
{
    if (client == wxART_CLIENT_MATERIAL_FILLED)
        return true;
    if (client == wxART_CLIENT_MATERIAL_OUTLINED)
        return true;
    if (client == wxART_CLIENT_MATERIAL_ROUND)
        return true;
    if (client == wxART_CLIENT_MATERIAL_SHARP)
        return true;
    if (client == wxART_CLIENT_MATERIAL_TWO_TONE)
        return true;
    if (client == wxART_CLIENT_AWESOME_BRANDS)
        return true;
    if (client == wxART_CLIENT_AWESOME_REGULAR)
        return true;
    if (client == wxART_CLIENT_AWESOME_SOLID)
        return true;
    if (client == wxART_CLIENT_SIMPLE_ICONS)
        return true;

    // Not implemented
    return false;
}
