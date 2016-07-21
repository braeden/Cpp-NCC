// hotdog stand combinations.
#include <iostream>
using namespace std;
int	main()
{
	int a;
	int b;
	int c;
	for (c=0; c<8; c++) {
		for (b=0; b<8; b++) {
			for (a=0; a<8; a++) {
				cout << c << b << a << "\n"; 
			}
		}
	}
}