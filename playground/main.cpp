// Includes/Imports
#include <iostream>
#include<array> 

// Namespaces
using namespace std;

/**
 * @brief Vehicle struct for any vehicles in our inventory.
 */
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

/**
 * @brief Push the new vehicle into the inventory.
 * 
 * @param inventory Inventory table
 * @param newVehicle New vehicle to be added to the inventory.
 * @return int The index of the vehicle added.
 */
int pushVehicleToInventory(Vehicle inventory[], Vehicle newVehicle)
{
    static int nextIndex = 0;
    int oldIndex = nextIndex;

    inventory[nextIndex] = newVehicle;
    nextIndex++;

    return oldIndex;
}

/**
 * @brief Build a new vehicle object.   
 * 
 * @param vin Vin of new vehicle
 * @param year Year of new vehicle.
 * @param color Color of new vehicle.
 * @param make Make of new vehicle
 * @return Vehicle 
 */
Vehicle vehicleFactory_v2(int vin, int year, string color, string make)
{
    Vehicle vehicle;

    // Add properties of the vehicle to it's struct.
    vehicle.vin = vin;
    vehicle.year = year;
    vehicle.color = color;
    vehicle.make = make;

    return vehicle;
}

// Entry Method.
int main() 
{
    // Array of vehicles.
    const int numOfVehicles = 10;
    Vehicle inventory[numOfVehicles];

    // Add new vehicles to the array.
    pushVehicleToInventory_v1(inventory, 345312, 2022, "Silver", "Ford");
    pushVehicleToInventory_v1(inventory, 873647, 2022, "Red", "Honda");

    // Display the new vehicles.
    displayVehicleInventory(inventory);
}