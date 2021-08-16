#include <iostream>
using namespace std;
int main()
{
	int number_of_days_the_user_traveled;

	cout << "please enter the number of days you traveled" << endl;

	cin >> number_of_days_the_user_traveled;

	int number_of_weeks = number_of_days_the_user_traveled / 7;

	int remaining_days = number_of_days_the_user_traveled - (7 * number_of_weeks);

	cout << "(" << number_of_days_the_user_traveled << ") days are (" << number_of_days_the_user_traveled / 7 << ") weeks and (" << remaining_days << ") days" << endl;

	return 0;
}