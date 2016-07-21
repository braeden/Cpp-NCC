#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int myrand;
	int i;
	string input;
	string qOne = "What is your name?\n";
	string qTwo = "What is your favorite color?\n";
	string qThree = "How old are you?\n";

	string ansOne = "That's cool\n";
	string ansTwo = "That's neat\n";
	string ansThree = "Wow!\n";
	string ansFour = "That's great\n";
	string ansFive = "Nice!\n";

	for (i=0; i<3; i++) {


		srand(time(NULL));	
		myrand = rand() % 3 + 1;

		if (myrand == 1) {
			cout << qOne;
		} else if (myrand == 2) {
			cout << qTwo;
		} else if (myrand == 3) {
			cout << qThree;
		}
		cin >> input;
		srand(time(NULL));	
		myrand = rand() % 5 + 1;

		if (myrand == 1) {
			cout << ansOne;
		} else if (myrand == 2) {
			cout << ansTwo;
		} else if (myrand == 3) {
			cout << ansThree;
		} else if (myrand == 4) {
			cout << ansFour;
		} else if (myrand == 5) {
			cout << ansFive;
		}
	}

	/*while(myrand != guess) {
		cout << "Guess:\n";
		cin >> guess;
		if (guess > myrand) {
			cout << "To high\n";
		} else if (guess < myrand) {
			cout << "To low\n";
		} else {
			break;
		}
		count++;
	}
	cout << "Correct\nIt took " << count << " guesses\n";*/
}