// Includes/Imports
#include <iostream>
#include<array> 

// Namespaces
using namespace std;

struct Vehicle 
{
    int vin;
    int year;
    string color;
    string make;
};

/**
 * @brief Push the new vehicle into the inventory table.
 * 
 * @param inventory Array of vehicles.
 * @param vin Vin of the new vehicle.
 * @param year Year of the vehicle.
 * @param color Body color of the vehicle.
 * @param make Make of the vehicle.
 * @return {Vehicle} The new vehicle struct that was added to the array.
 */
Vehicle pushVehicleToInventory_v1(Vehicle inventory[], int vin, int year, string color, string make) {
    Vehicle vehicle;
    static int nextIndex = 0;

    // Add properties of the vehicle to it's struct.
    vehicle.vin = vin;
    vehicle.year = year;
    vehicle.color = color;
    vehicle.make = make;

    // Add vehicle to the array and increase next index.
    inventory[nextIndex] = vehicle;
    nextIndex++;

    // Return the new vehicle generated.
    return vehicle;
} 

/**
 * @brief Display the vehicle to the console.
 * @param inventory The vehicle inventory list.
 */
void displayVehicleInventory(Vehicle inventory[])
{
    // Loop through the inventory table and display each vehicle.
    for (int i = 0; i < sizeof(inventory); i++)
    {
        // Initalize the vehicle into one var.
        const Vehicle vehicle = inventory[i];

        // Make sure the vehicle actually exist in the table.
        if (!vehicle.vin) return;

        // Display it back to the user.
        cout << vehicle.year << " " << vehicle.color << " " << vehicle.make << " [" << vehicle.vin << "]" << endl;
    } 
}

// Entry Method.
int main() 
{
    // Array of vehicles.
    const int numOfVehicles = 10;
    Vehicle inventory[numOfVehicles];

    // Add new vehicles to the array.
    pushVehicleToInventory_v1(inventory, 123, 2022, "Silver", "Ford");
    pushVehicleToInventory_v1(inventory, 123, 2022, "Red", "Honda");

    // Display the new vehicles.
    displayVehicleInventory(inventory);
}