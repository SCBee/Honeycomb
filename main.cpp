#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

// Start injector
int main()
{
	start_driver();
	cout << endl;

	inject_the_honey(xor_a("The Hive (Window Name)"), xor_w(L"The Honey (dll)"));

	cout << endl;
	system("pause");
}
