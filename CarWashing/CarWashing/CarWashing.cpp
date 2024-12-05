#include "CarWashing.h"

using namespace System;
using namespace System::Windows::Forms;



int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of your main form (CarWashing)
    CarWashing::CarWashing^ mainForm = gcnew CarWashing::CarWashing();

    // Run the application loop
    Application::Run(mainForm);

    return 0;
}
