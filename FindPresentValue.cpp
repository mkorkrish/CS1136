
//This program takes the user input and calculates the current/present value of the investment.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Functions that will be used

int readYears();
double presentValue(double futureval, double interestr, int years);
void displayResults(double presentval, double futureval, double interestr, int years);

//Function that prompts the user for the number of years of the investment.

int readYears()
{
	int years;
	cout << "Enter the whole number of years of the investment: ";
	cin >> years;

	//Input validation for the number of years to not be or less than 0

	if (years <= 0)
	{
		cout << "\nError, invalid input. The number of years must be greater than zero." << endl;
	}
	return years;
}

//Function that calculates the present value

double presentValue(double futureval, double interestr, int years)
{
	double present = futureval / pow(1 + interestr, years);
	return present;
}

//Function that only displays the present, future values and the interest rate and years.

void displayResults(double presentvalue, double futureval, double interestr, int years)
{
	cout << fixed << setprecision(2);
	cout << "\nPresent value: $" << presentValue(futureval, interestr, years);
	cout << "\nFuture value: $" << futureval;
	cout << "\nAnnual interest rate: " << setprecision(3) << interestr * 100 << "%";
	cout << "\nYears: " << years << endl;

}

//Main function 

int main()
{

	//Variables

	double futureval, interestr;
	int years;

	//Prompts the user for future value

	cout << "Enter the future value of the investment: ";
	cin >> futureval;

	//Input validation for future value

	if (futureval <= 0)
	{
		cout << "Error The future value must be greater than zero." << endl;
		return 0;
	}

	//Prompts the user for annual interest rate.

	cout << "Enter the annual interest rate: ";
	cin >> interestr;

	//Input validation for interest rate

	if (interestr <= 0)
	{
		cout << "Error The annual interest rate must be greater than zero." << endl;
		return 0;
	}


	//Converts from percentage to decimal

	interestr /= 100.0;


	//Call to functions.

	years = readYears();
	double presentval = presentValue(futureval, interestr, years);
	displayResults(presentval, futureval, interestr, years);

	return 0;
}
