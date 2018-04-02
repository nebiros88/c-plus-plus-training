#include "../../../../std_lib_facilities.h"
int main()
{
	double a = 0;
	double b = 0;
	cout << "Please, enter two any numbers end press' Enter'\n";
	cin >> a >> b;
	if (a - b <= 1.0 / 100)
		cout << "The first ant the second numbers are equal.\n";
	else if (a < b)
		cout << " The less number is " << a << '\n'
		<< " The biggest number is  " << b << '\n';
	else cout << "The less number is " << b << '\n'
		<< "The biggest number is " << a << '\n';
	keep_window_open();
}