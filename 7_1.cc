#include <iostream>
#include <string>
using namespace std;

int main()
{
	string stateOne, stateTwo, stateThree, stateFour, stateFive;
	string capitalOne, capitalTwo, capitalThree, capitalFour, capitalFive;
	string ansOne, ansTwo, ansThree, ansFour, ansFive;

	stateOne = "Virginia";
	capitalOne = "Richmond";

	stateTwo = "Connecticut";
	capitalTwo = "Hartford";

	stateThree = "Texas";
	capitalThree = "Austin";
	
	stateFour = "Tennesse";
	capitalFour = "Nashville";

	stateFive = "Nebraska";
	capitalFive = "Lincoln";	

	cout << "What is the capital of " << stateOne << "\n";
	cin >> ansOne;
	if (ansOne == capitalOne) {
		cout << "Correct\n";
	} else {
		cout << "Sorry you are wrong\n";
	}

	
	cout << "What is the capital of " << stateTwo << "\n";
	cin >> ansTwo;
	if (ansTwo == capitalTwo) {
		cout << "Correct\n";
	} else {
		cout << "Sorry you are wrong\n";
	}

	cout << "What is the capital of " << stateThree << "\n";
	cin >> ansThree;
	if (ansThree == capitalThree) {
		cout << "Correct\n";
	} else {
		cout << "Sorry you are wrong\n";
	}

	cout << "What is the capital of " << stateFour << "\n";
	cin >> ansFour;
	if (ansFour == capitalFour) {
		cout << "Correct\n";
	} else {
		cout << "Sorry you are wrong\n";
	}

	cout << "What is the capital of " << stateFive << "\n";
	cin >> ansFive;
	if (ansFive == capitalFive) {
		cout << "Correct\n";
	} else {
		cout << "Sorry you are wrong\n";
	}

	cout << "\n";
	return 0;
}