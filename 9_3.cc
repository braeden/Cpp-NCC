#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Lets make a deal:\n";
	cout << "You have a plane ticket to Australia\n";
	cout << "Type 1 to keep it, Type 2 to try the other prize\n";
	cin >> n;
	switch(n) {
		case 1:
			cout << "Enjoy your plane ride\n";
			break;
		case 2:
			cout << "Congrats you won a car\n";
			break;
		default:
			cout << "Not a valid answer\n";
			main();
	}


}