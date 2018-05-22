#include "../../../../std_lib_facilities.h"
int main()
{
	char result = ' ';
	char pc = 0;
	char person = 0;
	vector<char> human (10);
	vector<char> ai = { 'r', 's', 'p', 'p', 's', 'r', 's', 's', 'p', 'r' };
	cout << "Ok, let's play a game 'Rock - Scissors - Paper'. Press any ten values and press 'Enter'.\n";
	for (char hum; cin >> hum;)
	human.push_back(hum);
	for (int i = 0; i < human.size(); ++i) {
		for (int z = 0; z < ai.size(); ++z) {
			if (ai[i] == human[i]) {
				result = 0;
			}
			else if (ai[z] == 'r' || human[i] == 's' && ai[z] == 'p' || human[i] == 'r' && ai[z] == 's' || human[i] == 'p') {
				result = 1;
			}
			else if (ai[z] == 's' || human[i] == 'r' && ai[z] == 'r' || human[i] == 'p' && ai[z] == 'p' || human[i] == 's') {
				result = 2;
			}
			switch (result) {
			case '0' :
				pc += 1;
				person += 1;
				break;
			case '1' :
				pc += 1;
				break;
			case '2' :
				person += 1;
				break;
			default :
				cout << "Not correct!\n";
			}
			cout << "PC choise is " << ai[z] << " and your choise is " << human[i] << ".\n";
		}
	}
	if (pc > person) {
		cout << " You are looser!\n";
	}
	else if (pc < person) {
		cout << "You WINN!!!\n";
	}
	else if (pc == person) {
		cout << "There are no luckers(\n";
	}
	keep_window_open();
}