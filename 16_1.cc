#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	ofstream outfile;
	int count;

	outfile.open("16_1_output.txt", ios::out);
	for(count = 99; count>0; count--) {
		outfile << count << " bottles of beer on the wall, " << count << " bottles of beer! Take one down, pass it around, ";
	}
	return 0;
}


