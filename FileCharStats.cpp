//This program asks the user for a input file.
//Reads it and then displays the number of lines, characters, and letters it read
//Displays the value of the characters in the file


#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cctype> 

using namespace std;

int main()
{

    // Ask the user for the name of the input file to search in directory

    string filename;
    cout << "Enter the name of the input file." << endl << endl;
    getline(cin, filename);

    // Open the input file

    ifstream infile(filename);
    if (!infile)
    {

        // When it's unable to open the file it will display the following

        cout << "Error, unable to open \"" << filename << "\"." << endl;
        return 1;
    }

    // Check if the file is empty using peek

    if (infile.peek() == ifstream::traits_type::eof())
    {
        cout << "\"" << filename << "\"" << " was empty." << endl;
        return 0;
    }

    int num_lines = 0;
    unsigned int num_chars = 0;
    int num_letters = 0;

    //array that stores the counts of each letter encountered A-Z

    array<int, 26> letter_counts = {};

    // Count the lines, characters, and individual letters

    string line;

    while (getline(infile, line))
    {
        num_lines++;
        for (char c : line)
        {
            if (isalpha(c))
            {
                // Check if the character is a letter

                num_letters++;
                int index = tolower(c) - 'a';
                letter_counts[index]++;
            }
            num_chars++;
            if (isspace(c))
            {
                num_chars++;
            }
        }
    }

    // Displays the full report
    // Displays the letters and their values

    cout << "Lines read = " << num_lines << endl;
    cout << "Characters read = " << num_chars-num_lines << endl; 
    cout << "Letters read = " << num_letters << endl;
    cout << endl << "The individual letter totals were:" << endl;
    for (int i = 0; i < 26; i++) {
        char letter = static_cast<char>('A' + i);
        cout << letter << "'s = " << letter_counts[i] << endl;
    }

    return 0;
}


