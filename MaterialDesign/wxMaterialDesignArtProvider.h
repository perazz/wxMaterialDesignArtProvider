#ifndef WXMATERIALDESIGNARTPROVIDER_H
#define WXMATERIALDESIGNARTPROVIDER_H

#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/bmpbndl.h>
#include "wxAwesomeBrandsArt.hpp"
#include "wxAwesomeRegularArt.hpp"
#include "wxAwesomeSolidArt.hpp"
#include "wxFluentuiFilledArt.hpp"
#include "wxFluentuiRegularArt.hpp"
#include "wxMaterialFilledArt.hpp"
#include "wxMaterialOutlinedArt.hpp"
#include "wxMaterialRoundArt.hpp"
#include "wxMaterialSharpArt.hpp"
#include "wxMaterialTwoToneArt.hpp"
#include "wxSimpleIconsArt.hpp"

class wxMaterialDesignArtProvider : public wxArtProvider
{
public:
  static bool HasClient(const wxArtClient& client);
  static wxBitmap GetBitmap(const wxArtID& id,
                                    const wxArtClient& client,
                                    const wxSize& size,
                                    const wxColour& color=wxNullColour);
protected:

  // Override this method to return a bundle containing the required
  // bitmap in all available sizes.
  virtual wxBitmapBundle CreateBitmapBundle(const wxArtID& id,
                                    const wxArtClient& client,
                                    const wxSize& size) wxOVERRIDE;
  virtual wxBitmapBundle CreateBitmapBundle(const wxArtID& id,
                                    const wxArtClient& client,
                                    const wxSize& size,
                                    const wxColour& color=wxNullColour);

  virtual wxBitmap CreateBitmap    (const wxArtID& id,
                                    const wxArtClient& client,
                                    const wxSize& size) wxOVERRIDE;
  virtual wxBitmap CreateBitmap    (const wxArtID& id,
                                    const wxArtClient& client,
                                    const wxSize& size,
                                    const wxColour& color=wxNullColour);

};


#endif // WXMATERIALDESIGNARTPROVIDER_H
