#include <iostream>
#include <vector>

using namespace std;

int avgArray(vector<int> &a) {
	int total = 0;
	int i;
	for(i=0; i<a.size(); i++) {
		total += a[i];
	}
	return total/a.size();
}

int sumArray(vector<int> &a) {
	int total = 0;
	int i;
	for(i=0; i<a.size(); i++) {
		total += a[i];
	}
	return total;
}


int main() {
	vector<int> a(0);

	int i;
	int input;
	string ans;
	for(i=0;; i++) {
		cout << "Enter score or '999' to exit\n"; cin >> input;
		if (input == 999) break;
		a.resize(a.size()+1);
		a[i] = input;
	}
	cout << "avg or sum\n";
	cin >> ans;
	if (ans == "avg") {
		cout << "Average: " << avgArray(a) << "\n";
	} else if (ans == "sum") {
		cout << "Sum: " << sumArray(a) << "\n";
	} else {
		main();
	}
}


