#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	int largest = 0;
	int smallest = 30000;
	int input = 0;
	int ans;
	while(input != 999) {
		cout << "Enter a number or 999 to exit:\n ";
		cin >> input;
		sum += input;
		if (input < smallest && input != 999) {
			smallest = input;
		}
		if (input > largest  && input != 999) {
			largest = input;
		}
		n++;
	}
	sum -= 999;
	n--;
	ans = sum/n;
	cout << "\nAverage is: " << ans;
	cout << "\n";
	cout << "\nLargest is: " << largest;
	cout << "\nSmallest is: " << smallest;
	cout << "\n";

}