#include <iostream>
using namespace std;

int main()
{
	int n;
	int one;
	int two;
	int three;
	int four;
	cout << "What number?\n";
	cin >> n;
	one = n%10;
	two = (n%100)/10;
	three = (n%1000)/100;
	four = (n%10000)/1000;
	cout << "\n" << one << two << three << four << "\n";





}