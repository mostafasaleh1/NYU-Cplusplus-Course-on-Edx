#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int radius;
	cout << "please enter the radius of the circle" << endl;
	cin >> radius;
	cout << "The Area of the cicle =   " << M_PI * pow(radius, 2) << endl;

	return 0;
}