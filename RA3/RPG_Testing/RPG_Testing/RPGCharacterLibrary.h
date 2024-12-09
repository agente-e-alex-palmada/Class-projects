#pragma once

#ifdef RPG_LIBRARY_EXPORTS
#define RPG_LIBRARY_API __declspec(dllexport)
#else
#define RPG_LIBRARY_API __declspec(dllimport)
#endif
#include <iostream>
#include <string>

using namespace std;

class RPG_LIBRARY_API Character {
private:
    string name;
    int health;
    int strength;
    int agility;

public:
    // Constructor
    Character(string name, int health, int strength, int agility);

    // Accessor methods
    string getName();
    int getHealth();
    int getStrength();
    int getAgility();

    // Methods to modify stats
    void modifyHealth(int amount);
    void modifyStrength(int amount);
    void modifyAgility(int amount);

    // Method to display stats
    void displayStats();
};
void options();
Character createCharacter(Character& character, string& name, int& health, int& strength, int& agility);
