#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

float addTax(float value, float tax=7.5) {
	return value*((tax/100)+1);
}

int main()
{
	float value;
	float num = 5;
	value = addTax(num);
	cout << value << "\n";
}


