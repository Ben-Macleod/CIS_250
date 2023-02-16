#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct Vehicle
{
    int vin;
    string make;
    string model;
    int year;
    string color;
};

Vehicle parseVehicleString(string str)
{
    Vehicle v;

    int commaPosition = str.find(",");
    v.vin = stoi(str.substr(0, commaPosition));
    str = str.erase(0, commaPosition + 1);

    commaPosition = str.find(",");
    v.make = str.substr(0, commaPosition);
    str = str.erase(0, commaPosition + 1);

    commaPosition = str.find(",");
    v.model = str.substr(0, commaPosition);
    str = str.erase(0, commaPosition + 1);
    

    commaPosition = str.find(",");
    v.year = stoi(str.substr(0, commaPosition));
    str = str.erase(0, commaPosition + 1);

    commaPosition = str.find(",");
    v.color = str;

    return v;
}

void initVehicleInventory(vector<Vehicle>& inventory)
{
    const string dbName = "db.dev.csv";
    fstream db;

    // Open DB Connection
    db.open(dbName);

    if (db) {
        string activeLine;

        while (db >> activeLine)
        {
            cout << activeLine << endl;
            // Vehicle v = parseVehicleString(activeLine);
            // inventory.push_back(v);
        }

        // Close DB Connection.
        db.close();
        
    } else {
        system("clear");
        cout << "SYS ERR:" << endl;
        cout << "Vehicle database could not be found." << endl;
    }
}

int main()
{
    // Vectors are not passed by ref.
    vector<Vehicle> vehicleInventory;

    // Initalize Inventory.
    initVehicleInventory(vehicleInventory);
}