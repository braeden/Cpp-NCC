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

int iterativeSearch(const vector<int> &myArray, int search) {
	int i;
	
	for(i=0;i<myArray.size();i++)
		if(search == myArray[i])
			return i; // return the location where it was found

	return -1; //if not found return -1
}

int binarySearch(const vector<int> &myArray, int search) {
	int low=0, high=myArray.size()-1, mid;

	while(low<=high) {
		mid=(low+high)/2;
		if(search == myArray[mid])
			return mid;
		else
			if(search < myArray[mid])
				high = mid - 1;
			else	// greater than
				low = mid + 1;
	}
	return -1; // did not find it
}


int main() {
	vector<int> a(0);

	int i;
	int input;
	int place;
	string ans;
	for(i=0;; i++) {
		cout << "Enter number or '999' to exit\n"; cin >> input;
		if (input == 999) break;
		a.resize(a.size()+1);
		a[i] = input;
	}
	cout << "Enter number to find place:\n";
	cin >> input; 
	place = iterativeSearch(a, input);
	if (place != -1) {
		cout << "Place in array: " << place << "\n";
	} else {
		cout << "Doesn't exist\n"; 
	}

	cout << "Sorted\n";
	sortArray(a);

	place = binarySearch(a, input);
	
	cout << "\nHow many below:\n" << place << "\n";

}


