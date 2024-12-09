#pragma once
#ifdef RPG_LIBRARY_EXPORTS
#define RPG_LIBRARY_API __declspec(dllexport)
#else
#define RPG_LIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

extern "C" RPG_LIBRARY_API void createCharacter(const string& name, int age, const string& race, const string& profession);
extern "C" RPG_LIBRARY_API void saveCharacterToTXT(const string& filename);
extern "C" RPG_LIBRARY_API void loadCharacterFromTXT(const string& filename);

class Character {
public:
	string name;
	int
};