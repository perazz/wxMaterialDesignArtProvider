/***************************************************************
 * Name:      wxMaterialDesignIconsApp.h
 * Purpose:   Defines Application Class
 * Author:    Federico Perini (federico.perini@gmail.com)
 * Created:   2023-11-05
 * Copyright: Federico Perini (https://www.federicoperini.info)
 * License:
 **************************************************************/

#ifndef WXMATERIALDESIGNICONSAPP_H
#define WXMATERIALDESIGNICONSAPP_H

#include <wx/app.h>
#include "MaterialDesign/wxMaterialDesignArtProvider.hpp"

class wxMaterialDesignIconsApp : public wxApp
{
    public:
        virtual bool OnInit();

    private:

        //wxMaterialDesignArtProvider MaterialDesign;
};

#endif // WXMATERIALDESIGNICONSAPP_H
