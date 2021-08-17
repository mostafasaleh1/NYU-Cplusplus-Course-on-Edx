#include <iostream>

using namespace std;

int main()
{
	/*Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents.


Your program should interact with the user exactly as it shows in the following example:


                   Please enter the number of coins:
                     # Number of quarters: 20
                     # Number of dimes: 4
                     # Number of nickels: 13
                     # Number of pennies: 17
                        The total is 6 dollars and 22 cents */
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