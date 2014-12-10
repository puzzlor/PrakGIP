// Datei: main.cpp
#include <iostream> 
#include <string> 
using namespace std;

int main(){
	// Schleifen beginnt und füllt das string array 
	string eingabe[11]/* =

					  {

					  " 5 1 4 | 8 6 9 | 7 2 3 ",
					  " 8 7 2 | 3 4 5 | 6 1 9 ",
					  " 9 6 3 | 2 1 7 | 5 4 8 ",
					  "-------|-------|-------",
					  " 6 2 8 | 1 3 4 | 9 5 7 ",
					  " 1 9 7 | 6 5 2 | 8 3 4 ",
					  " 4 3 5 | 7 9 8 | 1 6 2 ",
					  "-------|-------|-------",
					  " 2 4 6 | 9 7 1 | 3 8 5 ",
					  " 7 5 1 | 4 8 3 | 2 9 6 ",
					  " 3 8 9 | 5 2 6 | 4 7 1 ",

					  }*/;
	cout << "Bitte geben Sie das Sudoku ein: " << endl;
	for (int i = 0; i < 11; i++){
		getline(cin, eingabe[i]);
	}
	// Array-definition (2D Tabelle) 
	int sudoku[9][9] = { 0 };
	for (int i = 0; i < 9; i++){
		//Schleife für die 2te Dimension 
		for (int z = 0; z < 9; z++){
			// Vom string in die Tabelle schreiben 
			sudoku[i][z] = eingabe[i + i / 3].at((z + z / 3) * 2 + 1) - 48;
		}
	}
	cout << "Das Sudoku lautet: " << endl;
	for (int i = 0; i < 9; i++){// Horizontale Trennung 
		if (i % 3 == 0 && i > 0) cout << "=======//=======//=======" << endl;

		//Schleife für die 2te Dimension 
		for (int z = 0; z < 9; z++){
			// Trennzeichen einfügen 
			if (z % 3 == 0 && z > 0) cout << " //";
			//Ausgabe der Tabelle 
			cout << " " << sudoku[i][z];
		}
		cout << endl;
	}
	system("Pause");
	return 0;
}
