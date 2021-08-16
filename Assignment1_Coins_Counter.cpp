#include <iostream>

using namespace std;

int main()
{
	char zzz;
	const int Quarter = 25, Dime = 10, Nickel = 5, Pennie = 1;
	int numberQuarters, numberDimes, numberNickels, numberPennies;
	int cents;
	int dollarsCounter, centsCounter;
	do {

		cout << "Please enter the number of coins:" << endl;

		cout << "number of Qarters = ";
		cin >> numberQuarters;

		cout << "number of Dimes = ";
		cin >> numberDimes;

		cout << "number of Nickles = ";
		cin >> numberNickels;

		cout << "number of Pennies = ";
		cin >> numberPennies;

		cents = (numberQuarters * Quarter) + (numberDimes * Dime) + (numberNickels * Nickel) + numberPennies;

		centsCounter = cents % 100;

		dollarsCounter = cents / 100;

		cout << "The total is:  " << dollarsCounter << "dollars and " << centsCounter << "cents" << endl;

		cout << "Do you want to try again? y/n: ";
		cin >> zzz;

	} while (zzz == 'y');

	return 0;
}