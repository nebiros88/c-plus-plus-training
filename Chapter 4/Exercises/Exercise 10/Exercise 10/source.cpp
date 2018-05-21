#include "../../../../std_lib_facilities.h"
int game(char hum) {
	int summ_pc = 0;
	int summ_hum = 0;
	vector<char> ai = { 'r', 's', 'p', 'p', 'r', 's', 's', 'r', 'r', 'p' };
	vector<char> human(10);
	for (char hum; cin >> hum;) {
		human.push_back(hum);
	}
	for (int i = 0; i < ai.size();) {
		++i;
		cout << "Artifical intelligance choose " << ai[i] << " and you choose " << human[i] << ".\n";
		if (ai[i] == human[i]) {
			summ_pc += 1;
			summ_hum += 1;
		}
		if (ai[i] == 'r' || human[i] == 's' && ai[i] == 'p' || human[i] == 'r' && ai[i] == 's' || human[i] == 'p') {
			summ_pc += 1;
		}
		else if (ai[i] == 's' || human[i] == 'r' && ai[i] == 'r' || human[i] == 'p' && ai[i] == 'p' || human[i] == 's') {
			summ_hum += 1;
		}
	}	
	if (summ_pc > 5) {
		return 1;
	}
	if (summ_hum > 5) {
		return 2;
	}
	else if (summ_pc == summ_hum) {
		return 3;
	}
}
int main()
{
	int i = 0;
	char hum = ' ';
	cout << "Ok, let's play a game 'Rock - Scissors - Paper'. You should make on of them and type by keebord first letter and press 'Enter'/\n";
	for (i < 11; ++i;) {
		cin >> hum;
		game(hum);
	}
	if (game(hum) == 2) {
		cout << "You're loose!\n";
	}
	else if (game(hum) == 1) {
		cout << "You winn, congratulations!\n";
	}
	if (game(hum) == 3) {
		cout << "Try again! There are no winners and loosers)\n";
	}
	keep_window_open();
}