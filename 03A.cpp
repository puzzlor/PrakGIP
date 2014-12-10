// Datei: main.cpp
#include <iostream> 
#include <iomanip> 
using namespace std;

int main(){
	int StartUhrzeitStunden = 0, StartUhrzeitMinuten = 0;
	int TaktzeitMinuten = 0;
	cout << setfill('0');

	do{
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> StartUhrzeitStunden;
	} while (StartUhrzeitStunden>23 || StartUhrzeitStunden<0);

	do{
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> StartUhrzeitMinuten;
	} while (StartUhrzeitMinuten>59 || StartUhrzeitMinuten<0);

	cout << "Der Erste Bus faehrt also um " << setw(2) << StartUhrzeitStunden << " : " << setw(2) << StartUhrzeitMinuten << " Uhr" << endl;

	do{
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		cin >> TaktzeitMinuten;
	} while (TaktzeitMinuten>180 || TaktzeitMinuten<1);

	do{
		do{
			cout << setw(2) << StartUhrzeitStunden << ":" << setw(2) << StartUhrzeitMinuten << " ";

			StartUhrzeitMinuten += TaktzeitMinuten;
		} while (StartUhrzeitMinuten < 60);

		cout << endl;//Zeilenumbruch;   
		StartUhrzeitStunden += StartUhrzeitMinuten / 60;//Aus jetzigen Startminuten Stundenanzahl extrahieren und auf neue Stunden addieren 

		StartUhrzeitMinuten = StartUhrzeitMinuten % 60;//Den Restmodulo aus den Startminuten extrahieren und neuzuweisen 
	} while (StartUhrzeitStunden<24);
	system("PAUSE");

	return 0;
}
