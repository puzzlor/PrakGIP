// Datei: Funktionen.cpp
#include "funktionen.h" 
using namespace std;
// Aufgabe A04.01 [Anfang] 
int zeichenkette_finden_iterativ(string text, string zkette){
	unsigned int text_pos = 0;
	unsigned int text_such_pos = 0;
	unsigned int zkette_such_pos = 0;
	// Nur den Text durcharbeiten, wenn die Zeichenkette in den Text passt 
	if (text.length() > zkette.length()){
		// Schleife wird durchlaufen bis der letzte Buchstabe erreicht ist [Anfang] 

		while (text_such_pos < text.length()){
			// Zeichen gleich 
			if (text.at(text_such_pos) == zkette.at(zkette_such_pos)){
				// Um im naechsten Durchlaufe der Schleife den naechsten Buchstaben zu pruefen 
				text_such_pos++;
				zkette_such_pos++;
				// Falls die Zeichenkette durchlaufen ist noch bevor der komplette Text durchsucht wurde 
				if (zkette_such_pos == zkette.length()){
					break;
				}
			}
			// Zeichen ungleich 
			else{
				// Speichert die momentane Position im Text 
				// und springt im Text einen Buchstaben weiter 
				text_such_pos = ++text_pos;
				// Reset der Position in der Zeichenkette 
				zkette_such_pos = 0;
			};
		};
		// Schleife wird durchlaufen bis der letzte Buchstabe erreicht ist [Ende] 
		// Diesen Wert nur zurueckgeben, wenn die Zeichenkette auch durchlaufen wurde 
		if (zkette_such_pos == zkette.length()){
			return text_pos;
		}
	}
	// Falls der Text genauso lang ist wie die Zeichenkette 
	else if (text.length() == zkette.length()){

		if (text == zkette){
			return 0;
		}
		else{
			return -1;
		}
	};
	return -1;
};
// Aufgabe A04.01 [Ende] 
// Aufgabe A04.02 [Anfang] 
int zeichenkette_finden_rekursiv(string text, string zkette, unsigned int text_pos, unsigned int text_such_pos, unsigned int zkette_such_pos){
	// Passt der Rest der Zeichenkette in den Rest des Textes 
	if (zkette.length() - zkette_such_pos <= text.length() - text_such_pos){
		// Zeichen gleich 
		if (text.at(text_such_pos) == zkette.at(zkette_such_pos)){
			// Um im naechsten Durchlaufe der Funktion den naechsten Buchstaben zu pruefen 
			text_such_pos++;
			zkette_such_pos++;
			// Diesen Wert zurueckgeben, nachdem die Zeichenkette durchlaufen wurde 
			if (zkette_such_pos == zkette.length()){
				return text_pos;
			}
			return zeichenkette_finden_rekursiv(text, zkette, text_pos, text_such_pos, zkette_such_pos);
		}
		// Zeichen ungleich 
		else{
			// Position um eins verschieben und Pruefung von vorne beginnen 
			text_such_pos = ++text_pos;
			// Reset der Position in der Zeichenkette 
			zkette_such_pos = 0;

			return zeichenkette_finden_rekursiv(text, zkette, text_pos, text_such_pos, zkette_such_pos);
		};
	};
	return -1;
};
// Aufgabe A04.02 [Ende]
