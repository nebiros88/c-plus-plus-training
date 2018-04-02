#include "../../../../std_lib_facilities.h"
int main()
{
	int a = 0;
	int b = 0;
	cout << "Please, enter two any numbers end press' Enter'\n";
	cin >> a >> b;
	if (a == b)
		cout << "The first ant the second numbers are equal.\n";
	else if (a < b)
		cout << " The less number is " << a << '\n'
		<< " The biggest number is  " << b << '\n';
		else cout << "The less number is " << b << '\n'
			<< "The biggest number is " << a << '\n';
	keep_window_open();
}