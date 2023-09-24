#include <iostream>
#include <iomanip>
using namespace std;

int main() {


	//Variables:

	const double Earth = 9.807, Moon = 1.62, Mercury = 3.7, Venus = 8.87;
	double mass, EarthM, MoonM, MercuryM, VenusM;

	//User input:

	cout << "Please enter the mass of an object in kilograms: "<< endl;
	cin >> mass;
	do
	{
		if (mass < 0)
		{
			cout << "Your mass cannot be less than 0" << endl;
			cout << "Please enter the mass of an object in kilograms: " << endl;
			cin >> mass;
			cout << endl;
		}
	} while (mass < 0);

	//Calculations:

	EarthM = Earth * mass;
	MoonM = Moon * mass;
	MercuryM = Mercury * mass;
	VenusM = Venus * mass;

	//If statement that tells the user when the object is over 1250 N that it's heavy and also tells the user if it's under 20N its light



	cout << left << setw(16) << "\nPlanet/Satellite	" << setw(14) << "    Weight (N)" << endl << endl;
	if (EarthM > 1250)
	{
		cout << left << setw(16) << "Earth " << "	" << right << setw(14) << fixed << setprecision(3) <<	EarthM << "	The object is heavy" << endl;
	}
	else if (EarthM < 20)
	{
		cout << left << setw(16) << "Earth " << "	" << right << setw(14) << fixed << setprecision(3) <<	EarthM << "	The object is light" << endl;
	}

	//Remaining statement that outputs the rest of the values and the unaffected Earth value.

	else
	{
		cout << left << setw(16) << "Earth " << "	" << right << setw(14) << fixed << setprecision(3) << EarthM << endl;
	}
	cout << left << setw(16) << "Moon " <<"	"<< right << setw(14) << fixed << setprecision(3) << MoonM << endl;
	cout << left << setw(16) << "Mercury " << "	" << right << setw(14) << fixed << setprecision(3) <<	MercuryM << endl;
	cout << left << setw(16) << "Venus " << "	" << right << setw(14) << fixed << setprecision(3) <<	VenusM << endl;
	return 0;
}