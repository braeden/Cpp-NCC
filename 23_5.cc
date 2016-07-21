#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;


vector<int> num(4);

vector<int> input(4);

void putInVector(string x)
{
	for(int i=0; i<x.size(); i++) {
		input[i]=x[i]-'0'; //Subtract '0' ascii value and read into <int> vector
	} 
	
}

int main() {
	int i;
	string user;

	srand(time(NULL));
	for (i=0; i<num.size(); i++) {
		num[i] = rand() % 9; //Generate random number
	}

	for (i=0; i<num.size(); i++) {
		cout << num[i]; //Print the rand num
	}
	cout << "\n";
	while(num != input) {
		cout << "Enter 4 digit number:\n";
		cin >> user;
		putInVector(user);
		/*for (i=0; i<input.size(); i++) { //Print input vector
			cout << input[i];
		}*/
		vector<int> tempV(num);

		for (int x=0; x<tempV.size(); x++) {
			for (int y=0; y<input.size(); y++) {
				if (tempV[x] == input[y] && tempV[x] != input[x] && tempV[y] != input[y]) {
					tempV[x] = -1;
					input[y] = -2;
					cout << "+";
				}
				
			}
		}

		/*for (int y=0; y<num.size(); y++) {
			if (find(input.begin(), input.end(),num[y])!=input.end() && num[y] != input[y]) {
				cout << "+";
			}
		}*/
		for (int x=0; x<num.size(); x++) {
			if (num[x] == input[x]) {
				cout << "*";
			}
		}

		cout << "\n";
	}



	cout << "\n";
	return 0;
}

