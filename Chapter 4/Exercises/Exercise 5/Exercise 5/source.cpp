#include "../../../../std_lib_facilities.h"
int main()
{
	double a = 0;
	double b = 0;
	char c;
	cout << "Please, any two values and the act for them.\n";
	cin >> a >> b >> c;
	switch (c) {
	case '+':
		cout << "Summ " << a << " and " << b << " is " << a + b << " .\n";
		break;
	case '-':
		cout << "Difference between  " << a << " and " << b << " is " << a - b << " .\n";
		break;
	case '*':
		cout << "Multiplication of  " << a << " and " << b << " is " << a * b << " .\n";
		break;
	case  '/':
		cout << "Division of  " << a << " and " << b << " is " << a / b << " .\n";
	default :
		cout << "Not correct!\n";
		break;
	}
	keep_window_open();
}