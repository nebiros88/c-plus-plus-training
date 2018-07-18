#include "../../../../std_lib_facilities.h"
int main()
{
	vector<string> names;
	vector<double> scores;
	string name;
	double score = ' ';
	int k = 0;
	string x;
	bool condition = false;
	int z = ' ';
	cout << "Enter the name ant the age.\n";
	while (cin >> name >> score && name != "noname") {
		names.push_back(name);
		scores.push_back(score);
	}
	for (int i = 0; i < names.size(); ++i) {
		for (int j = i + 1; j < names.size(); ++j) {
			if (names[i] == names[j]) {
				simple_error("There are similar words.\n");
			}
		}
	}
	cout << "Please enter the name and you will know their scores.\n ";
	cin >> x;
	for (int i = 0; i < names.size(); ++i) {
		if (x == names[i]) {
			condition = true;
			cout << x << "\t" << scores[i] << "\n";
		}
	}
	if (condition == false) {
		cout << "Can't find this name!\n";
	}
	condition = false;
	cout << "Please, enter number of scores and you will see all peoples with with this csores.\n";
	cin >> z;
	for (int i = 0; i < scores.size(); ++i) {
		if (z == scores[i]) {
			condition = true;
			cout << names[i] << "\t";
		}
	}
	if (condition == false) {
		cout << "Check your scores!\n";
	}
	keep_window_open();
}