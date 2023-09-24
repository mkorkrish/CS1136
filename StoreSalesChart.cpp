// This program will read a file containing sales data and write a bar chart to represent the data read to a file named "saleschart.txt".

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables

    string inputFilename, outputFilename = "saleschart.txt";
    unsigned int storeNumber;
    long long int salesAmount;
    int salesCount = 0;
    int salesTotal = 0;
    int salesMax = 0;
    int salesMin = 0;
    

    // Ask user for input file name

    cout << "Please enter the input file name." << endl;
    cin >> inputFilename;

    // Open input file

    ifstream inputFile(inputFilename);

    // Check if input file opened successfully

    if (inputFile)
    {
        // Open output file for writing

        ofstream outputFile(outputFilename);

        // Check if output file opened successfully

        if (outputFile)
        {
            // Write headings to output file

            outputFile << "SALES BAR CHART" << endl;
            outputFile << "(Each * equals 5,000 dollars)" << endl;

            // Read store number and sales amount from input file

            while (inputFile >> storeNumber >> salesAmount)
            {
                // Validate store number

                if (storeNumber < 1 || storeNumber > 99)
                {
                    cout << storeNumber << " is not in the range 1 through 99." << endl;
                    continue;
                }

                // Validate sales amount

                if (salesAmount < 0)
                {
                    cout << "Skipped store #" << storeNumber << "." << endl;
                    continue;
                }

                // Calculate sales count, total, max, min

                salesCount++;
                salesTotal += salesAmount;
                if (salesAmount > salesMax)
                {
                    salesMax = salesAmount;
                }
                if (salesCount == 1 || salesAmount < salesMin)
                {
                    salesMin = salesAmount;
                }

                // Calculate number of stars to represent sales amount

                int numStars = static_cast<int>(salesAmount / 5000);

                // Write sales bar chart to output file

                outputFile << "Store " << setw(2) << storeNumber << ": ";
                for (int i = 0; i < numStars; i++) {
                    outputFile << "*";
                }
                outputFile << endl;
            }

           


            // Close input and output files

            inputFile.close();
            outputFile.close();
        }
        else
        {
            // Output file could not be opened

            cout << outputFilename << " could not be opened." << endl;
            inputFile.close();
        }
    }
    else
    {
        // Input file could not be opened

        cout << "\"" << inputFilename << "\"" << " could not be opened." << endl;
    }

    return 0;
}
