#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double area;
	double radius;
	cout << "Enter radius\n";
	cin>> radius;
	cout << "The area of a circle with radius \n";
	area=3.14*radius*radius;
	cout << area;
	
	return 0;
}
