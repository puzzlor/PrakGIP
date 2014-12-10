// Datei: main.cpp
#include <iostream>   
#include <string>   
using namespace std;

int main(){
	const int sudokuconst = 9;
	bool gueltig = true;
	string eingabe[11];
	cout << "Bitte geben Sie das Sudoku ein: " << endl;
	for (int i = 0; i < 11; i++){
		getline(cin, eingabe[i]);
	}
	int sudoku[sudokuconst][sudokuconst] = { 0 };
	for (int i = 0; i < sudokuconst; i++){
		for (int z = 0; z < sudokuconst; z++){
			sudoku[i][z] = eingabe[i + (i / 3)].at((z + (z / 3)) * 2 + 1) - '0';
		}
	}
	//SPALTE--------------------------------------------------------------------------------------------------------  
	for (int spalte = 0; spalte < sudokuconst; spalte++){
		for (int zaehler = 1; zaehler <= 9; zaehler++){

			int counter = 0;

			for (int zeile = 0; zeile < sudokuconst; zeile++){
				if (zaehler == sudoku[zeile][spalte]){
					counter++;
				}
			}

			if (counter > 1){
				cout << "Spalte " << spalte << ": Zahl " << zaehler << " mehrfach" << endl;
				gueltig = false;
			}
			else if (counter == 0){
				cout << "Spalte " << spalte << ": Zahl " << zaehler << " kommt nicht vor." << endl;
				gueltig = false;
			}
		}
	}
	//ZEILE--------------------------------------------------------------------------------------------------------  
	for (int spalte = 0; spalte < sudokuconst; spalte++){
		for (int zaehler = 1; zaehler <= 9; zaehler++){

			int counter = 0;

			for (int zeile = 0; zeile < sudokuconst; zeile++){
				if (zaehler == sudoku[spalte][zeile]){
					counter++;
				}
			}

			if (counter > 1){
				cout << "Zeile " << spalte << ": Zahl " << zaehler << " mehrfach" << endl;
				gueltig = false;
			}
			else if (counter == 0){
				cout << "Zeile " << spalte << ": Zahl " << zaehler << " kommt nicht vor." << endl;
				gueltig = false;
			}
		}
	}
	//BLOCK--------------------------------------------------------------------------------------------------------  
	for (int spalte = 0; spalte < sudokuconst; spalte++){
		for (int zaehler = 1; zaehler <= 9; zaehler++){

			int counter = 0;

			for (int zeile = 0; zeile < sudokuconst; zeile++) {
				// … die Zeilen des Blocks im Bereich zeile = block / 3 * 3; zeile <= block / 3 * 3 + 2, 
				// … die Spalten des Blocks im Bereich spalte = block % 3 * 3; spalte <= block % 3 * 3 + 2. 
				if (zaehler == sudoku[zeile / 3 + spalte / 3 * 3][zeile % 3 + spalte % 3 * 3]){
					counter++;
				}
			}
			if (counter > 1){
				cout << "Block " << spalte << ": Zahl " << zaehler << " mehrfach" << endl;
				gueltig = false;
			}
			else if (counter == 0){
				cout << "Block " << spalte << ": Zahl " << zaehler << " kommt nicht vor." << endl;
				gueltig = false;
			}
		}
	}
	if (gueltig){
		cout << endl << "Das Sudoku ist gueltig." << endl;
	}
	system("PAUSE");
	return 0;
}
