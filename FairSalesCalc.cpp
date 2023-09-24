
//This program asks for quantity of food items sold from the user
//It takes those inputs and then calculates the total value of those items
//Also it will display the taxable, tax amount, and non-taxable values.

#include <iostream>
#include<iomanip>
using namespace std;

int main() {

	//variables

	int chili,
		corn,
		bags,
		soft,
		water;
	const double tax = 0.065;
	const double chilid = 8.5,
		cornd = 7,
		chips = 2.5,
		drinks = 4.5,
		bottles = 4;
	//Asking user for inputs

	cout << "How many chili dogs were sold? ";
	cin >> chili;
	cout << "How many corn dogs were sold? ";
	cin >> corn;
	cout << "How many bags of chips were sold? ";
	cin >> bags;
	cout << "How many soft drinks were sold? ";
	cin >> soft;
	cout << "How many bottles of water were sold? ";
	cin >> water;
	cout << endl;
	//Calculations

	double t, ta, nt, total;
	t = (chili * chilid) + (corn * cornd) + (bags * chips) + (soft * drinks);
	ta = ((chili * chilid) * tax) + ((corn * cornd) * tax) + ((bags * chips) * tax) + ((soft * drinks) * tax);
	nt = (water * bottles);
	total = (t + ta + nt);

	//Displaying all information from calculations
	//Aligning statements to correctly display information

	cout << setprecision(2) << fixed << left << setw(15) << "Taxable:" << "$" << right << setw(10) << t << endl;
	cout << setprecision(2) << fixed << left << setw(15) << "Tax amount:" << "$" << right << setw(10) << ta << endl;
	cout << setprecision(2) << fixed << left << setw(15) << "Non-taxable:" << "$" << right << setw(10) << nt << endl;
	cout << setprecision(2) << fixed << left << setw(15) << "Total:" << "$" << right << setw(10) << total << endl;



	return 0;
}