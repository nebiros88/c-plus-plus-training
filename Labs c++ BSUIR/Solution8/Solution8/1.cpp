#include <locale>
#include <iostream>
#include <fstream>
#include <iomanip>
#define nameSize 30

using namespace std;

char fileName[nameSize];

struct Date
{
	int day;
	int month;
	int year;
};

struct Receipt
{
	char name[nameSize];
	char mark[nameSize];
	Date arrivalDate[1];
	char masterSurname[nameSize];
	char condition[nameSize];

};

int enterChoice(void);					// ���� ������ ��� ������������
void createDB(const char *filename);	// �������� ������ ����� ��
bool fileExists(const char *fileName);	// �������� �� ���������� ����� ������������ �����
void fileWatch(const char *fileName, const Date *date = NULL);	// �������� �����
void fileChange(const char *fileName); // ������������� ������� �����
Receipt* addStruct(Receipt* rec, const int amount);		// ������ ��������� � ����������� ������
void setData(Receipt* rec, const int amount); // ������ ������, ��������� ���������
void sortByName(Receipt * rec, int arraySize);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	while ((choice = enterChoice()) != 5) {
		switch (choice) {
		case 1:
			do {
				cout << "������� ��� ������ �����...\n" << "?" << endl;
				cin >> fileName;
			} while (fileExists(fileName));
			createDB(fileName);
			break;
		case 2:
			fileWatch(fileName);
			break;
		case 3:
			fileChange(fileName);
			break;
		case 4:
		{
			Date tempDate;
			cout << "������� ���� ������ �������(�. �. ���)" << endl;
			cin >> tempDate.day >> tempDate.month >> tempDate.year;
			fileWatch(fileName, &tempDate);
		}
		break;
		default:
			cout << "�������� �����!" << endl;
			break;
		}
	}


}
// �������� ������ ���� 
int enterChoice(void) {
	cout << endl << "��������, ��� �� ������ �������: " << endl
		<< "1 - �������� ������ �����" << endl
		<< "2 - �������� �����" << endl
		<< "3 - ������������� ������� �����" << endl
		<< "4 - ���������� ������" << endl
		<< "5 - �����" << endl << "?" << endl;
	int menuChoice;
	cin >> menuChoice;
	return menuChoice;
}

// �������� ������ ����� ��� ������ � ������
void createDB(const char *fileName) {
	FILE *f;
	fopen_s(&f, fileName, "wb");
	if (!(f))
		cout << "���� �� ����� ���� ������!\n" << endl;
	fclose(f);
	cout << "���� ��� ������ � ������ " << fileName << " ������� ������...\n ?" << endl;
}

//�������� �� ���������� ����� ������ ����� � �������������
bool fileExists(const char *fileName) {
	FILE *f;
	errno_t err = fopen_s(&f, fileName, "r");
	if (err)
		return false;
	else {
		fclose(f);
		return true;
	}
}

// �������� �����
void fileWatch(const char *fileName, const Date *date)
{
	if (!fileExists(fileName))
		cout << "������ �������� �����!" << endl;
	else {
		int recAmount = 0;
		FILE *f;
		fopen_s(&f, fileName, "rb");
		cout << setw(5) << "����� ������" << setw(15) << "������������"
			<< setw(20) << "����� �������" << setw(15) << "���� �������"
			<< setw(20) << "������� �������" << setw(20) << "��������� ������"
			<< endl;
		fseek(f, 0, SEEK_END);
		recAmount = ftell(f) / sizeof(Receipt);
		fseek(f, 0, SEEK_SET);
		Receipt * rec = new Receipt[recAmount];
		fread(rec, sizeof(Receipt), recAmount, f);
		if (date != NULL)
			sortByName(rec, recAmount);
		for (int i = 0; i < recAmount; i++) {
			if (date == NULL || rec[i].arrivalDate->day == date->day && rec[i].arrivalDate->month == date->month && rec[i].arrivalDate->year == date->year)
				cout << setw(5) << i + 1 << setw(15) << rec[i].name
				<< setw(20) << rec[i].mark << setw(15) << rec[i].arrivalDate->day << rec[i].arrivalDate->month << rec[i].arrivalDate->year
				<< setw(20) << rec[i].masterSurname << setw(10) << rec[i].condition
				<< endl;
		}
		fclose(f);
	}
}

