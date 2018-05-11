#include "../../../../std_lib_facilities.h"
int main()
{
	int grains_number = 0;
	int cell_number = 0;
	int summ = 0;
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

keep_window_open();
}