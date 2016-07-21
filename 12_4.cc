#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	for (a=2; a<1000; a++) {
		c = 1;
		for (b=a-1; b>1; b--) {
			if (a%b == 0) {
				c = 0;
				break;
			}
		}
		if (c==1) {
			cout << a << "\n";
		}
	}
}
