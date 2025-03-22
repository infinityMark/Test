#include <iostream>
#include <cmath>
using namespace std;

int x;
/*
fuck you bitch
*/

double hypoten(double x, double y)
{
	double z;
	z = sqrt(x * x + y * y);
	return z;
}

int main() {

	double side1, side2;
	cout << "Please enter the length of first side: ";
	cin >> side1;
	cout << "Please enter the length of second side: ";
	cin >> side2;

	cout << "Hypotenuse of a " << side1 << " by " << side2 << " right triangle is " << hypoten(side1, side2);

	return 0;
}