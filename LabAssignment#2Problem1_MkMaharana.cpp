#include <iostream>
#include <cmath>
using namespace std;
	int main() {
	const double PI = acos(-1);
	double angle, cosine, sine, tangent, radians;
	cout << "What angle would you like to enter?";
	cin >> angle;
	radians = (angle * (PI / 180));
	cosine = cos(radians);
	sine = sin(radians);
	tangent = tan(radians);
	cout << "The cosine of " << radians << " radians, " << angle << " degrees, is approximately " << cosine << "." << endl;
	cout << "The sine of " << radians << " radians, " << angle << " degrees, is approximately " << sine << "." << endl;
	cout << "The tangent of " << radians << " radians, " << angle << " degrees, is approximately " << tangent << "." << endl;
	return 0;
}