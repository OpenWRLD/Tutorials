////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include "MainWindow.xaml.h"
#include "ViewModel.h"

#include <NsGui/IntegrationAPI.h>
#include <NsCore/ReflectionImplementEmpty.h>


using namespace TicTacToe;
using namespace Noesis;


////////////////////////////////////////////////////////////////////////////////////////////////////
MainWindow::MainWindow()
{
    Initialized() += MakeDelegate(this, &MainWindow::OnInitialized);
    InitializeComponent();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::InitializeComponent()
{
    GUI::LoadComponent(this, "MainWindow.xaml");
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::OnInitialized(BaseComponent*, const EventArgs&)
{
    SetDataContext(MakePtr<ViewModel>());
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NS_BEGIN_COLD_REGION

NS_IMPLEMENT_REFLECTION_(TicTacToe::MainWindow, "TicTacToe.MainWindow")
