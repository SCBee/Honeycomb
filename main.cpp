#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

// Start injector
// The driver is the core of the program's functionality
int main()
{
	start_driver();
	cout << endl;
	
	// Change WINDOW NAME to the target application window's name
	// Change DLL to the injected DLL file
	inject_the_honey(xor_a("The Hive (Window Name)"), xor_w(L"The Honey (dll)"));

	cout << endl;
	system("pause");
}
