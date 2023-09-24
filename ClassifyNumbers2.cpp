
/*This program asks the user to enter whole numbers
and then it displays the number or positives, negatives and zeroes invovled in the user input*/

#include <iostream>
using namespace std;

int main()
{
    //Variables

    int num, sum = 0, product = 1, positives = 0, negatives = 0, zeroes = 0;
    char response;

    //Do-While loop to allow user to enter for as much values as they desire

    do
    {

        //User input

        cout << "Enter whole number " << positives + negatives + zeroes + 1 << ": ";
        cin >> num;


        //If, else-if, and else statements that increase count, calculate sum
        //and calculate product

        if (num > 0)
        {
            sum += num;
            positives++;
        }
        else if (num < 0)
        {
            product *= num;
            negatives++;
        }
        else 
        {
            zeroes++;
        }

        //Asking user for another input.

        cout << "Would you like to enter another number?\n";
        cout << "Enter Y for Yes or N for No: ";
        cin >> response;
    } while (response == 'Y' || response == 'y');

    cout << endl;

    //If there is only one positive

    if (positives == 1)
    {
        cout << "One positive value was entered. It was a " << sum << "." << endl;
    }

    //else if statement for more than one positive

    else if (positives > 1)
    {
        cout << positives << " positive values were entered. Their sum was " << sum << "." << endl;
    }


    //Else statement for no positives

    else
    {
        cout << "No positive values were entered." << endl;
    }

    //If there is only one negative

    if (negatives == 1)
    {
        cout << "One negative value was entered. It was a " << product << "." << endl;
    }

    //Else if for when there are more than one negatives

    else if (negatives > 1)
    {
        cout << negatives << " negative values were entered. Their product was " << product << "." << endl;
    }

    //Else for when there are no negatives

    else
    {
        cout << "No negative values were entered." << endl;
    }


    //For only one zero

    if (zeroes == 1)
    {
        cout << "One zero was entered." << endl;
    }
    
    //For more than one zero

    else if (zeroes > 1)
    {
        cout << zeroes << " zeroes were entered." << endl;
    }

    //For no zeroes entered

    else
    {
        cout << "No zeroes were entered." << endl;
    }

    return 0;
}
