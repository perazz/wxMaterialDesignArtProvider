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
    if (client == wxART_CLIENT_MATERIAL_TWOTONE)
        return CreateTwoToneMaterialArtBitmapBundleByID(id,size);

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
    if (client == wxART_CLIENT_MATERIAL_TWOTONE)
        return CreateTwoToneMaterialArtBitmapByID(id,size, color);

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
    if (client == wxART_CLIENT_MATERIAL_TWOTONE)
        return true;

    // Not implemented
    return false;
}
