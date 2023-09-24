
/*This program asks the user to enter whole numbers
and then it displays the number or positives, negatives and zeroes invovled in the user input*/

#include <iostream>
using namespace std;

int main()
{
    //Variables

    int num, sum = 0, product = 1, positives = 0, negatives = 0, zeroes = 0;


    //For loop that increases its increment until it reaches 10 values

    for (int i = 1; i <= 10; i++)
    {
        //User input

        cout << "Enter whole number " << i << ": ";
        cin >> num;

        //If statement for positives that increases positive count and sums

        if (num > 0)
        {
            positives++;
            sum += num;
        }
        
        //Else If statment for negatives that increases negatives count and calc. product.

        else if (num < 0)
        {
            negatives++;
            product *= num;
        }

        //Else for zeroes

        else
        {
            zeroes++;
        }

    }

    //Display

    cout << endl;
    cout << "Of the " << positives + negatives + zeroes << " numbers entered:" << endl;
    cout << "\t" << zeroes << " were 0's." << endl;
    cout << "\t" << negatives << " were negative." << endl;
    cout << "\t" << positives << " were positive." << endl;
    
    cout << "\nThe product of the negative numbers was " << product << "." << endl;
    cout << "The sum of the positive numbers was " << sum << "." << endl;

   return 0;
}
