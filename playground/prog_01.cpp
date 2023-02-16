// Includes/Imports
#include <iostream>
#include <ctype.h>

// Namespces
using namespace std;

int getLargestInteger(int nums[])
{
    int largestNum = nums[0];

    for (int i = 0; i < sizeof(nums); i++) {
        if (!largestNum) {
            largestNum = nums[i];
        } else {

            // If the next num is largest than
            // the current num, set this are the new
            // largest.
            if (nums[i] > largestNum) {
                largestNum = nums[i];
            }


        }
    }

    return largestNum;
}

int getSmallestInteger(int nums[], int size)
{
    int smallestNum = nums[0];

    for (int i = 0; i < size; i++) {
        if (!smallestNum) {
            smallestNum = nums[i];
        } else {

            // If the next num is smaller than
            // the current num, set this are the new
            // largest.
            if (nums[i] < smallestNum) {
                smallestNum = nums[i];
            }


        }
    }

    return smallestNum;
}

// Entry Point
int main()
{
    int sizeOfArray = NULL;

    // Get the count of numbers to store.
    cout << "How many numbers?: ";
    cin >> sizeOfArray;

    // Initalzie the array with slected size.
    int* nums = new int[sizeOfArray];

    // Ask the user for the numbers to put in the array.
    for (int i = 0; i < sizeOfArray; i++) {
        int numToEnter;

        // Ask for a number.
        cout << "#" <<  i + 1 << " Enter a number: ";
        cin >> numToEnter;

        // Add number to array.
        nums[i] = numToEnter;
    }

    int largestNumber = getLargestInteger(nums);
    int smallestNumber = getSmallestInteger(nums, sizeOfArray);

    system("clear");
    cout << "Number of Integers: " << sizeOfArray << endl;
    cout << "Largest Int: " << largestNumber << endl;
    cout << "Smallest Int: " << smallestNumber << endl;
}