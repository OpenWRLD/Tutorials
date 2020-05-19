////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include "StartMenu.xaml.h"

#include <NsCore/ReflectionImplementEmpty.h>
#include <NsGui/IntegrationAPI.h>


using namespace Menu3D;
using namespace Noesis;


////////////////////////////////////////////////////////////////////////////////////////////////////
StartMenu::StartMenu()
{
    InitializeComponent();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void StartMenu::InitializeComponent()
{
    GUI::LoadComponent(this, "StartMenu.xaml");
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NS_BEGIN_COLD_REGION

NS_IMPLEMENT_REFLECTION_(Menu3D::StartMenu, "Menu3D.StartMenu")
