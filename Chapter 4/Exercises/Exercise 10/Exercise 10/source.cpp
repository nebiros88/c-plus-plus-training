#include "../../../../std_lib_facilities.h"
int main()
{
	char result = ' ';
	char pc = 0;
	char person = 0;
	char human = ' ';
	vector<char> ai = { 'r', 's', 'p', 'p', 's', 'r', 's', 's', 'p', 'r' };
	cout << "Ok, let's play a game 'Rock - Scissors - Paper'. Press any ten values and press 'Enter'.\n";;
	for (int z = 0; z < ai.size(); ++z) {
		cin >> human;
		if (ai[z] == human) {
			result = 0;
		}
		else if (ai[z] == 'r' || human == 's' && ai[z] == 'p' || human == 'r' && ai[z] == 's' || human == 'p') {
			result = 1;
		}
		else if (ai[z] == 's' || human == 'r' && ai[z] == 'r' || human == 'p' && ai[z] == 'p' || human == 's') {
			result = 2;
		}
		cout << "PC choise is " << ai[z] << " and your choise is " << human << ".\n";
		if (result == 1) {
			cout << "Loss.\n";
		}
		else if (result == 2) {
			cout << "Victory.\n";
		}
		else if (result == 0) {
			cout << "Draw.\n";
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