#include <iostream>
#include <vector>
using namespace std;

void printMatrix(int a[5][5]) {
	int row,col;

	for(row=0; row<5; row++) {
		for(col=0; col<5; col++) {
			if (col==0) {
				cout << "\n";
			}
			cout << a[row][col];
		}
	}
}

int main() {
	int row,col;
	int a[5][5];

	for(row=0; row<5; row++) {
		for(col=0; col<5; col++) {
			a[row][col]=row+col;
		}
	}
	printMatrix(a);
	cout << "\n";
	return 0;
}

