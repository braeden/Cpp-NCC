#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>


using namespace std;


void printMatrix(float a[10][10]) {
	int row,col;

	for(row=0; row<10; row++) {
		for(col=0; col<10; col++) {
			if (col==0) {
				cout << "\n";
			}
			cout << a[row][col];
			cout << "\t";
		}
	}
}





int main() {
	int row,col;
	float a[10][10];
/*Create and fill array*/
	for(row=0; row<10; row++) {
		for(col=0; col<10; col++) {
			a[row][col]=5;
		}
	}
	for(row=0; row<10; row++) {
		for(col=0; col<10; col++) {
			a[row][col] += .75*row;
			a[row][col] += .05*col;
		}
	}

	printMatrix(a);
	//modifyMatrix(a);
	//printMatrix(b);
	cout << "\n";
	return 0;
}

