#include "MyForm.h" 	// ��� h-����� �����.
using namespace Practice2; // ��� �������.
[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm()); // ��� �����.
    return 0;
}


