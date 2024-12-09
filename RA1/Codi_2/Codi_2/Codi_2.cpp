#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	//Creem variables.
	int pos = 0, dificulty = 0;
	char char1;
	string paraula;
	cout << "Digues una paraula en angles: ";
	//Demanem una paraula.
	cin >> paraula;
	//Mentres la posici� sigui m�s petita que la longitud de la paraula i la dificultat sigui menor que 4.
	while (pos < paraula.length() && dificulty < 4)
	{
		//Char1 obt� el valor de la primera lletra de la paraula i suma 1 quan sumem posici�.
		char1 = paraula[pos];
		//Convertim el character a minuscula per comparar-lo.
		char1 = tolower(char1);
		//Si  el car�cter �s una vocal, dificultat es reinicia.
		if (char1 == 'a' || char1 == 'e' || char1 == 'i' || char1 == 'o' || char1 == 'u') {
			dificulty = 0;
		}
		//Si no, suma 1.
		else
		{
			dificulty++;
		}
		pos++;
	}
	//Si dificultat �s superior o igual a 4 �s dificil.
	if (dificulty >= 4)
	{
		cout << "La paraula es dificil de pronunciar";
	}
	//Si no, no ho �s.
	else
	{
		cout << "La paraula no es dificil de pronunciar";
	}
	return 0;
}