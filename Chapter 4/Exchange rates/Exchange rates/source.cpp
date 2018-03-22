#include "../../../std_lib_facilities.h"
int main()
{
	constexpr double usd_per_eur = 0.8147;
	constexpr double usd_per_rub = 57.4954;
	constexpr double usd_per_pound = 0.7123;
	double quantity = 0;
	char currency = ' ';
	cout << "Please, enter quantity and currency (e - eur, r - rub or p - pound) and press 'Enter'.\n";
	cin >> quantity >> currency;
	switch (currency) {
	case 'e' :
		cout << quantity << " EUR =" << quantity / usd_per_eur << " USD\n";
		break;
	case 'r' :
		cout << quantity << " RUB =" << quantity / usd_per_rub << " USD\n";
		break;
	case 'p' :
		cout << quantity << " POUNDS =" << quantity / usd_per_pound << " USD\n";
		break;
	default:
		cout << "Sorry, unknown value.\n";
	}
	keep_window_open();
}