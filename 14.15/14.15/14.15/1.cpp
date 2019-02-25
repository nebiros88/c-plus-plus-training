#include <iostream>
#include <locale>
#include <fstream>
#include <iomanip>
#include <stdlib.h>


using namespace std;

struct clientData
{
	int acctNum;
	char lastName;
	char firstName;
	float balance;
};

int enterChoice(void);
void textFile(fstream&);
void updateRecord(fstream&);
void newRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, clientData);

void main()
{
	setlocale(LC_CTYPE, "Russian");
	fstream inOutCredit("credit.dat", ios::in | ios::out);
	if (!inOutCredit) {
		cerr << "Файл не может быть открыт." << endl;
		exit(1);
	}

	int choice;

	while ((choice = enterChoice()) != 5) {
		switch (choice) {
		case 1:
			textFile(inOutCredit);
			break;
		case 2:
			updateRecord(inOutCredit);
			break;
		case 3:
			newRecord(inOutCredit);
			break;
		case 4:
			deleteRecord(inOutCredit);
			break;
		default:
			cerr << "Неверный выбор!" << endl;
			break;
		}
		inOutCredit.clear();				// сброс индикатора конца файла
	}
}

//Приглашение выбрать раздел меню

int enterChoice(void) {
	cout << endl << "Выберите:" << endl
		<< "1 - создание текстового форматированного файла счетов" << endl
		<< " с именем \"print.txt * для печати" << endl
		<< "2 - изменение счета" << endl
		<< "3 - добавление нового счета" << endl
		<< "4 - удаление счета" << endl
		<< "5 - конец работы" << endl << "? ";
	int menuChoice;
	cin >> menuChoice;
	return menuChoice;
}

//Создание форматированного текстового файла для печати

void textFile(fstream &readFromFile) {
	ofstream outPrintFile("print.txt", ios::out);
	if (!outPrintFile) {
		cerr << "Файл не может быть открыт!" << endl;
		exit(1);
	}
	outPrintFile << setiosflags(ios::left) << setw(6) << "Счет"
		<< setw(16) << "Фамилия" << setw(11) << "Имя"
		<< setiosflags(ios::right) << setw(10) << "Баланс" << endl;
	readFromFile.seekg(0);

	clientData client;
	readFromFile.read((char *)&client, sizeof(client));

	while (!readFromFile.eof()) {
		if (client.acctNum != 0)
			outputLine(outPrintFile, client);
		readFromFile.read((char *)&client, sizeof(client));
	}
}

// Изменение баланса счета

void updateRecord(fstream &updateFile) {
	int account;
	do {
		cout << "Введите счет, который следует обновыть (1 - 100): ";
		cin >> account;
	} while (account < 1 || account > 100);
	updateFile.seekg((account - 1) * sizeof(client));
	clientData client;
	updateFile.read((char *)&client, sizeof(client));
	if (client.acctNum != 0) {
		outputLine(cout, client);
		cout << endl << "Введите расход (+) или доплату (-): ";

		float transaction;
		cin >> transaction;
		client.balance += transaction;
		outputLine(cout, client);
		updateFile.seekp((account - 1) * sizeof(client));
		updateFile.write((char *)&client, sizeof(client));
	}
	else
		cerr << "Счет № " << account << " не заполнен." << endl;
}

// Создание и вставка новой записи

void newRecord(fstream &insertInFile) {
	cout << "Введите  новый номер счета (1 - 100):";
	int account;
	cin >> account;
	insertInFile.seekg((account - 1) + sizeof(client));

	clientData client;
	insertInFile.read((char *)&client, sizeof(client));

	if (client.acctNum == 0) {
		cout << "Введите фамилию, имя, баланс" << endl << "? ";
		cin >> client.acctNum >> client.firstName >> client.balance;
		client.acctNum = account;
		insertInFile.seekp((account - 1) * sizeof(clientData));
		insertInFile.write((char *)&client, sizeof(clientData));
	}
	else
		cerr << "Счет № " << account << " Уже содержит информацию." << endl;
}

// Удаление существующей записи

void deleteRecord(fstream &deleteFromFile) {
	cout << "Введите номер счета для удаления (1 - 100): ";
	int account;
	cin >> account;
	deleteFromFile.seekg((account - 1) * sizeof(client));
	clientData client;
	deleteFromFile.read((char *)&client, sizeof(client));
	if (client.acctNum != 0) {
		clientData blankClient = { 0, "", "", 0 };

		deleteFromFile.seekp((account - 1) * sizeof(client));
		deleteFromFile.write((char *)&blankClient, sizeof(client));
		cout << "Счет № " << account << " удален." << endl;
	}
	else
		cout << "Счет № " << account << " пустой." << endl;

	// Вывод строки с информацией о клиенте

	void outputLine(ostream &output, clientData c) {
		output << setiosflags(ios::left) << setw(6) << c.acctNum
			<< setw(16) << c.lastName << setw(11) << c.firstName
			<< setiosflags(ios::showpoint | ios::right)
			<< setw(10) << setprecision(2) << c.balance << endl;
	}
}




