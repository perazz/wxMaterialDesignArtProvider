/***************************************************************
 * Name:      wxMaterialDesignIconsMain.cpp
 * Purpose:   Code for Application Frame
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

#include "wxMaterialDesignIconsMain.h"

/////////////////////////////////////////////////////////////////////////////
// Name:        artbrows.cpp
// Purpose:     wxArtProvider demo - art browser dialog
// Author:      Vaclav Slavik
// Modified by:
// Created:     2002/04/05
// Copyright:   (c) Vaclav Slavik
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"


#ifndef WX_PRECOMP
    #include "wx/wx.h"
    #include "wx/choice.h"
#endif

#include "wx/listctrl.h"
#include <wx/clrpicker.h>
#include <wx/arrstr.h>
#include "wx/sizer.h"
#include "wx/imaglist.h"
#include "wx/listctrl.h"

#define ART_CLIENT(id) \
    choice->Append(#id, new wxStringClientData(id));
#define ART_ICON(id) \
    { \
        int ind; \
        wxBitmap icon = wxArtProvider::GetBitmap(id, client, size); \
            ind = images->Add(icon); \
        list->InsertItem(index, #id, ind); \
        list->SetItemPtrData(index, wxPtrToUInt(new wxString(id))); \
        index++; \
    }

// ----------------------------------------------------------------------------
// Functions to fill-in all supported art IDs
// ----------------------------------------------------------------------------

static void FillClients(wxChoice *choice)
{
    ART_CLIENT(wxART_CLIENT_FLUENTUI_FILLED)
    ART_CLIENT(wxART_CLIENT_FLUENTUI_REGULAR)
    ART_CLIENT(wxART_CLIENT_SIMPLE_ICONS)
    ART_CLIENT(wxART_CLIENT_AWESOME_BRANDS)
    ART_CLIENT(wxART_CLIENT_AWESOME_SOLID)
    ART_CLIENT(wxART_CLIENT_AWESOME_REGULAR)
    ART_CLIENT(wxART_CLIENT_MATERIAL_OUTLINED)
    ART_CLIENT(wxART_CLIENT_MATERIAL_ROUND)
    ART_CLIENT(wxART_CLIENT_MATERIAL_SHARP)
    ART_CLIENT(wxART_CLIENT_MATERIAL_TWO_TONE)
    ART_CLIENT(wxART_CLIENT_MATERIAL_FILLED) // Last is same as OnInit

}

static void FillBitmaps(wxImageList *images, wxListCtrl *list,
                        int& index,
                        const wxArtClient& client, const wxSize& size)
{

    wxArrayString ids = FilledMaterialArtIDs();
    if (client == wxART_CLIENT_SIMPLE_ICONS) ids = IconsSimpleArtIDs();
    if (client == wxART_CLIENT_MATERIAL_OUTLINED) ids = OutlinedMaterialArtIDs();
    if (client == wxART_CLIENT_MATERIAL_SHARP) ids = SharpMaterialArtIDs();
    if (client == wxART_CLIENT_MATERIAL_ROUND) ids = RoundMaterialArtIDs();
    if (client == wxART_CLIENT_MATERIAL_TWO_TONE) ids = TwoToneMaterialArtIDs();
    if (client == wxART_CLIENT_AWESOME_BRANDS) ids = BrandsAwesomeArtIDs();
    if (client == wxART_CLIENT_AWESOME_REGULAR) ids = RegularAwesomeArtIDs();
    if (client == wxART_CLIENT_AWESOME_SOLID) ids = SolidAwesomeArtIDs();
    if (client == wxART_CLIENT_FLUENTUI_FILLED) ids = FilledFluentuiArtIDs();
    if (client == wxART_CLIENT_FLUENTUI_REGULAR) ids = RegularFluentuiArtIDs();

    for (size_t avail=0; avail<ids.Count(); avail++) {
        wxBitmap bmp = wxArtProvider::GetBitmap(ids.Item(avail), client, size);
        if (!bmp.IsOk()) wxLogFatalError("invalid BMP: " + ids.Item(avail));
        int ind = images->Add(bmp);
        list->InsertItem(index, ids.Item(avail), ind);
        list->SetItemPtrData(index, wxPtrToUInt(new wxString(ids.Item(avail))));
        index++;
    }
    return;

}


// ----------------------------------------------------------------------------
// Browser implementation
// ----------------------------------------------------------------------------

#include "null.xpm"

const int SIZE_CHOICE_ID = ::wxNewId();
const int COLOR_CHOICE_ID = ::wxNewId();

// Bitmap sizes that can be chosen in the size selection wxChoice.
static const int bitmapSizes[] = { -1, 16, 24, 32, 64, 128, 256, 0 };

wxBEGIN_EVENT_TABLE(wxArtBrowserDialog, wxDialog)
    EVT_LIST_ITEM_SELECTED(wxID_ANY, wxArtBrowserDialog::OnSelectItem)
    EVT_CHOICE(SIZE_CHOICE_ID, wxArtBrowserDialog::OnChangeSize)
    EVT_CHOICE(wxID_ANY, wxArtBrowserDialog::OnChooseClient)
    EVT_COLOURPICKER_CHANGED(COLOR_CHOICE_ID, wxArtBrowserDialog::OnChangeColor)
wxEND_EVENT_TABLE()

wxArtBrowserDialog::wxArtBrowserDialog(wxWindow *parent)
    : wxDialog(parent, wxID_ANY, "Art resources browser",
               wxDefaultPosition, wxDefaultSize,
               wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER)
{
    m_currentArtId = wxART_10K;

    wxSizer *sizer = new wxBoxSizer(wxVERTICAL);
    wxSizer *subsizer;

    wxChoice *choice = new wxChoice(this, wxID_ANY);
    FillClients(choice);

    subsizer = new wxBoxSizer(wxHORIZONTAL);
    subsizer->Add(new wxStaticText(this, wxID_ANY, "Client:"), 0, wxALIGN_CENTER_VERTICAL);
    subsizer->Add(choice, 1, wxLEFT, 5);
    sizer->Add(subsizer, 0, wxALL | wxEXPAND, 10);

    subsizer = new wxBoxSizer(wxHORIZONTAL);

    m_list = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(400, 300),
                            wxLC_REPORT | wxSUNKEN_BORDER);
    m_list->AppendColumn("wxArtID");
    subsizer->Add(m_list, 0, wxEXPAND | wxRIGHT, 10);

    wxSizer *subsub = new wxBoxSizer(wxVERTICAL);

    m_sizes = new wxChoice( this, SIZE_CHOICE_ID );
    for ( const int* p = bitmapSizes; *p; ++p )
    {
      if ( *p == -1 )
        m_sizes->Append( "Default" );
      else
        m_sizes->Append( wxString::Format("%d x %d", *p, *p ) );
    }
    m_sizes->SetSelection(0);

    m_color = new wxColourPickerCtrl(this,  COLOR_CHOICE_ID, *wxBLACK, wxDefaultPosition, wxDefaultSize,
                                     wxCLRP_DEFAULT_STYLE, wxDefaultValidator, "Color Picker");

    wxSizer *button_line = new wxBoxSizer(wxHORIZONTAL);
    button_line->Add(m_sizes, 0, wxALL, 4);
    button_line->Add(m_color, 0, wxALL, 4);

    subsub->Add(button_line, 0, wxALL, 4);

    m_text = new wxStaticText(this, wxID_ANY, "Size: 333x333");
    subsub->Add(m_text, 0, wxALL, 4);

    m_canvas = new wxStaticBitmap(this, wxID_ANY, wxBitmap(null_xpm));
    subsub->Add(m_canvas);
    subsub->Add(256, 256);
    subsizer->Add(subsub, 1, wxLEFT, 4 );

    sizer->Add(subsizer, 1, wxEXPAND | wxLEFT|wxRIGHT, 10);

    wxButton *ok = new wxButton(this, wxID_OK, "Close");
    ok->SetDefault();
    sizer->Add(ok, 0, wxALIGN_RIGHT | wxALL, 10);

    SetSizerAndFit(sizer);

    choice->SetSelection(choice->GetCount() - 1);
    SetArtClient(wxART_CLIENT_MATERIAL_FILLED);
}

wxArtBrowserDialog::~wxArtBrowserDialog()
{
    const int itemCount = m_list->GetItemCount();

    // item data are set by the ART_ICON macro
    for ( int i = 0; i < itemCount; ++i )
        delete reinterpret_cast<wxString*>(m_list->GetItemData(i));
}

wxSize wxArtBrowserDialog::GetSelectedBitmapSize() const
{
  if (m_sizes->GetSelection()>=0) {
     const int size = bitmapSizes[m_sizes->GetSelection()];
     return wxSize(size, size);
  } else {
     return wxSize(16,16);
  }
}


void wxArtBrowserDialog::SetArtClient(const wxArtClient& client)
{
    wxBusyCursor bcur;

    wxImageList *img = new wxImageList(16, 16);
    img->Add(wxIcon(null_xpm));
    int index = 0;

    long sel = m_list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_FOCUSED);
    if (sel < 0) sel = 0;

    // Remove old list
    m_list->DeleteAllItems();

    // Fill new list
    FillBitmaps(img, m_list, index, client, wxSize(16, 16));
    m_list->AssignImageList(img, wxIMAGE_LIST_SMALL);
    m_list->SetColumnWidth(0, wxLIST_AUTOSIZE);

    sel = m_list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_FOCUSED);
    if (sel < 0) sel = 0;
    m_list->SetItemState(sel, wxLIST_STATE_FOCUSED, wxLIST_STATE_FOCUSED);
    m_client = client;

    const wxString *data = (const wxString*)m_list->GetItemData(sel);
    SetArtBitmap(*data, m_client, wxSize(16, 16), m_color->GetColour());
}

void wxArtBrowserDialog::OnSelectItem(wxListEvent &event)
{
    const wxString *data = (const wxString*)event.GetData();
    m_currentArtId = *data;
    SetArtBitmap(*data, m_client, GetSelectedBitmapSize(), m_color->GetColour());
}

void wxArtBrowserDialog::OnChangeSize(wxCommandEvent& WXUNUSED(event))
{
    SetArtBitmap(m_currentArtId, m_client, GetSelectedBitmapSize(), m_color->GetColour());
}

void wxArtBrowserDialog::OnChooseClient(wxCommandEvent &event)
{
    wxStringClientData *data = (wxStringClientData *)event.GetClientObject();
    SetArtClient(data->GetData());
}

void wxArtBrowserDialog::OnChangeColor(wxColourPickerEvent &event)
{
    SetArtBitmap(m_currentArtId, m_client, GetSelectedBitmapSize(), m_color->GetColour());
}

void wxArtBrowserDialog::SetArtBitmap(const wxArtID& id, const wxArtClient& client, const wxSize& size, const wxColour& color)
{

    wxBitmap bmp;
    if (wxMaterialDesignArtProvider::HasClient(client)) {
        // Use Material Design API
        bmp = wxMaterialDesignArtProvider::GetBitmap(id, client, size, color);
    } else {
        // Use default art provider (includes overrides, if present)
        bmp = wxArtProvider::GetBitmap(id, client, size);
    }

    m_canvas->SetSize(bmp.GetWidth(), bmp.GetHeight());
    m_canvas->SetBitmap(bmp);
    m_text->SetLabel(wxString::Format("Size: %d x %d", bmp.GetWidth(), bmp.GetHeight()));
    Refresh();
}
