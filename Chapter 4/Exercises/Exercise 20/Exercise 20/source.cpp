#include "../../../../std_lib_facilities.h"
int main()
{
	vector<string> names;
	vector<double> scores;
	string name;
	double score = ' ';
	int k = 0;
	string x;
	bool y = false;
	cout << "Enter the name ant the age.\n";
	cin >> name >> score;
	while (name != "noname" && score != 0) {
		names.push_back(name);
		scores.push_back(score);
		cin >> name >> score;
	}
	for (int i = 0; i < names.size(); ++i) {
		for (int j = i + 1; j < names.size(); ++j) {
			if (names[i] == names[j]) {
				++k;
			}
		}
	}
	if (k > 0) {
		cout << "There are similar words.\n";
	}
	cout << "Please enter the name and you will know their scores.\n ";
	cin >> x;
	for (int i = 0; i < names.size(); ++i) {
		if (x == names[i]) {
			k = i;
			y = true;
			cout << x << "\t" << scores[k] << "\n";
		}
	}
	if (y == false) {
		cout << "Can't find this name!\n";
	}
	keep_window_open();
}