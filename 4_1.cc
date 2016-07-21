#include <iostream>
using namespace std;

int main()
{
	float price = 1.10;
	float number;
	cout << "Number of sodas?\n";
	cin >> number;
	float total = price*number;
	cout << "Costs: " << total << "\n";
	return 0;
}