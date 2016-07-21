#include <iostream>
#include <vector>
#include <string>

using namespace std;



string decode(string a, int b) {
	int i;
	for (i=0;i<a.size(); i++) {
		a[i]-=b;
	}
	cout << "\n";
	return a;
}


string encode(string a, int b) {
	int i;
	for (i=0;i<a.size(); i++) {
		a[i]+=b;
	}
	cout << "\n";
	return a;
}

void print(string a) {
	int i;
	for (i=0;i<a.size(); i++) {
		cout << a[i] ;
	}
	cout << "\n";
}


int main() {
	string word = "";
	string enc;
	string dec;

	int i;
	int shift;
	cout << "Enter a word\n";
	cin >> word;
	cout << "Enter a shift\n";
	cin >> shift;

	enc = encode(word, shift);
	print(enc);
	dec = decode(enc, shift);
	print(dec);
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


