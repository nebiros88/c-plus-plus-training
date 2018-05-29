#include "../../../../std_lib_facilities.h"
int main()
{
	/*for (int i = 2; i <= max; ++i) {
		primes[i] = true;
	}
	for (int j = 2; j < sqrt(max); ++j) {
		if (primes[j] == true)
			for (int k = j * 2; k < max; ++k) {
				if (k % j == 0)
					primes[k] = false;
			}
	}
	for (int i = 2; i <= max; ++i)
		if (primes[i] == true) {
			cout << i << "\t";
		}
	*/
	/*for (int i = 0; i <= max; ++i) {
		primes[i] = i;
		primes[1] = 0;
		for (int j = 2; j <= max; ++j) {
			if (primes[j] != 0) {
				for (int k = j * 2; k <= max; k += j) {
					primes[k] = 0;
				}

			}
		}
		if (primes[i] != 0) {
			cout << primes[i] << "\t";
		}
	}
	*/
	int max = 0;
	vector<int> primes;
	int n = 1;
	cout << "Please, enter maximal value.\n";
	cin >> max;
	for (int i = 0; i < max; ++i) {
		primes.push_back(i);
	}
	primes[1] = 0;
	while (primes[1 + n] * 2 < max) {
		if (primes[1 + n] != 0) {
			for (int j = primes[1 + n] * 2; j < max; j += primes[1 + n])
				primes[j] = 0;
		}
		++n;
	}

	keep_window_open();
}