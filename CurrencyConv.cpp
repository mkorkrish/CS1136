
//This code performs the conversion from US to CAD, 
//Pesos, and GBP by taking the user input of US dollars
//and using math to perform the conversions (outputs).

#include <iostream>
#include <iomanip>
using namespace std;



int main() {

	const double CA = 1.35;
	const double MX = 18.36;
	const double UK = 0.829;
	double US;
	cout << "Enter an amount in US dollars: ";
	cin >> US;
	cout << endl;

	double CAD, Pesos, GBP;

	//CAD, Pesos, amd GBP Calculations

	CAD = US * CA;
	Pesos = US * MX;
	GBP = US * UK;

	//Output statements that have set the table accordingly
	//And have setprecision to output correct amount of decimal points

	cout << setw(12) << "Dollars" << '\t' << setw(12) << "CAD" << '\t' << setw(12) << "Pesos" << '\t' << setw(12) << "GBP" << endl;
	cout << setw(12) << setprecision(2) <<fixed << US << '\t' << setw(12) << setprecision(2) << fixed << CAD << '\t' << setw(12) << setprecision(2) << fixed << Pesos << '\t' << setw(12) << setprecision(2) << fixed << GBP << endl;

	return 0;
}