// �������� ��������� � ������ (������������)
Receipt* addStruct(Receipt* rec, const int amount) {
	if (amount == 0) {
		rec = new Receipt[amount + 1];	// ���������� ������ ��� ������ ��������
	}
	else {
		Receipt* temprec = new Receipt[amount + 1];
		for (int i = 0; i < amount; i++) {
			temprec[i] = rec[i];		// �������� �� ��������� ������
		}
		delete[] rec;
		rec = temprec;
	}
	return rec;
}
// ���������� ����� ���������
void setData(Receipt* rec, const int amount) {
	cout << "������������...\n";
	cin >> rec[amount].name, nameSize;
	cout << "�����....\n";
	cin >> rec[amount].mark, nameSize;
	cout << "���� ����������� (����, �����, ���)";
	cin >> rec[amount].arrivalDate->day;
	cin >> rec[amount].arrivalDate->month;
	cin >> rec[amount].arrivalDate->year;
	cout << "������� ������� ���������...\n";
	cin >> rec[amount].masterSurname, nameSize;
	cout << "������ ������...\n";
	cin >> rec[amount].condition, nameSize;
	cout << endl;
}

// ������������� ������� �����
void fileChange(const char *fileName) {
	int menuChoice;
	cout << endl << "��������, ��� �� ������ �������: " << endl
		<< "1 - �������� ������" << endl
		<< "2 - �������� ����� ������" << endl
		<< "3 - ������� ������" << endl << "?" << endl;
	cin >> menuChoice;
	switch (menuChoice)
	{
	case 1:
	{
		FILE *f;
		fopen_s(&f, fileName, "rb");
		int recNumber = 0;
		int recAmount = 0;
		fseek(f, 0, SEEK_END);
		recAmount = ftell(f) / sizeof(Receipt);
		fseek(f, 0, SEEK_SET);
		Receipt * rec = new Receipt[recAmount];
		fread(rec, sizeof(Receipt), recAmount, f);
		fclose(f);
		cout << "�������� ����� ������ ������� �� ������ ��������?" << endl;
		cin >> recNumber;
		while (recNumber > recAmount) {
			cout << "�� ������ �����! �������� ����� ������ ������� �� ������ ��������?" << endl;
			cin >> recNumber;
		}
		setData(rec, recNumber - 1);
		fopen_s(&f, fileName, "w+b");
		fwrite(rec, sizeof(Receipt), recAmount, f);
		fclose(f);
		delete[] rec;
	}
	break;
	case 2:
	{
		FILE *f;
		fopen_s(&f, fileName, "ab");
		Receipt * rec = 0;
		int recAmount = 0;
		int YesorNo = 0;
		do {
			rec = addStruct(rec, recAmount);
			setData(rec, recAmount);
			recAmount++;
			cout << "���������� ���� ������ (1 - ��, 0 - ���)" << endl;
			cin >> YesorNo;
			cin.get();
		} while (YesorNo != 0);
		fwrite(rec, sizeof(rec[recAmount]), recAmount, f);
		fclose(f);
	}
	break;
	case 3:
	{
		FILE *f;
		fopen_s(&f, fileName, "rb");
		int recNumber = 0;
		int recAmount = 0;
		fseek(f, 0, SEEK_END);
		recAmount = ftell(f) / sizeof(Receipt);
		fseek(f, 0, SEEK_SET);
		Receipt * rec = new Receipt[recAmount];
		fread(rec, sizeof(Receipt), recAmount, f);
		fclose(f);
		cout << "�������� ����� ������ ������� �� ������ �������?" << endl;
		cin >> recNumber;
		while (recNumber > recAmount) {
			cout << "�� ������ �����! �������� ����� ������ ������� �� ������ �������?" << endl;
			cin >> recNumber;
		}
		for (int i = recNumber; i < recAmount; i++) {
			rec[i - 1] = rec[i];
		}
		fopen_s(&f, fileName, "w+b");
		fwrite(rec, sizeof(Receipt), recAmount - 1, f);
		fclose(f);
		delete[] rec;
	}
	break;
	default:
		cout << "/n �� ������ �����!" << endl;
	}
}

void sortByName(Receipt * rec, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		for (int j = i + 1; j < arraySize; j++) {
			if (strcmp(rec[i].masterSurname, rec[j].masterSurname) > 0) {
				Receipt temp = rec[i];
				rec[i] = rec[j];
				rec[j] = temp;
			}
		}
	}
}
