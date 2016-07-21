// hotdog stand combinations.
#include <iostream>
using namespace std;
int	main()
{
	string ans;
	int x;
	cout << "Go left or right?\n";
	cin >> ans;
	if (ans == "left") {
		cout << "You died from a bear attack\n";
	} else if (ans == "right") {
		cout << "Do you want to buy some food? (yes or no)\n";
		cin >> ans;

		if (ans == "yes") {
			cout << "You surived another day\n";
		} else if (ans == "no") {
			cout << "You died of starvation\n";
		}
	}
}