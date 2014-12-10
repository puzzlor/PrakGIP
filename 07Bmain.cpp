// Datei: main.cpp
#include <iostream> 
#include "sort.h" 
using namespace std;
int main(){
	const unsigned int N = 10;
	int a[] = { 9, 3, 5, 2, 8, 6, 4, 3, 7, 8 };
	// Ausgabe des "Vorher" Zustands des Arrays... 
	cout << "Vorher: ";
	for (unsigned int k = 0; k < N; k++)
		cout << a[k] << (k < N - 1 ? ", " : "\n");
	// Aufruf der sortiere() Funktion... 
	sortiere(a, N);
	// Ausgabe des "Nachher" Zustands des Arrays... 
	cout << "Nachher: ";
	for (unsigned int k = 0; k < N; k++)
		cout << a[k] << (k < N - 1 ? ", " : "\n");
	system("PAUSE");
	return 0;
}
