#include <iostream>

using namespace std;

int main() {
	double *myPointer, myDouble;
	myDouble = 1000;
	myPointer = &myDouble;

	cout << "myPointer = " << myPointer << ". Data at that address = ";
	cout << *myPointer << endl;
}