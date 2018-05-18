#include "../../../../std_lib_facilities.h"
bool game(char hum) {
	vector<char> ai = { 'r', 's', 'p', 'p', 'r', 's', 's', 'r', 'r', 'p' };
	int comparsion_pc = ' ';
	int comparsion_hum = ' ';


}
int main()
{
	vector<char> ai = { 'r', 's', 'p', 'p', 'r', 's', 's', 'r', 'r', 'p' };
	char hum = ' ';
	int summ_pc = 0;
	int summ_hum = 0;
	cout << "Ok, let's play a game 'Rock - Scissors - Paper'. You should make on of them and type by keebord first letter and press 'Enter'/\n";
	for (int i = 0; i <= 10; ++i) {
		cin >> hum;
		if (game(hum) == true) {
			summ_pc += 1;
		}
		else if (game(hum) == false) {
			summ_hum += 1;
		}
	}
	if (summ_pc > summ_hum && summ_pc != summ_hum) {
		cout << "You're loose!\n";
	}
	else if (summ_pc < summ_hum && summ_pc != summ_hum) {
		cout << "You winn, congratulations!\n";
	}
	if (summ_pc == summ_hum) {
		cout << "Try again! There are no winners and loosers)\n";
	}
	keep_window_open();
}