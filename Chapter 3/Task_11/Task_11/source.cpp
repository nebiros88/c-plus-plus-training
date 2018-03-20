#include "../../../std_lib_facilities.h"
int main()
{
	int a1;
	int a5;
	int a10;
	int a25;
	int a50;
	int a100;
	int summ;
	int dollar;
	int cent;
	cout << "Please, enter the number of one-cent monets and press 'Enter' \n";
	cin >> a1;
	cout <<	"Please, enter the number of five-cent monets and press 'Enter' \n";
	cin >> a5;
	cout << "Please, enter the number of ten-cent monets and press 'Enter' \n";
	cin >> a10;
	cout << "Please, enter the number of twenty-five-cent monets and press 'Enter' \n";
	cin >> a25;
	cout << "Please, enter the number of fifty-cent monets and press 'Enter' \n";
	cin >> a50;
	cout << "Please, enter the number of one-dollars monets and press 'Enter' \n";
	cin >> a100;
	if (a1 == 1)
		cout << "You have only " << a1 << " one-cent monet.\n";
	else
		cout << "You have " << a1 << " one-cent monets.\n";
	cout << "You have " << a5 << " five-cent monets.\n";
	cout << "You have " << a10 << " ten-cent monets.\n";
	cout << "You have " << a25 << " twenty-five-cent monets.\n";
	cout << "You have " << a50 << " fifty-cent monets.\n";
	cout << "you have " << a100 << " one-dollar monets.\n";
	if (a100 > 1)
		a100 = a100 * 100;
	summ = a1 * 1 + a5 * 5 + a10 * 10 + a25 * 25 + a50 * 50 + a100 * 100;
	dollar = summ / 100;
	cent = summ - dollar * 100;
	cout << " There is " << dollar << " dollars and " << cent << " cents.\n";
	keep_window_open();
}