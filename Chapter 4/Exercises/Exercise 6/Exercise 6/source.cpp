# include "../../../../std_lib_facilities.h"
int rename(string b) {
	vector<string> a = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	for (int i = 0; i < a.size(); ++i) {
		if (b == a[i]) {
			return i;
		}
	}
	return 10;
}

int main()
{
	string b = " ";
	cout << "Please make any number from 0 to 9  and press 'Enter'/\n";
	while (cin >> b) {
		if (rename(b) == 10)
		cout << "Not correct!\n";
		else cout << rename(b);
	}
	keep_window_open();
}