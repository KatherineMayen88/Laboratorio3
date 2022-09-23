#include "MyFormMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab3KatherineMayen1129222::MyFormMenu form;
	Application::Run(% form);
	return 0;
}

