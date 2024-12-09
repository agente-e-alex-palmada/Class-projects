#include "RPGCharacterLibrary.h"

void main() {
    //Variable declaration
    string name;
    int hp, strength, agility, select;
    Character character(name, hp, strength, agility);
    while (true)
    {
        options();
        cout << "Select what you want to do: ";
        cin >> select;
        switch (select)
        {
        default:
            break;
        }
    }
    createCharacter(character, name, hp, strength, agility);

    // Crear un personaje
    
}
