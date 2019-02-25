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
		cerr << "���� �� ����� ���� ������." << endl;
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
			cerr << "�������� �����!" << endl;
			break;
		}
		inOutCredit.clear();				// ����� ���������� ����� �����
	}
}

//����������� ������� ������ ����

int enterChoice(void) {
	cout << endl << "��������:" << endl
		<< "1 - �������� ���������� ���������������� ����� ������" << endl
		<< " � ������ \"print.txt * ��� ������" << endl
		<< "2 - ��������� �����" << endl
		<< "3 - ���������� ������ �����" << endl
		<< "4 - �������� �����" << endl
		<< "5 - ����� ������" << endl << "? ";
	int menuChoice;
	cin >> menuChoice;
	return menuChoice;
}

//�������� ���������������� ���������� ����� ��� ������

void textFile(fstream &readFromFile) {
	ofstream outPrintFile("print.txt", ios::out);
	if (!outPrintFile) {
		cerr << "���� �� ����� ���� ������!" << endl;
		exit(1);
	}
	outPrintFile << setiosflags(ios::left) << setw(6) << "����"
		<< setw(16) << "�������" << setw(11) << "���"
		<< setiosflags(ios::right) << setw(10) << "������" << endl;
	readFromFile.seekg(0);

	clientData client;
	readFromFile.read((char *)&client, sizeof(client));

	while (!readFromFile.eof()) {
		if (client.acctNum != 0)
			outputLine(outPrintFile, client);
		readFromFile.read((char *)&client, sizeof(client));
	}
}

// ��������� ������� �����

void updateRecord(fstream &updateFile) {
	int account;
	do {
		cout << "������� ����, ������� ������� �������� (1 - 100): ";
		cin >> account;
	} while (account < 1 || account > 100);
	updateFile.seekg((account - 1) * sizeof(client));
	clientData client;
	updateFile.read((char *)&client, sizeof(client));
	if (client.acctNum != 0) {
		outputLine(cout, client);
		cout << endl << "������� ������ (+) ��� ������� (-): ";

		float transaction;
		cin >> transaction;
		client.balance += transaction;
		outputLine(cout, client);
		updateFile.seekp((account - 1) * sizeof(client));
		updateFile.write((char *)&client, sizeof(client));
	}
	else
		cerr << "���� � " << account << " �� ��������." << endl;
}

// �������� � ������� ����� ������

void newRecord(fstream &insertInFile) {
	cout << "�������  ����� ����� ����� (1 - 100):";
	int account;
	cin >> account;
	insertInFile.seekg((account - 1) + sizeof(client));

	clientData client;
	insertInFile.read((char *)&client, sizeof(client));

	if (client.acctNum == 0) {
		cout << "������� �������, ���, ������" << endl << "? ";
		cin >> client.acctNum >> client.firstName >> client.balance;
		client.acctNum = account;
		insertInFile.seekp((account - 1) * sizeof(clientData));
		insertInFile.write((char *)&client, sizeof(clientData));
	}
	else
		cerr << "���� � " << account << " ��� �������� ����������." << endl;
}

// �������� ������������ ������

void deleteRecord(fstream &deleteFromFile) {
	cout << "������� ����� ����� ��� �������� (1 - 100): ";
	int account;
	cin >> account;
	deleteFromFile.seekg((account - 1) * sizeof(client));
	clientData client;
	deleteFromFile.read((char *)&client, sizeof(client));
	if (client.acctNum != 0) {
		clientData blankClient = { 0, "", "", 0 };

		deleteFromFile.seekp((account - 1) * sizeof(client));
		deleteFromFile.write((char *)&blankClient, sizeof(client));
		cout << "���� � " << account << " ������." << endl;
	}
	else
		cout << "���� � " << account << " ������." << endl;

	// ����� ������ � ����������� � �������

	void outputLine(ostream &output, clientData c) {
		output << setiosflags(ios::left) << setw(6) << c.acctNum
			<< setw(16) << c.lastName << setw(11) << c.firstName
			<< setiosflags(ios::showpoint | ios::right)
			<< setw(10) << setprecision(2) << c.balance << endl;
	}
}




