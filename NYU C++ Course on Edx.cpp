#include <iostream>
#include <cmath>

/*
Write a C++ programme that reads from the user
two positive integers n,k (n<=k), and prints the value 
of n choose k.

ex:
Please enter n and k (k <=n): 5 3
5 choose 3 is: 10
*/

using namespace std;

int factorial(int num);

int main()
{

	char zzz;

	int n, k, nFact, kFact, z, n_k;

	
	do
	{
		/*---------------------------------------------------*/
		
		cout << "Please enter the values of (n) and (k) respectively separated by a space, where n >= k: ";
		cin >> n >> k;
		
		nFact = factorial(n);

		kFact = factorial(k);

		z = n - k;

		n_k = factorial(z);

		cout << n << " choose " << k << " is: " << nFact / (kFact * n_k) << endl;

		/*---------------------------------------------------*/
		cout << "do you want to try again?? (y/n)" << endl;
		cin >> zzz;

	} while (zzz == 'y');

	cout << "See you!" << endl;

	return 0;
}


int factorial(int num = 1)
{
	int x = 1;
	for (int i = 1; i <= num; i++)
	{
		x *= i;
	}
	return x;
}
