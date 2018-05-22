#include "../../../../std_lib_facilities.h"
bool is_prime(int i) {
	int val = i;
	bool res = true;
	for (int z = 2; z < val;) {
		++z;
		if (val % 2 == 0) {
			res = true;
		}
		else res = false;
	}
	return res;
}
int main()
{
	int result = 0;
	vector<int> primes;
	for (int i = 1; i < 100;) {
		if (is_prime(i) == false) {
			result = i;
			primes.push_back(result);
			++i;
			cout << "\t" << result << "\t";
		}
		else ++i;
	}
	keep_window_open();
}