#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App1::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        this->Title(L"커맨드 바");
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

void winrt::App1::implementation::MainWindow::AppBarButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"'Add' 클릭함");
}


void winrt::App1::implementation::MainWindow::AppBarButton_Click_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"'Edit' 클릭함");
}


void winrt::App1::implementation::MainWindow::AppBarButton_Click_2(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"'Share' 클릭함");
}


void winrt::App1::implementation::MainWindow::AppBarButton_Click_3(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"'Settings' 클릭함");
}


void winrt::App1::implementation::MainWindow::AppBarButton_Click_4(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"'Font++' 클릭함");
}


void winrt::App1::implementation::MainWindow::AppBarButton_Click_5(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"'Font--' 클릭함");
}
