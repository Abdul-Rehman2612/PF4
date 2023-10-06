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
	cout << "Enter the name: ";
	cin >> name;
	
	if(name=="kaka")
{	while(true)
	{
	cout << name << endl;
	}
	if(name!="kaka")
	cout << "Enter the name: ";
	cin >> name;
	}
}