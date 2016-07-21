#include <iostream>
using namespace std;

float factorial(int n) {
	int sum=1;
	for (n; n>1; n--) {
		sum *= n;
	}
	return sum;
}

float findE(void) {
	float e = 1;
	int i;
	for (i=1; i<10; i++) {
		e+=(1/(factorial(i)));
	}
	return e;
}



int main()
{
	cout << "e is = \n" << findE() << "\n";
}