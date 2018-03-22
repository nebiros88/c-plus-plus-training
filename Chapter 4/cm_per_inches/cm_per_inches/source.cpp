#include "../../../std_lib_facilities.h"
int main()
{
	constexpr double cm_per_inch = 2.54;
	double lenght = 1;
	char unit = 0;
	cout << "Please, enter the lenght"
		<< " and unit (c or i) :\n";
	cin >> lenght >> unit;
	if (unit == 'i')						// Почему тут ругается компилятор?
		cout << lenght << "in == " << cm_per_inch * lenght << "cm\n";
	else if (unit == 'c')
		cout << lenght << "cm == " << lenght / cm_per_inch << "in\n";
	else
		cout << "Sorry, I dont know what does it means '" << unit << "'\n";
	keep_window_open();
}