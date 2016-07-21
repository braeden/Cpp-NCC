#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 1;
	cout << "Enter number to find factorial\n ";
	cin >> n;
	for (n; n>1; n--) {
		sum *= n;
	}
	cout << "\n" << sum << "\n";
}