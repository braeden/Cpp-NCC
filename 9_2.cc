#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int total = 0;
	for (n=0; n<101; n++) {
		total += n; 
	}
	cout << "Sum of 1-100: " << total << "\n";

}
