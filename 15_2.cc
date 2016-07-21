#include <iostream>

using namespace std;

float total;

int quarters() {
	float coin = 0.25;
	int count = 0;
	while (total>=coin) {
		total-=coin;
		count++;
	}
	return count;
}

int dimes() {
	float coin = 0.1;
	int count = 0;
	while (total>=coin) {
		total-=coin;
		count++;
	}
	return count;
}

int nickles() {
	float coin = 0.05;
	int count = 0;
	while (total>=coin) {
		total-=coin;
		count++;
	}
	return count;

}

int pennies() {
	float coin = 0.01;
	int count = 0;
	while (total>=coin) {
		total-=coin;
		count++;
	}
	return count;

}


int main()
{
	cout << "Enter to find change" << "\n";
	cin >> total;
	cout << "Quarters: " << quarters() << "\n";
	cout << "Dimes: " << dimes() << "\n";
	cout << "Nickles: " << nickles() << "\n";
	cout << "Pennies: " << pennies() << "\n";
	return 0;
}


