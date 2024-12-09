#include "pch.h"
#include "RPGCharacterLibrary.h"
#include <iostream>

// Constructor for the Character class
Character::Character(string name, int health, int strength, int agility)
    : name(name), health(health), strength(strength), agility(agility) {}

// Accessor methods
string Character::getName() {
    return name;
}

int Character::getHealth() {
    return health;
}

int Character::getStrength() {
    return strength;
}

int Character::getAgility() {
    return agility;
}

// Methods to modify stats
void Character::modifyHealth(int amount) {
    health += amount;
}

void Character::modifyStrength(int amount) {
    strength += amount;
}

void Character::modifyAgility(int amount) {
    agility += amount;
}

// Method to display stats
void Character::displayStats() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Strength: " << strength << endl;
    cout << "Agility: " << agility << endl;
}
