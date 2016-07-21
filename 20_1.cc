#include <iostream>
#include <vector>

using namespace std;

vector<int> a(0);

void sortArray(vector<int> &myArray) {
	int outer,inner,temp;

	for(outer=0;outer<myArray.size();outer++) {
		for(inner=0;inner<myArray.size()-outer-1;inner++) {
			if(myArray[inner] > myArray[inner+1]) {	// simple swapping routine
				temp = myArray[inner];
				myArray[inner] = myArray[inner+1];
				myArray[inner+1] = temp;
			}
		}
	}
	a = myArray;
}



int main() {
	vector<int> a(0);

	int i;
	int input;
	string ans;
	for(i=0;; i++) {
		cout << "Enter number or '999' to exit\n"; cin >> input;
		if (input == 999) break;
		a.resize(a.size()+1);
		a[i] = input;
	}
	cout << "Sorted\n";
	sortArray(a);
	for(i=0; i<a.size(); i++) {
		cout << a[i] << "\n";
	}

}


