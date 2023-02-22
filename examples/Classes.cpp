#include <iostream>
#include <string>

using namespace std;

// Make player comprised of health,level,name

class Player 
{
    // Private Attributes
    private:
        int health;
        int level;
        float xpModifier;
        string name;


    // Public Attributes
    public:
        /* Constructors */
        Player();
        Player(int,string,int);
    
        /* Setters */
        void setHealth(int);
        void setName(string);
        void setLevel(int);
        void setXPModifier(float);

        /* Getters */
        int getHealth() const;
        float getXPModifier() const;
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

void Player::setXPModifier(float v)
{
    xpModifier = v;
}

float Player::getXPModifier() const
{
    return xpModifier;
}

int main()
{
    Player p1;

    cout << p1.getHealth() << endl;
    
    return 0;
}