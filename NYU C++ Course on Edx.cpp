#include <iostream>

using namespace std;

int main()
{
	
	//This programme takes an upper case letter from the user and converts it to a lower case letter and vice versa.
	char x, zzz;
	do
	{
		cout << "please enter a character" << endl;
		cin >> x;

		if (x >= 65 && x <= 90)
		{
			cout << (char)(x + 32) << endl;
		}
		else if (x >= 97 && x <= 122)
		{
			cout << (char)(x - 32) << endl;
		}
		else {
			cout << "incorrect input" << endl;
		}

		cout << "Do you want to do it again? y/n  :   ";
		cin >> zzz;
	} while (zzz == 'y');

	cout << "See you" << endl;

	return 0;
}