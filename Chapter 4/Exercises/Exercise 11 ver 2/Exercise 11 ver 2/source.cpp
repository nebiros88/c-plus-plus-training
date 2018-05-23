#include "../../../../std_lib_facilities.h"
bool is_prime(int i) {
	int val = i;
	bool res = true;
	for (int z = 1; z < sqrt(val); ++z) {
		if (val % 2 == 0 || val % 3 == 0 || val % 5 == 0) {
			res = false;
		}
		else res = true;
	}
	return res;
}
int main()
{
	int result = 0;
	vector<int> primes;
	for (int i = 1; i < 100; ++i) {
		if (is_prime(i) == true) {
			result = i;
			primes.push_back(result);
			cout << "\t" << result << "\t";
		}
	}
	keep_window_open();
}