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
	cout << "Fuel needed: " << fuel ;		
}