#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdlib.h>


using namespace std;

struct TelephoneBook {
	string name;
	string number;
	int month;
	int day;
	int year;
};

//TelephoneBook;
vector <TelephoneBook> phoneBook(0);

void menuPrompt();


void writeToFile() {
	ofstream outfile;
	outfile.open("24_2_textfile.txt", ios::out);
	for (int i=0; i<phoneBook.size(); i++) {
		outfile << phoneBook[i].name << "\n";
		outfile << phoneBook[i].number << "\n";
		outfile << phoneBook[i].month << "\n";
		outfile << phoneBook[i].day << "\n";
		outfile << phoneBook[i].year << "\n";
		outfile << "---\n";
	}
}

void add() {
	TelephoneBook tempContact;
	cout << "Enter name:\n";
	cin >> tempContact.name;
	cout << "Enter Phone Number:\n";
	cin >> tempContact.number;
	cout << "Enter # month of birth:\n";
	cin >> tempContact.month;
	cout << "Enter # day of birth:\n";
	cin >> tempContact.day;
	cout << "Enter # year of birth\n";
	cin >> tempContact.year;
	phoneBook.push_back(tempContact);
	cout << "Written\n";
	writeToFile();
	menuPrompt();
}



void readFromFile() {
	TelephoneBook tempContact;
	ifstream infile;
	string line;
	int lineCounter = -1;
	infile.open("24_2_textfile.txt", ios::in);
	while (getline(infile, line)) {
		cout << line << "\n";
		lineCounter++;
		switch (lineCounter) {
			case 0:
				tempContact.name = line;
				break;
			case 1:
				tempContact.number = line;
				break;
			case 2:
				tempContact.month = atoi(line.c_str());//Cast string to int
				break;
			case 3:
				tempContact.day = atoi(line.c_str());//Cast string to int
				break;
			case 4:
				tempContact.year = atoi(line.c_str());//Cast string to int
				break;
			case 5:
				lineCounter=-1;
				phoneBook.push_back(tempContact);
		}

		
	}
}

void printByIndex(int i) {
	cout << phoneBook[i].name << "\n";
	cout << phoneBook[i].number << "\n";
	cout << phoneBook[i].month << "/" << phoneBook[i].day << "/" << phoneBook[i].year << "\n";
	cout << "---\n";
}

int indexByName(string input, int mode) {
	//mode = 2 -> telephone
	//mode = 1 -> Name
	int output = -1;
	for (int i=0; i<phoneBook.size(); i++) {
		if (mode == 1 && phoneBook[i].name == input) {
			output = i;
		} else if (mode == 2 && phoneBook[i].number == input) {
			output = i;
		}
	}
	return output;
}


void search() {
	int option;
	int i;
	string s;
	cout << "'1' to search by name, '2' to search by phone number, '3' to return to menu: \n";
	cin >> option;

	if (option == 1 || option == 2) {
		cout << "Enter string to search:\n";
		cin >> s;
		i = indexByName(s, option);
	} else if (option == 3) {
		menuPrompt();
	} else {
		cout << "Invalid input\n";
		menuPrompt();
	}
	if (i == -1) {
		cout << "Not found\n";
		menuPrompt();
	} else {
		printByIndex(i);
		menuPrompt();
	}
}


void list() {
	for (int i=0; i<phoneBook.size(); i++) {
		cout << phoneBook[i].name << "\n";
		cout << phoneBook[i].number << "\n";
		cout << phoneBook[i].month << "/" << phoneBook[i].day << "/" << phoneBook[i].year << "\n";
		cout << "---\n";
	}
	menuPrompt();
}

void clearFile() {
	if (remove("24_2_textfile.txt") != 0) {
		cout << "Error deleting\n";
	} else {
		cout << "All entries removed\n";
	}
}


void menuPrompt() {
	int input=0;

	cout << "'1' to add, '2' to search, '3' to list all, '4' to exit, '5' to clear, '6' to delete: ";
	cin >> input;
	switch (input) {
		case 1:
			add();
			break;
		case 2:
			search();
			break;
		case 3:
			list();
			break;
		case 4:
			cout << "Hit control c";
			break;
		case 5:
			system("clear");
			menuPrompt();
			break;
		case 6:
			clearFile();
			break;
		default: 
			cout << "Not a valid input";
			menuPrompt();
	}
}

int main() {
	readFromFile();
	system("clear");
	menuPrompt();
	cout << "\n";
	return 0;
}

