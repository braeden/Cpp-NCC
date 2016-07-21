#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int initRand(void);

int main()
{
	int i;
	srand(time(NULL));	
	int a;
	int myrand;
	int printIt();
	for (i=0; i<100; i++) {

		a = initRand();
		cout << a << "\n";
	}
}

int initRand(void) {
	int myrand;
	myrand = rand() % 100 + 1;
	return myrand;
}
