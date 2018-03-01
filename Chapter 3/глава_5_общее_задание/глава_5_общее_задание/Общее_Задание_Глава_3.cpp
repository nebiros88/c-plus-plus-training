#include "../../../std_lib_facilities.h"
int main()
{
	cout << "Please enter the name of addresser and press 'Enter' ;\n";
	string first_name;
	string friend_name;
	char friend_sex;
	int age;
	cin >> first_name;
	cout << "Please enter the name of your friend end press 'Enter' ;\n";
	cin >> friend_name;
	cout << "Please choose the sex of your friend? If male press 'm'. If female press 'f'.\n";
	cin >> friend_sex;
	cout << "How old your friend is?\n";
	cin >> age;
	cout << "Dear, " << first_name << " !\n";
	cout << "How are you? I'm fine. I miss you.";
	cout << "How long you dont saw your " << friend_name << " ?\n";
	if (friend_sex == 'm') {
		cout << "If you will see" << friend_name << ", please talk him to call me.";
		}
	if (friend_sex == 'f') {
		cout << "If you will see " << friend_name << ", please talk her to call me.";
	}
	cout << "I heared that you have been partying your birthday just yet and now you are " << age << " .\n";
	if (age <= 0 || age >= 110) {
		simple_error("Ты шутишь !");
	}
	if (age <= 12) {
		cout << " Next year you will be " << age + 1 << " years old. \n";
	}
	if (age == 17) {
		cout << " Next year you can choose your president.\n";
	}
	if (age >= 70) {
		cout << " I hope you dont miss about youe unemployment.\n";
	}
	cout << " With all regrets!\n";
	cout << "\n";
	cout << "\n";
	cout << " Sergey \n";
	keep_window_open();
}