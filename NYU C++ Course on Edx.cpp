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

int main()
{

	char zzz;

	int n, k, nFact, kFact, choose, z;
	
	
	do
	{
		/*---------------------------------------------------*/
		
		cout << "Please enter the values of (n) and (k) respectively separated by a space, where n >= k: ";
		cin >> n >> k;
		
		nFact = 1;
		for(int i = 1; i <= n; i++)
		{
			nFact *= i;
		}
		kFact = 1;
		for (int i = 1; i <= k; i++)
		{
			kFact *= i;
		}
		z = 1;
		for (int i = 1; i <= (n - k); i++)
		{
			z *= i;
		}

		cout << n << "choose" << k << "is: " << nFact / (kFact * z) << endl;

		/*---------------------------------------------------*/
		cout << "do you want to try again?? (y/n)" << endl;
		cin >> zzz;

	} while (zzz == 'y');

	cout << "See you!" << endl;

	return 0;
}
