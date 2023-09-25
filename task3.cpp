#include <iostream>
using namespace std;

void cube(int sides,int stickers);
main()
{	
	int sides,stickers; 
	cube(sides,stickers);
}
void cube(int sides,int stickers)
{	
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> sides ;
	stickers=6*sides*sides;
	cout << "Number of stickers needed: " << stickers ;		
}