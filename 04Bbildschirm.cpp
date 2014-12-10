// Datei: bildschirm.cpp
#include <iostream> 
#include <string> 
using namespace std;
void ausgabe(string text, int pos){//Ausgabe des Textes 
	cout << text << endl;
	for (int i = 0; i < pos; i++){//Leerzeichen werden eingesetzt bis zu "pos" 
		cout << " ";
	}
	cout << "*" << endl;//dann ein Sternchen 
}
char eingabe(){//Eingabe des Befehls 
	char x;
	cin >> x;
	return x;
}
