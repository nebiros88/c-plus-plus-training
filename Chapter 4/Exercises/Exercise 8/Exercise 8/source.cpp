#include "../../../../std_lib_facilities.h"
int recell(double wish_grains) {
	int i = 0;
	while (wish_grains >= 1) {
		++i;
		wish_grains /= 2;
	}
	return i;
}
int main()
{
	double grains_number = 0;
	int cell_number = 0;
	double summ = 0;
	double wish_grains = 0;
	for (int i = 1; i <= 64; ++i) {
		if (i == 1) {
			grains_number = 1;
		}
		if (i > 1) {
			grains_number = grains_number * 2;
		}
		summ += grains_number;
		cout << "Cell number is " << i << " and there are " << grains_number << " grains in it. You have " << summ << " grains at all.\n";
	}
	cout << "Please make number of grains your need and press 'Enter' and you will know how many cells you will need.\n";
	while (cin >> wish_grains) {
		cout << "The number of cell you will have to put your grains is " << recell(wish_grains) << " cells.\n";
	}
keep_window_open();
}