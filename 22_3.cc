#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>


using namespace std;

int b[5][5];

void writeMatrix(int a[5][5]) {
	int row,col;
	ofstream outfile;
	int count;

	outfile.open("22_textfile.txt", ios::out);

	for(row=0; row<5; row++) {
		for(col=0; col<5; col++) {
			if (col==0 && row != 0) {
				outfile << "\n";
			}
			outfile << a[row][col] << " ";
		}
	}
}

void readMatrix() {

	ifstream infile;
	string line;
	int row,i;
	i=0;
	row = 0;
	infile.open("22_textfile.txt", ios::in);
	while (getline(infile, line)) {
		cout << line << "\n";

		stringstream ssin(line);
		while (ssin.good() && i < 5){
			ssin >> b[row][i];
			b[row][i]-=1;
	 		i++;
		}
		i=0;
		row++;

	}

}
	
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
/*Create and fill array*/
	for(row=0; row<5; row++) {
		for(col=0; col<5; col++) {
			a[row][col]=row+col;
		}
	}
	writeMatrix(a);
	readMatrix(); /*To array b*/
	printMatrix(b);
	writeMatrix(b);
	cout << "\n";
	return 0;
}

