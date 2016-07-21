#include <iostream>
#include <fstream>
#include <string>
	using namespace std;
int main()
{
	ifstream infile;
	string word;

	infile.open("test.txt", ios::in);
	while (infile >> word)
		cout << word;
return 0;
}