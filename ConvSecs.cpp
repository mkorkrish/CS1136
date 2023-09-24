#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

	//Variables

	long long int seconds, minutes, hours, days,second2;

	//User input

	cout << "Enter a time in seconds: "<<endl;
	cin >> seconds;
	cout << endl;
	
	//If statement that validates second inputs

		if (seconds <= 0)
		{
			cout << "Error! The seconds must be greater than zero.";
			cin >> seconds;
			cout << endl;
		}
	

	//Calculations

	days = (seconds / 86400);
	hours = (seconds % 86400) / 3600;
	minutes = ((seconds % 86400) % 3600) / 60;
	second2 = (((seconds % 86400) % 3600) % 60);


	//series of if statments that only display if their respective value is >0

	if(seconds>0)

	{
		cout << seconds << " seconds is:" << endl;
		if (days > 0)
		{
			cout << "	" << days << " days." << endl;
		}
		if (hours > 0)
		{
			cout << "	" << hours << " hours." << endl;
		}
		if (minutes > 0)
		{
			cout << "	" << minutes << " minutes." << endl;
		}
		if (second2 > 0)
		{
			cout << "	" << second2 << " seconds." << endl;
		}
	}

	return 0;
}