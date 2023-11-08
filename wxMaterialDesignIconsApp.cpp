/***************************************************************
 * Name:      wxMaterialDesignIconsApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Federico Perini (federico.perini@gmail.com)
 * Created:   2023-11-05
 * Copyright: Federico Perini (https://www.federicoperini.info)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxMaterialDesignIconsApp.h"
#include "wxMaterialDesignIconsMain.h"

IMPLEMENT_APP(wxMaterialDesignIconsApp);

bool wxMaterialDesignIconsApp::OnInit()
{

    wxFrame frame(NULL, wxID_ANY, wxT("wxArtProvider sample"),
                  wxDefaultPosition, wxSize(450, 340));
    frame.Show(true);


    // Register art provider
    wxArtProvider::Push(new wxMaterialDesignArtProvider);

    wxArtBrowserDialog dialog(&frame);
    dialog.ShowModal();

    return false;
}
