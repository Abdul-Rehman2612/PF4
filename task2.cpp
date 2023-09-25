#include <iostream>
using namespace std;

void measurement(float inches,float feet);
main()
{	
	float inches,feet;
	measurement(inches,feet);
}
void measurement(float inches,float feet)
{	
	cout << "Enter the measurement in inches: ";
	cin >> inches ;
	feet=inches/12;
	cout << "Equivalent in feet: " << feet ;		
}