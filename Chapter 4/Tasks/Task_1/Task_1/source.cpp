#include "../../../../std_lib_facilities.h"
int main()
{
	int a = '0';
	int b = '0';
	char c = ' ';
	cout << "PLease, enter two numbers and enter '|' and 'Enter' for exit.\n";
	cin >> a >> b >> c;
	while (cin >> a >> b >> c)
		cout << a << '\t' << b;
	keep_window_open();
}