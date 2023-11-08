/***************************************************************
 * Name:      wxMaterialDesignIconsMain.h
 * Purpose:   Defines Application Frame
 * Author:    Federico Perini (federico.perini@gmail.com)
 * Created:   2023-11-05
 * Copyright: Federico Perini (https://www.federicoperini.info)
 * License:
 **************************************************************/

#ifndef WXMATERIALDESIGNICONSMAIN_H
#define WXMATERIALDESIGNICONSMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include <wx/artprov.h>
#include <wx/listctrl.h>
#include <wx/colordlg.h>
#include <wx/clrpicker.h>

#include "wxMaterialDesignIconsApp.h"

class wxArtBrowserDialog : public wxDialog
{
public:
    wxArtBrowserDialog(wxWindow *parent);
    ~wxArtBrowserDialog();

    void SetArtClient(const wxArtClient& client);
    void SetArtBitmap(const wxArtID& id, const wxArtClient& client, const wxSize& size = wxDefaultSize,
                      const wxColour& color=wxNullColour );

private:
    void OnSelectItem(wxListEvent &event);
    void OnChangeSize(wxCommandEvent &event);
    void OnChangeColor(wxColourPickerEvent &event);
    void OnChooseClient(wxCommandEvent &event);

    wxSize GetSelectedBitmapSize() const;

    wxListCtrl *m_list;
    wxStaticBitmap *m_canvas;
    wxStaticText *m_text;
    wxString m_client;
    wxChoice *m_sizes;
    wxColourPickerCtrl *m_color;
    wxString m_currentArtId;

    wxDECLARE_EVENT_TABLE();
};


#endif // WXMATERIALDESIGNICONSMAIN_H
