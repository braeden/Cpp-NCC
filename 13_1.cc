#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int myrand;
	int count = 0;
	int guess = 0;
	srand(time(NULL));	
	myrand = rand() % 100 + 1;
	while(myrand != guess) {
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
	cout << "Correct\nIt took " << count << " guesses\n";
}