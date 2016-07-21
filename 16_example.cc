#include<iostream>
#include<fstream>
	using namespace std;
int main()
{
	ofstream outfile;
	int count;

	outfile.open("test.txt", ios::out);

for(count=1;count<=10;count++)
	outfile << count << "Hello World" << endl;
return 0;
}