#include "../../../../std_lib_facilities.h"
int main()
{
	int a = 0;
	int b = 0;
	cout << "PLease, enter two numbers and press 'Enter'.\n";
	cin >> a >> b;
	while (cin >> a >> b)
		cout << a << '\t' << b << '\n';
	keep_window_open();
}