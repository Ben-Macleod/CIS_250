// Includes
#include <iostream>

// Namespaces
using namespace std;

/* Classes */

class Cell
{
    // Private Attributes
    private:
        int x;
        int y;
        char val;

    // Public Attributes
    public:
        // Constructors
        Cell();
        Cell(int, int);

        // Getters
        int getXCoord() const;
        int getYCoord() const;
        char getValue() const;

        // Setters
        void setXCoord(int);
        void setYCoord(int);
        void setValue(char);
};

Cell::Cell()
{}

// Overloaded constructor to set cell position.
Cell::Cell(int x, int y)
{
    Cell::x = x;
    Cell::y = y;
    val = '-';
}

/* Getters */
int Cell::getXCoord() const
{
    return x;
}

int Cell::getYCoord() const 
{
    return y;
}

char Cell::getValue() const
{
    return val;
}

/* Setters */
void Cell::setXCoord(int x)
{
    Cell::x = x;
}

void Cell::setYCoord(int y)
{
    Cell::y = y;
}

void Cell::setValue(char v)
{
    val = v;
}

// Entry Point.
int main()
{
    Cell c(0, 0);

    for (int i = 0; i < 20; i++)
    {
        cout << "-";
    }

    cout << endl;

    for (int i = 0; i < 20; i++)
    {
        cout << "-";
    }
}