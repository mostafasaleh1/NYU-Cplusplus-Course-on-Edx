#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	//This programme takes an input character from the user and converts it into the corresponding ASCII number.
	char x;
	cout << "Please enter a character: " << endl;
	cin >> x;
	//Casting the character into integer value, and printing the result.
	cout << "the corresponding ASCII number is:  " << (int)x << endl;
	return 0;
}