#include <iostream>
using namespace std;

void consumption(float distance,float fuel);
main()
{	
	float distance,fuel;
	consumption(distance,fuel);
}
void consumption(float distance,float fuel)
{	
	cout << "Enter the distance: ";
	cin >> distance ;
	fuel=distance*10;
	if(fuel>=100)
	cout << "Fuel needed: " << fuel ;
	if(fuel<100)
	cout << "Fuel needed: 100" ;	
}