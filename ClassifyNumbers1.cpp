
/*This program identifies negative and positive numbers
* and counts how many of each are inputted
* then it finds the product of the negatives and the sums of the positives*/

#include <iostream>
using namespace std;

int main() 
{
    //Variables

    int num, sum = 0, product = 1, positives = 0, negatives = 0;


    //User input

    cout << "Enter a whole number [enter 0 to end input]: ";
    cin >> num;


    //While loop for as long as user wants to input.

    while (num != 0)
    {

        //If statement for the positive numbers

        if (num > 0)
        {

            //Finds the sum of positives and adds to the number of positives count.

            sum += num;
            positives++;
            
        }

        //Else for the negative numbers

        else

            //Finds the product of negatives and adds to the negatives count.

        {
            product *= num;
            negatives++;
            
        }
        cout << "Enter another whole number [enter 0 to end input]: ";
        cin >> num;
    }
    cout << endl;
    //If statement for when there are no positives

    if (positives == 0)
    {
        cout << "No positive numbers were entered." << endl<<endl;
    }

    //else if for when there is only one positive

    else if (positives == 1)
    {
        cout << "1 positive number was entered. It was a " << sum << "." << endl<<endl;
    }

    //else for positives

    else
    {
        cout << positives << " positive numbers were entered. Their sum was " << sum << "." << endl << endl;
    }

    //If statement for when there are no negatives

    if (negatives == 0)
    {
        cout << "No negative numbers were entered." << endl;
    }

    //Else if for when there is only one negative

    else if (negatives == 1)
    {
        cout << "1 negative number was entered. It was a " << product << "." << endl;
    }

    //Else for negatives

    else
    {
        cout << negatives << " negative numbers were entered. Their product was " << product << "." << endl;
    }

    return 0;
}
