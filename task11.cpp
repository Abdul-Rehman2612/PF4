#include <iostream>
using namespace std;

void yourname(string name);
main()
{	
	string name;
	yourname(name);			
}
void yourname(string name)
{
	cout << "Enter your name: ";
	cin >> name;
	while(true)
	cout << name << endl;
}