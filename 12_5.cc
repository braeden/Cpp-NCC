#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int count = 0;
	int sum = 0;
		for (a=2; a<100000; a++) {
			c = 1;
			sum = 1;
			for (b=a-1; b>1; b--) {
				if (a%b == 0) {
					sum += b;
					c=1;
				}
			}
			if (c==1 && sum == a) {
				cout << a << "\n";
				count++;
			}
			if (count>=4) {
				break;
				
			}
		}
}
