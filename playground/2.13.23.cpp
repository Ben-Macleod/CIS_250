#include <iostream>
#include <string>

using namespace std;

// Make player comprised of health,level,name

class Player 
{
    // Attributes can only be accessed within the class.
    private:
        string name;
        int health;
        int level;

    // Method can be accessed outside of the class.
    public:
        // Contructor, shares same name as class & entry point.
        Player();

        // Overloaded constructor to set varibles.
        Player(int,string,int);
    
        void setHealth(int);
        void setName(string);
        void setLevel(int);

        // const blocks the method from changing any values.
        int getHealth() const;
        string getName() const;
        int getLevel() const;

};

Player::Player()
{
    Player::health = 100;
    Player::level = 0;
    cout << "Player Created" << endl;
}

Player::Player(int h, string n, int l)
{
    Player::health = h;
    Player::name = n;
    Player::level = l;
    cout << "Player Created [Overloaded]" << endl;
}

void Player::setHealth(int h)
{
    Player::health = h;
}

int Player::getHealth() const
{
    return Player::health;
}

void Player::setName(string n)
{
    Player::name = n;
}

string Player::getName() const
{
    return Player::name;
}

void Player::setLevel(int l)
{
    Player::level = l;
}

int Player::getLevel() const
{
    return Player::level;
}

int main()
{
    Player p1;

    cout << p1.getHealth() << endl;
    
    return 0;
}