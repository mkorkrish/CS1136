//This program takes a total of 120 grades from the user and calculates and then displays them.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //Variables

    const int max_scores = 120;
    int scores[max_scores];
    int scoreCount = 0;
    int score;
    int sum = 0;
    double average;

    // Gets scores from user

    cout << "Enter the first score or -999 to end input: " << endl;
    cin >> score;

    //While loop for when user doesn't enter "-999" and is under 120 scores
    //The loop will execute.

    while (score != -999 && scoreCount < max_scores)
    {
        scores[scoreCount] = score;
        scoreCount++;
        sum += score;

        //Displays the looping question for the user.

        cout << "Enter the next score or -999 to end input: " << endl;
        cin >> score;
    }

    // Calculates average

    //As long as the score count is positive it will be added together and then divided by however many scores inputed.

    if (scoreCount > 0)
    {
        average = static_cast<double>(sum) / scoreCount;

        //Displays the average of the scores

        cout << "The average of the scores is: " << fixed << setprecision(1) << average << "." << endl;
        if (scoreCount > 1)
        {

            // Display the scores that're below the average score

            cout << "The scores below the average were: ";

            //For loop for score count that was below the average.

            for (int i = 0; i < scoreCount; i++)
            {
                if (scores[i] < average) {
                    cout << scores[i] << " ";
                }
            }
            cout << endl;
        }
    }


    else
    {
        cout << "No scores were entered." << endl;
    }

    return 0;
}