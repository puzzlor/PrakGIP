// Datei: main.cpp 
#include <iostream> 
#include <string> 
#include "TListenKnoten_Template.h" 
#include "sort_template.h" 
using namespace std;
int main(int argc, char* argv[]){
	TListenKnoten<string> *anker = nullptr;
	for (int i = 1; i < argc; i++)
		hinten_anfuegen<string>(anker, argv[i]);
	if (string(argv[0]) == "auf.exe")
		sortiere<TListenKnoten<string>, string>(anker, &aufsteigend<string>);
	else if (string(argv[0]) == "ab.exe")
		sortiere<TListenKnoten<string>, string>(anker, &absteigend<string>);
	else{
		std::system("PAUSE"); return 1;
	}
	liste_ausgeben<string>(anker);
	std::system("PAUSE");
	return 0;
}
