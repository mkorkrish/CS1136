
//This program will be reading numbrs from a file.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    //Assigning Variables

    ifstream inputFile;
    ofstream outputFile;

    string fileName;

    double values;

    int total = 0;
    int valid= 0;
    int invalid= 0;
    double total_Values = 0.0;

    //User input for file name

    cout << "Enter the input file name: " << endl;
    getline(cin, fileName);

    //Open the input file

    inputFile.open(fileName);

   

    if (inputFile)
    {

        //Open bad valies

        outputFile.open("badvalues.txt");

        if (outputFile)
        {

            //Keeps count of total, valid, and invalid values.

            while (inputFile >> values)
            {
                total++;

                if (values >= 1 && values <= 150)
                {
                    total_Values += values;
                    valid++;
                }
                else
                {
                    invalid++;
                    outputFile << fixed;
                    outputFile << setprecision(3) << values << endl;
                }

            }

            //Setprecision for the values when display

            cout << fixed << setprecision(2);

            //Displaying total,valid, and invalid

            cout << "Total number of values read: " << total << endl;
            cout << "Valid values read: " << valid << endl;
            cout << "Invalid values read: " << invalid << endl;

            if (valid == 0)
            {
                cout << "The file did not contain any valid values." << endl;
            }
            else
            {
                cout << "The average of the valid numbers read = " << (total_Values / valid) << endl;
            }

            
            //Close files

            outputFile.close();
            inputFile.close();

        }

        //If file wasn't able to be opened

        else
        {
            cout << "Error output file could not be opened." << endl;
            inputFile.close();

            return 0;
        }

    }

    //Specifiy what file couldn't be opened initially.

    else
    {
        cout << "The file " << "\"" << fileName << "\"" << " could not be opened." << endl;
    }

    return 0;
}
    