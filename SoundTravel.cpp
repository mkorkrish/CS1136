#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const double woods = 12631.23, steels = 10614.81, waters = 4714.57, airs = 1125.33;
    unsigned int medium;
    double feet;

    //Menu displayed to user to select their medium


    cout <<"\tTime for Sound to Travel through a Medium given Distance" << endl;
    cout << endl;
    cout << "1 - Wood" << endl;
    cout << "2 - Steel" << endl;
    cout << "3 - Water" << endl;
    cout << "4 - Air" << endl;
    cout << endl;
    cout << "Enter the number of the medium: " << endl;
    cin >> medium;
    do
    {
        if (medium <= 0 || medium > 4)
        {
            cout << "Error, invalid entry!" << endl;
            cout << "Please run the program again." << endl;
            return 0;
        }
    } while (medium <= 0 || medium > 4);


    cout << "Enter the distance to travel (in feet): " << endl;
    cin >> feet;
    do
    {
        if (feet <= 0)
        {
            cout << "Error, the distance must be greater than zero." << endl;
            return 0;
        }
    } while (feet <= 0);

    //Calculations that will tell the user how many seconds it will take to travel through selected medium

    double secondswo, secondst, secondswa, secondsai;
    secondswo = feet / woods;
    secondst = feet / steels;
    secondswa = feet / waters;
    secondsai = feet / airs;

    //If statments that will display the correct output according to the user's medium selection in the above menu
    switch (medium)
    {
    case 1:
    {
        cout << "In wood it will take " << fixed << setprecision(4) << secondswo << " seconds to travel " << fixed << setprecision(2) << feet << " feet." << endl;
    }
    break;
    case 2:
    {
        cout << "In steel it will take " << fixed << setprecision(4) << secondst << " seconds to travel " << fixed << setprecision(2) << feet << " feet." << endl;
    }
    break;
    case 3:
    {
        cout << "In water it will take " << fixed << setprecision(4) << secondswa << " seconds to travel " << fixed << setprecision(2) << feet << " feet." << endl;
    }
    break;
    case 4:
    {
        cout << "In air it will take " << fixed << setprecision(4) << secondsai << " seconds to travel " << fixed << setprecision(2) << feet << " feet." << endl;

        //Exiting the loop


    default: return 0;
    }

    }


}