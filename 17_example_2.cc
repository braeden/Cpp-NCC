#include<iostream>
#include<fstream>
	using namespace std;
int main()
{
	ifstream infile;
	char letter;

	infile.open("test.txt", ios::in);
	while(infile.get(letter))
		cout << letter;
return 0;
	}
