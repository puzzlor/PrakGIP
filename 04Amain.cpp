// Datei: main.cpp
#include <iostream> 
#include <cassert> 
#include "funktionen.h" 
using namespace std;

int main(){
	string text = "", zkette = "";

	cout << "Bitte geben Sie den Text ein: ";
	getline(cin, text);
	cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
	getline(cin, zkette);

	assert(zeichenkette_finden_iterativ(text, zkette) == zeichenkette_finden_rekursiv(text, zkette));

	if (zeichenkette_finden_iterativ(text, zkette) == -1){
		cout << "Die Zeichenkette \'" << zkette << "\' ist NICHT in dem Text \'" << text << "\' enthalten." << endl;
	}
	else{
		cout << "Die Zeichenkette \'" << zkette << "\' ist in dem Text \'" << text << "\' enthalten." << endl;
		cout << "Sie startet ab Zeichen " << zeichenkette_finden_iterativ(text, zkette) << " (bei Zaehlung ab 0)." << endl;
	}
	system("PAUSE");

	return 0;
};
