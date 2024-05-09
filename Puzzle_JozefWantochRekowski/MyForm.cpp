#include "MyForm.h"
#include "Puzzle.h"
#include "Gra.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	
	Puzzle_JozefWantochRekowski::MyForm form;
	Application::Run(%form);
	
	
	

	
	
}
