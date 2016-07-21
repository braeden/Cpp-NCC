#include <iostream>
using namespace std;

int main()
{
	int touch;
	int extra;
	int field;
	int saftey;
	int total=0;
	int ans;
	cin >> ans;
	total = ans;
	for (touch = 0; touch<10; touch++) {
		total-=6;
		cout << "Touchdown\n";
		for (extra = 0; extra<10; extra++) {
			total-=1;
			cout << "extra\n";
			for (field = 0; field<10; field++) {
				total-=3;
				cout << "field\n";
				for (saftey = 0; saftey<10; saftey++) {
					total-=2;
					cout <<"saftey\n";
					if (total==0) {
						cout << "\n" << touch << "\n" << extra << "\n" << field << "\n" << saftey << "\n"; 
						total = ans;
					}
				}	
			}	
		}		
	}
}
