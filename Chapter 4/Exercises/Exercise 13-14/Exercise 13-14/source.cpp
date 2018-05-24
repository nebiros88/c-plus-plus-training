#include "../../../../std_lib_facilities.h"
int main()
{
	vector<int> primes;
	int max = 0;
	int a = 0;
	cout << "Please, enter maximal value.\n";
	cin >> max;
	for (int i = 0; i <= max; ++i) {
		primes[0] = i;
		for (int y = 2; y * y <= max; ++i) {
			if (primes[i] != 0) {
				for (int a = y * y; a <= max; ++a) {
					primes[a] = 0;
					if (primes[i] != 0) {
						primes.push_back(primes[i]);
					}
				}
			}
		}
	}
}