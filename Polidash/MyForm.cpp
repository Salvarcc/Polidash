#include "MyForm.h"
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;


void main() {

	srand(time(nullptr));

	Application::Run(gcnew Polidash::MyForm());
}