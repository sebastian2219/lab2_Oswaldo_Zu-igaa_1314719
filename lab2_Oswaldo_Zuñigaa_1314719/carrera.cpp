#include "carrera.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lab2OswaldoZuñigaa1314719::carrera form;
	Application::Run(% form);
	return 0;
}
	
int lab2OswaldoZuñigaa1314719::carrera::movLiebre(int n) {
	if (n <= 2)
		return 0;
	else if (n <= 4)
		return 9;
	else if (n <= 5)
		return -12;
	else if (n <= 8)
		return 1;
	else 
		return -2;
} 
int lab2OswaldoZuñigaa1314719::carrera::movTortuga(int n) {
	if (n <= 5)
		return 3;
	else if (n <= 7)
		return -6;
	else
		return 1;
}

	

