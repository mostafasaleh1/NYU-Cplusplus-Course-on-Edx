#include <iostream>

using namespace std;

int main()
{

	/*
	Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents.
	The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that
	are equivalent to the given amount.
	Hint: In order to find the minimum number of coins, first find the maximum number of quarters that fit in the given amount of money,
	then find the maximum number of dimes that fit in the remaining amount, and so on.

	For example, an execution should look like  this:
	Please enter the amount of money to convert:
	# of dollars: 2
	# of cents: 37
	The coins are 9 quarters, 1 dimes, 0 nickels and 2 penni
	*/

	char zzz;
	const int Quarter = 25, Dime = 10, Nickel = 5, Pennie = 1;
	int numberQuarters = 0, numberDimes = 0, numberNickels = 0, numberPennies = 0;
	int totalCents, dollarsTOcents;
	int numberDollars, numberCents;
	do {
		cout << "Number of Dollars : ";
		cin >> numberDollars;

		cout << "Number of cents   : ";
		cin >> numberCents;

		dollarsTOcents = numberDollars * 100;

		totalCents = dollarsTOcents + numberCents;



		for (int i = 25; i <= totalCents; i += 25)
		{
			numberQuarters++;

		}
		for (int v = 10; v <= (totalCents - numberQuarters * 25); v += 10)
		{
			numberDimes++;
		}

		for (int b = 5; b <= (totalCents - numberQuarters * 25 - numberDimes * 10); b += 5)
		{
			numberNickels++;
		}

		for (int j = 1; j <= (totalCents - numberQuarters * 25 - numberDimes * 10 - numberNickels * 5); j += 1)
		{
			numberPennies++;
		}

		cout << "The coins are " << numberQuarters << ", " << numberDimes << ", " << numberNickels << ", and " << numberPennies << endl;

		cin >> zzz;

	} while (zzz == 'y');

	return 0;
}