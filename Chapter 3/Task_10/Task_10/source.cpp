#include "../../../std_lib_facilities.h"
int main()
{
	string operation = " ";
	double a;
	double b;
	cout << "Enter operation and any two operands end press 'Enter'\n";
	cin >> operation >> a >> b;
	double result;
	if (operation == "+") {
		result = a + b;
	}
	if (operation == "-") {
		result = a - b;
	}
	if (operation == "*") {
		result = a * b;
	}
	if (operation == "/") {
		result = a / b;
	}
	else {
		simple_error("Error");
	}
	cout << result << "\n";
	keep_window_open();
}