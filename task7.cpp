#include <iostream>
using namespace std;

void evenorodd(int number);
main()
{	
	int number;
	evenorodd(number);
}
void evenorodd(int number)
{	
	cout << "Enter a number: " ;
	cin >> number;
	if(number%2==0)
	cout << "Number " << number << " is even" ;
	if(number%2!=0)
	cout << "Number " << number << " is odd" ;	
}