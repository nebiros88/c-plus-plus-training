#include "../../../../std_lib_facilities.h"
int main()
{
	double a = 0;
	double b = 0;
	cout << "Please, type any two numbers and press 'Enter'.\n";
	while (cin >> a >> b){
		if ((a > b && a - b <= 1.0 / 100) || (a < b && b - a <= 1.0 / 100)) cout << "Your numbers are nearly equal.\n";
		else if (a == b) cout << "Your numbers are equal.\n";
		else if (a < b) cout << "The less number is " << a << '\n' << "The biggest number is " << b << '\n';
		else  cout << "The less number is " << b << '\n' << "The biggest number is " << a << '\n'; 
	}
	keep_window_open();
}