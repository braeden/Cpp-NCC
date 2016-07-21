#include <iostream>
using namespace std;

int main()
{
	int testOne;
	int testThree;
	int testTwo;
	cout << "Test 1\n";
	cin >> testOne;

	cout << "Test 2\n";
	cin >> testTwo;

	cout << "Test 3\n";
	cin >> testThree;
	int average = testOne+testTwo+testThree;
	average /= 3;
	cout << average << "\n";
	if (average<60) {
		cout << "F";
	} else if (average<70) {
		cout << "D";
	} else if (average<80) {
		cout << "C";
	} else if (average<90) {
		cout << "B";
	} else if (average<=100) {
		cout << "A";
	} else {
		cout << "Not valid";
	}
	cout << "\n";
	return 0;
}