#include "../../../../std_lib_facilities.h"
int choise_even (int ans1) {
	vector<int> numbers;
	int result;
	if (ans1 == '1') 
		for (int i = 0; i < 10 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			result = numbers[i];
		}
	
	if (ans1 == '2') 
		for (int i = 10; i < 20 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '3') 
		for (int i = 20; i < 30 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '4') 
		for (int i = 30; i < 40 || i % 2 == 0; ++i) {
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '5') 
		for (int i = 40; i < 50 || i % 2 == 0; ++i){
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '6') 
		for (int i = 50; i < 60 || i % 2 == 0; ++i){
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '7') 
		for (int i = 60; i < 70 || i % 2 == 0; ++i){
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '8') 
		for (int i = 70; i < 80 || i % 2 == 0; ++i){
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '9') 
		for (int i = 80; i < 90 || i % 2 == 0; ++i){
			numbers.push_back(i);
			result = numbers[i];
		}
	if (ans1 == '10') 
		for (int i = 90; i < 100 || i % 2 == 0; ++i){
			numbers.push_back(i);
			result = numbers[i];
		}
	return result;
}

int even(int ans1) {
	vector<int> numbers;
	string ans2;
	int result;
	choise_even(ans1);
		cout << "If your number is min or max in this case push yes if not push no.\n";
		cin >> ans2;
		if (ans2 == "yes") {
			cout << "Your numbers is " << numbers[0] << " ?\n";
			cin >> ans2;
			if (ans2 == "yes")
				result = numbers[0];
			else if (ans2 == "no")
				cout << "Your numbers is " << numbers[numbers.size()] << " ?\n";
			cin >> ans2;
			if (ans2 == "yes")
				result = numbers[numbers.size()];
		}
		else if (ans2 == "no") {
			cout << "Your number is " << numbers[numbers.size() / 2] << " push  or no?\n";
			cin >> ans2;
			if (ans2 == "yes")
				result = numbers[numbers.size() / 2];
			if (ans2 == "no") {
				cout << "Your number is " << numbers[numbers.size() / 2 - 1] << " if no type no?\n";
				cin >> ans2;
				if (ans2 == "yes")
					result = numbers[numbers.size() / 2 - 1];
				else if (ans2 == "no") {
					cout << "Your number is " << numbers[numbers.size() / 2 + 1] << "!!!\n";
					result = numbers[numbers.size() / 2 + 1];
				}
			}
		}
	}
	return result;
}
int main()
{
	string ans;
	int value = 0;
	int ans1;
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
		value = even(ans1);
		cout << "Your number is " << value << " !!!!!\n";
	}
	else if (ans == "no") {
		cout << "Choose where is your number?\n In case 0-10 push 1\n In case 10-20 push 2\n"
			<< "In case 20-30 push 3\n In case 30-40 push 4\n In case 40-50 push 5\n"
			<< "In case 50-60 push 6\n In case 60-70 push 7\n In case 70-80 push 8\n"
			<< "In case 80-90 push 9\n In case 90-100 push 10\n"
			<< "If there is no your number beetwen this cases uoer number is 100!\n";
		cin >> ans1;
		value = even(ans1);
		cout << "Your number is " << value << " !!!!!\n";
	}
	keep_window_open();
}