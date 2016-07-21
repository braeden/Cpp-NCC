// hotdog stand combinations.
#include <iostream>
using namespace std;
int	main()
{
	int hdog, soda;
	float price;

	cout << "Hotdogs cost $1.25, and sodas cost $0.75." << endl;
	
	for(hdog=0;hdog<=9;hdog++)
		for(soda=0;soda<=9;soda++)
		{
			if (hdog>=5) {
				price = hdog * 1.00 + soda * 0.75;
			} else {
				price = hdog * 1.25 + soda * 0.75;
			}
			cout << hdog << " hotdog(s) and " << soda << " sodas";
			cout << " costs $" << price << endl;
		}
}