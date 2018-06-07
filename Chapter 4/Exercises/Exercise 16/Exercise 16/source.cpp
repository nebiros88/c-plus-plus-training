#include "../../../../std_lib_facilities.h"
int main()
{
	vector<int> numbers;
	vector<int> times;
	int k = 1;
	int moda = 0;
	cout << "Any numbers.\n";
	for (int num; cin >> num;) {
		numbers.push_back(num);
	}
	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < numbers.size(); ++i) {
		for (int n = i + 1; n < numbers.size(); ++n) {
			if (numbers[i] == numbers[n]) {
				++k;
			}
		}
		times.push_back(k);
		k = 0;
	}
	for (int j = 0; j < times.size(); ++j) {
		cout << times[j] << "\t";
	}
	cout << "\n";
	moda = times[0];
	for (int i = 1; i < times.size(); ++i) {
		if (moda < times[i]) {
			k = i;
			moda = times[i];
		}
	}
	cout << numbers[k] << " this numbers is MODA.\n";
	keep_window_open();
}