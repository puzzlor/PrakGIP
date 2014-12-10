// Datei: main.cpp
//-------------------------------------------B04.01
#include <iostream> 
#include <string> 
#include "Wortspiegel.h" 
#include "Bildschirm.h" 
#define CATCH_CONFIG_RUNNER 
#include "catch.h"
using namespace std;
int pos = 0;
char x;
string text;

int main(){
	cout << "Bitte geben Sie den Text ein: " << endl;
	getline(cin, text);
	Catch::Session().run();
	while (true){
		ausgabe(text, pos);//Ausgabe des Textes     
		cout << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
		x = eingabe();//Eingabe des Befehls 

		if (x == 'l' && pos != 0){//Befehle: 
			pos--;//Sternchen nach links 
		}
		else if (x == 'r' && pos < text.length() - 1){
			pos++;//Sternchen nach rechts 
		}
		else if (x == 's'){
			wortspiegel(text, pos);//spiegeln 
		}
		else if (x == 'q'){
			system("pause");//quit 
			return 0;
		}
	}
}
