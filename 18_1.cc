#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<int> A(10);
	int i;

	for(i=0; i<10; i++) {
		cin >> A[i];
	}
	for(i=9; i>=0; i--) {
		cout << A[i] << "\n";
	}
}


