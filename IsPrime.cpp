//This program defines to the user whether their entry is prime or divisible by prime numbers.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	//Variables
	int num;


	//User input would go here after the questions are asked.

	cout << "Enter a positive whole number in the range 2 through 1000: " << endl;
	cin >> num;
	
	//If statement that determines if the user has inputted a invalid number (Input Validation)

	if (num < 2 || num>1000)
	{
		cout << "Error! " << num << " is outside the range 2 through 1000." << endl;
		return 0;
	}

	//Here begins the process of determining the user's number as either prime or not.

	if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 || num == 19 || num == 23
		|| num == 29 || num == 31)
	{
		cout << num << " is prime." << endl;
		return 0;
	}

	//Else if to determine that if the user's number isn't prime what can it be divisible by?
	
	else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 || num % 13 == 0 || num % 17 == 0 || num % 19 == 0 || num % 23 == 0
		|| num % 29 == 0 || num % 31 == 0)
	{
		cout << num << " is divisible by:" << endl;
		if (num % 2 == 0)
		{
			cout << "2" << endl;
		}
		if (num % 3 == 0)
		{
			cout << "3" << endl;
		}
		if (num % 5 == 0)
		{
			cout << "5" << endl;
		}
		if (num % 7 == 0)
		{
			cout << "7" << endl;
		}
		if (num % 11 == 0)
		{
			cout << "11" << endl;
		}
		if (num % 13 == 0)
		{
			cout << "13" << endl;
		}
		if (num % 17 == 0)
		{
			cout << "17" << endl;
		}
		if (num % 19 == 0)
		{
			cout << "19" << endl;
		}
		if (num % 23 == 0)
		{
			cout << "23" << endl;
		}
		if (num % 29 == 0)
		{
			cout << "29" << endl;
		}
		if (num % 31 == 0)
		{
			cout << "31" << endl;
		}
		return 0;
	}

	return 0;
}
