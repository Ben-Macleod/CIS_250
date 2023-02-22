// Includes/Imports
#include <iostream>
#include <fstream>

// Namespaces
using namespace std;

/**
 * @brief Square a number
 * @return The squared number.
*/
int squareNum(int numToSquare)
{
    return numToSquare * numToSquare;
}

// Entry Point
int main()
{
    fstream file;

    // Source tables.
    int roots[10] = {};
    int squared[10] = {};

    // Read the text file.
    const string dbName = "test.csv";
    string number;

    // Open the file.
    file.open(dbName);

    // If the file exist perform action.
     if (file)
     {
        int nextIndex = 0;

        // Loop through and file line.
        while (file >> number)
        {
            roots[nextIndex] = stoi(number);
            nextIndex++;
        }

        // Square each number from the original batch.
        for (int i = 0; i < 10; i++)
        {
            // Square the root and add it to the array.
            squared[i] = squareNum(roots[i]);

            // Display square root and square.
            cout << roots[i] << " -> " << squared[i] << endl;
        }

        // Close the active file.
        file.close();
     } else {
        cout << "File: " << dbName << " not found." << endl;
     }
}