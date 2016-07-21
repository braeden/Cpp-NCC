#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> a(0);

void sortArray(vector<char> &myArray) {
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

int iterativeSearch(const vector<char> &myArray, int search) {
	int i;
	
	for(i=0;i<myArray.size();i++)
		if(search == myArray[i])
			return i; // return the location where it was found

	return -1; //if not found return -1
}

int binarySearch(const vector<char> &myArray, int search) {
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

void print(const vector<char> &a) {
	int i;
	for (i=0;i<a.size(); i++) {
		cout << a[i];
	}
	cout << "\n";
}


void printReverse(const vector<char> &a) {
	int i;
	for (i=a.size();i>=0; i--) {
		cout << a[i];
	}
	cout << "\n";
}

int main() {
	string word;
	int i;
	cout << "Enter a word\n";
	cin >> word;
	vector<char> a(word.begin(), word.end());

	printReverse(a);
	sortArray(a);
	print(a);
	/* String to char array

	char a[word.size()+1];
	strcpy(a, word.c_str());

	for(i=sizeof(a)/sizeof(a[0]); i>=0; i--) {
		cout << a[i];
	}
	sortArray(a);
	cout << "\n";*/
	return 0;



}


