#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>


using namespace std;

string unfilled;

string getWord(int index) {
	ifstream infile;
	string word;
	string line;
	int row;
	row = 0;
	infile.open("23_textfile.txt", ios::in);
	while (getline(infile, line)) {
		if (row == index) {
			cout << line << "\n";
			word = line;
		}
		row++;
		
	}
	return word;

}
	
char guessLetter() {
	char input;
	cout << "Guess a letter:\n";
	cin >> input;
	return input;
}

void putChar(int position, char letter = '-') {
	int i;
	for (i=0;i<unfilled.size() && position != -1; i++) {
		if (i==position) {
			unfilled[i]=letter;
		}
	}
}

int getPosition(string word, char letter) {
	int i;
	int a = -1;
	for (i=0;i<word.size(); i++) {
		if (word[i] == letter && unfilled[i] != letter) {
			putChar(i, letter);
			a = 1;
		}
	}
	return a;
}



int main() {
	string word;
	char input;
	int wrong = 0;
	int i;
	int position;

	srand(time(NULL));
	int index = rand() % 7; // Line number //int(system("wc -l < 23_textfile.txt"));

	word = getWord(index); //Fetch random word from file

	unfilled = word; //Fill in unfilled with blanks
	for (i=0; i<unfilled.size(); i++) {
		unfilled[i] = '_';
	}

	

	
	while (unfilled != word) {
		input = guessLetter();
		position = getPosition(word, input);
		if (position == -1) { //Char doesnt exist
			putChar(position, input);
			cout << "Sorry you are wrong\n";
			wrong++;
			cout << unfilled << "\n"; //Print old blanks
		} else {
			cout << unfilled << "\n";

		}

		if (wrong == 10) {
			cout << "You lost, the word is: " << word << "\n"; 
			return 0;
		}
	}
	cout << "You Won!";

	cout << "\n";
	return 0;
}

