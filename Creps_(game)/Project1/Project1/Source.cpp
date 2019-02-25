#include "../../../std_lib_facilities.h"
#include "locale";

int rollDice(void)
{
	setlocale(LC_CTYPE, "Russian");
	int die1, die2, workSum;
	die1 = 1 + rand() % 6;
	die2 = 1 + rand() % 6;
	workSum = die1 + die2;
	cout << "������ ������ " << die1 << " + " << die2 << " = " << workSum << endl;
	return workSum;
}

int main()
{
	enum Status { CONTINUE, WON, LOST };
	int sum, myPoint;
	Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum) 
	{
		case 7 : case 11 :
			gameStatus = WON;
			break;
		case 2: case 3: case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			cout << "����: " << myPoint << endl;
			break;
	}
	while (gameStatus == CONTINUE) {
		sum = rollDice();
		if (sum == myPoint)
			gameStatus = WON;
		else if (sum == 7)
			gameStatus = LOST;
	}
	if (gameStatus == WON) {
		cout << "����� �������" << endl;
	}
	else cout << "����� ��������" << endl;
	keep_window_open();
}