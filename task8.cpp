#include <iostream>
using namespace std;

void discount(float payable_amount,float total_amount,string day);
main()
{	
	float payable_amount,total_amount;
	string day;
	discount(payable_amount,total_amount,day);
}
void discount(float payable_amount,float total_amount,string day)
{	
	cout << "Enter the day of purchase: " ;
	cin >> day ;
	cout << "Enter the total purchase amount: $";
	cin >> total_amount ;
	if(day=="Sunday")
	{
	payable_amount=total_amount-total_amount*0.1;
	cout << "Payable Amount: $" << payable_amount;
	}
	if(day!="Sunday")
	{
	payable_amount=total_amount;
	cout << "Payable Amount: $" << payable_amount;
	}	
}