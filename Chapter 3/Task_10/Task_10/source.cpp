#include "../../../std_lib_facilities.h"
int main()
{
	string operation = " ";
	double a;
	double b;
	cout << "Enter operation and any two operands end press 'Enter'\n";
	cin >> operation >> a >> b;
	double result;
	if (operation == "+" || operation == "plus") 
		result = a + b;
	else if (operation == "-" || operation == "minus") 
			result = a - b;
		else if (operation == "*" || operation == "mul") 
				result = a * b;
			else if (operation == "/" || operation == "div") 
					result = a / b;
				else simple_error("Are you kidding");
	cout << result << "\n";
	keep_window_open();
}