#include "../../../std_lib_facilities.h"
int main()
{
	string operation = " ";
	double a;
	double b;
	cout << "Enter operation and any two operands end press 'Enter'\n";
	cin >> operation >> a >> b;
	double result;
	if () {			// что тут должно быть за условие?
		if (operation == "+")
			result = a + b;
		if (operation == "-")
			result = a - b;
		if (operation == "*")
			result = a * b;
		if (operation == "/")
			result = a / b;
		cout << result << "\n";
	}
	else {
		simple_error("Error");
		}
	keep_window_open();
}