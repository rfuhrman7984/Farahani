#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	
	double radius;
	cout << "Enter radius\n";
	cin>> radius;
	cout << "The area of a circle with radius \n";
	double area=3.14*radius*radius;
	cout << area;
	
	cout << "The circumference is: \n";
	double circumference= 2*radius*3.14;
	cout << circumference<< endl;

	//test
	
	return 0;
}
