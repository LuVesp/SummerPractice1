#include "EditorWindow.h"

using namespace LittleTextEditor;
[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew EditorWindow());
}