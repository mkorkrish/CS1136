#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double lengtho, lengthp, sago, sagp, sagd,diagonals,llo,llp;
	cout << "Enter the length of the side of the patio opposite to the house in feet: " << endl;
	cin >> lengtho;
	cout << "Enter the length of the side perpindicular to the house in feet: " << endl;
	cin >> lengthp;
	sago = (0.07 * lengtho) + lengtho;
	sagp = (0.07 * lengthp)+lengthp;
	llo = lengtho * lengtho;
	llp = lengthp * lengthp;
	diagonals = sqrt(llo + llp);
	sagd = (diagonals * 0.07) + diagonals;
	cout << "Total length calculated = " << lengtho + lengthp*2 + diagonals*2 <<" feet." << endl;
	cout << "The length of the run opposite the house including sag = " << sago << " feet." << endl;
	cout << "The length of the two perpendicular runs including sag = " << sagp << " feet each." << endl;
	cout << "The length of the two diagonal runs including sag = " << sagd << " feet each." << endl;
	cout << "The total length of the strands needed including sag = " << sagd*2 + sagp*2 + sago << " feet." << endl;




	return 0;
}