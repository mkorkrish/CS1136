
//This program determines the time it takes a falling object to fall on Earth and on the Moon. 

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

double getSeconds();
double findEarthFallDist(double seconds);
double findMoonFallDist(double seconds);

//getSeconds Function - Asks the user for the time of the fall in seconds(double).

double getSeconds()
{
	double seconds;
	cout << "Please enter the time of the fall (in seconds): ";
	cin >> seconds;

	//While loop for input validation

	if (seconds < 0)
	{
		cout << "\nError. The time must be at least zero." << endl;
		cout << "\nPlease enter the time of the fall (in seconds): " << endl;
		cin >> seconds;
	}
	return seconds;
}

//findEarthFallDist Function - Calculates the distance fallen on Earth using the seconds parameter and constants/formula
//to display the distance in meters(double)

double findEarthFallDist(double seconds)
{
	const double g = 9.81;
	return 0.5 * g * pow(seconds, 2);

}

//findMoonFallDist Function - Calculates the distance fallen on the Moon using the seconds parameter and constants/formula 
//to display the distance in meters(double)

double findMoonFallDist(double seconds)
{
	const double g = 1.625;
	return 0.5 * g * pow(seconds, 2);

}

//Main function where the display is held

int main()
{
	double seconds = getSeconds();
	cout << "\nThe object traveled " << fixed << setprecision(3) << findEarthFallDist(seconds) << " meters in " << fixed << setprecision(1) << seconds << " seconds on Earth." << endl;
	cout << "The object traveled " << fixed << setprecision(3) << findMoonFallDist(seconds) << " meters in " << fixed << setprecision(1) << seconds << " seconds on the Moon." << endl;
	return 0;
}
