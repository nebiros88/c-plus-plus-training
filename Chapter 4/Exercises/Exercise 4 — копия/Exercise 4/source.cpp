#include "../../../../std_lib_facilities.h"
int main()
{
	string ans;
	vector<double> numbers;
	int ans1 = ' ';
	string ans2;
	string ans3;
	string ans4;
	string ans5;
	cout << "Please, make any number from 0 to 100.\n"
		 << " Your number is even or not? yes/no?.\n";
	cin >> ans;
	if (ans == "yes") {
		cout << "Choose where is your number?\n In case 0-9 push 1\n In case 10-19 push 2\n"
			<< "In case 20-29 push 3\n In case 30-39 push 4\n In case 40-49 push 5\n"
			<< "In case 50-59 push 6\n In case 60-69 push 7\n In case 70-79 push 8\n"
			<< "In case 80-89 push 9\n In case 90-99 push 10\n"
			<< "If there is no your number beetwen this cases uoer number is 100!\n";
		cin >> ans1;
		switch (ans1)
		{
		case 1: for (int i = 0; i < 10 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes") 
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 2: for (int i = 10; i < 20 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 3: for (int i = 20; i < 30 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 4: for (int i = 30; i < 40 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 5: for (int i = 40; i < 50 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 6: for (int i = 50; i < 60 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 7: for (int i = 60; i < 70 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 8: for (int i = 70; i < 80 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 9: for (int i = 80; i < 90 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 10: for (int i = 90; i <= 100 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		default: cout << "Not correct!\n";
		}
	}
	else if (ans == "no") {
		cout << "Choose where is your number?\n In case 0-10 push 1\n In case 10-20 push 2\n"
			<< "In case 20-30 push 3\n In case 30-40 push 4\n In case 40-50 push 5\n"
			<< "In case 50-60 push 6\n In case 60-70 push 7\n In case 70-80 push 8\n"
			<< "In case 80-90 push 9\n In case 90-100 push 10\n"
			<< "If there is no your number beetwen this cases uoer number is 100!\n";
	}
		cin >> ans1;
		switch (ans1)
		{
		case 1: for (int i = 1; i < 10 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 2: for (int i = 11; i < 20 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 3: for (int i = 21; i < 30 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 4: for (int i = 31; i < 40 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 5: for (int i = 41; i < 50 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 6: for (int i = 51; i < 60 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes") 
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 7: for (int i = 61; i < 70 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 8: for (int i = 71; i < 80 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 9: for (int i = 81; i < 90 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		case 10: for (int i = 91; i < 100 || i % 2 != 0; ++i) {
			numbers.push_back(i);
			}
			break;
			cout << "If your number is min or max in this case push yes if not push no.\n";
			cin >> ans2;
			if (ans2 == "yes") {
				cout << "Your number is  minimal or maximal value push yes or now?\n";
				cin >> ans3;
				if (ans3 == "yes")
					cout << "Your numbers is " << numbers[0] << " ?\n";
				else cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			}
			else cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans4;
			if (ans4 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans5;
				if (ans5 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
				}
			}
		default: cout << "Not correct!\n";
		}
	keep_window_open();
}