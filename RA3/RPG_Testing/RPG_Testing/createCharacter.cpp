#include "RPGCharacterLibrary.h"
Character createCharacter(Character& character, string& name, int& health, int& strength, int& agility) {
	system("cls");
	cout << "Create your character\n\n";
	cout << "Select your name: ";
	cin >> name;
	system("cls");
	character(name, health, strength, agility);
	cout << "Character created."
	return character;
}