// Includes/Imports
#include <iostream>
#include <ctype.h>

// Namespces
using namespace std;

// Entry Point
int main()
{
    //============================//
    // int _num = 12;

    // // Initalize pointer with address of num.
    // int *numptr = &_num;

    // // Num Address & Values via pointers.
    // cout << "Num Value: " << *numptr << endl;
    // cout << "Num Address: " << numptr << endl;

    //============================//
    // Pointers Values.
    //============================//

    // // Ref the pointer or mem add.
    // int num = 52;
    // int num2 ;
    // int *numptr = nullptr;
    // int *num2ptr = nullptr;

    // // Set PTR equal to the memory addy.
    // numptr = &num;

    // // Setting num2 to the value of numptr.
    // num2 = *numptr;

    // // Set new num2ptr equal to the reff address of num2.
    // num2ptr = &num2;

    // cout << "Value numptr: " << *numptr << endl;
    // cout << "Address numptr: " << numptr << endl;
    // cout << endl;
    // cout << "Value num2ptr: " << *num2ptr << endl;
    // cout << "Address num2ptr: " << num2ptr << endl;

    //============================//
    // Array Pointers
    //============================//

    // int nums[5] = { 3, 5, 10, 15, 30 };

    // // Store the array inside of a pointer.
    // int *numArrPtr = nums;

    // // numArrPtr ref a to the nums array.
    // cout << "First Mem Addy: " << numArrPtr << endl;
    // cout << "First Value: " << *numArrPtr << endl;
    // cout << endl;
    // cout << "Second Mem Addy: " << numArrPtr + 1 << endl;
    // cout << "Second Value: " << *(numArrPtr + 1) << endl;

    //============================//
    // Dynamic Array
    //============================//

    // Stores the size of the array.
    int sizeOfArray = 10;

    // Initalize new array of ints.
    int* nums = new int[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        nums[i] = i * i;
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << nums[i] << endl;
    }

    

    // ask the user how many numbers they want to store.
    // store all nums in array
    // tell largest num
    // tell smallest num.


    //============================//

}