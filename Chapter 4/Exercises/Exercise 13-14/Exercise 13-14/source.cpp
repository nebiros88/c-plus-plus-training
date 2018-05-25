#include "../../../../std_lib_facilities.h"
int main()
{
	vector<int> primes;
	int max = 0;
	int a = 0;
	cout << "Please, enter maximal value.\n";
	cin >> max;
	for (int i = 0; i <= max; ++i) {
		primes[i] = i;
		for (int j = 2; j < max; ++j) {
			primes[j] = 0;
			if (primes[j] != 0) {
				for (int k = j * j; k < max; ++k) {
					primes[k] = 0;
				}
			}
		}
		if (primes[i] != 0) {
			cout << primes[i] << "\t";
		}
	}
	keep_window_open();
}