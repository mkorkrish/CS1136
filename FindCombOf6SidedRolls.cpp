//This program simulates rolling two six-sided dice 
//and displays a report showing the number of times each possible combination
//of the two dice was rolled.



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	//Ask the user for the number of rolls

	int rolls;
	cout << "How many times do you want the two dice rolled? ";
	cin >> rolls;

	// create a 6x6 2D array variable to store counters

	unsigned int counter[6][6] = { 0 };

	// Create random number generator

	unsigned int seed;
	cin >> seed;

	//If the seed entered is less than or equal to 0
	//The program should end


	if (seed <= 0)
	{
		return 0;
	}





	// Use the srand function to call the random number generator

	srand(seed);



	// Roll the two dice and update the counters

	for (int i = 0; i < rolls; i++)
	{
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		counter[dice1 - 1][dice2 - 1]++;
	}

	// Display the report of possible combinations

	cout << "The combinations:" << endl;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << "Die 1 = " << i + 1 << " Die 2 = " << j + 1 << " occurred " << counter[i][j] << " times." << endl;
		}
	}

	return 0;
}
