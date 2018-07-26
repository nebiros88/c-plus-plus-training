#include "../../../../std_lib_facilities.h"
int main()
{
	vector<int> values = { 1, 2, 3, 4 };
	bool result = false;
	cout << "Please enter any 4 values form 0 to 9 and press 'Enter'.\n";
	try {
		while (result != true) {

			vector<int> answers;
			int bools = 0;
			int cows = 0;
			int answer = 0;
			for (int i = 0; i < 4; ++i) {
				cin >> answer;
				if (answer < 0 || answer > 9) error("Not correct values!\n");
				answers.push_back(answer);
			}
			for (int i = 0; i < values.size(); ++i) {
				for (int j = 0; j < values.size(); ++j) {
					if (answers[j] == values[i] && i == j) {
						++bools;
					}
					else if (answers[j] == values[i]) {
						++cows;
					}
				}
			}
			cout << bools << " bools " << cows << " cows\n";
			if (bools == 4) {
				result = true;
			}
		}
		cout << "Your win!\n";
		keep_window_open();
		keep_window_open();
	}
	catch (runtime_error & e) {
		cerr << e.what();
		keep_window_open();
	}
}