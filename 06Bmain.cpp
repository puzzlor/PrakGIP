// Datei: main.cpp
#include <iostream> 
using namespace std;
struct TListenKnoten{
	int data;
	TListenKnoten *prev;//neu 
	TListenKnoten *next;
};
void hinten_anfuegen(TListenKnoten* &anker, int wert){
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->prev = anker;//neu 
	neuer_eintrag->next = 0;
	if (anker == nullptr){
		anker = neuer_eintrag;
	}
	else{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr){
			ptr = ptr->next;
		}
		neuer_eintrag->prev = ptr;//neu 
		ptr->next = neuer_eintrag;
	}
}
void liste_ausgeben(TListenKnoten * anker){
	if (anker == nullptr){
		cout << "Leere Liste." << endl;
	}
	else{
		cout << "[ ";
		TListenKnoten *ptr = anker;
		do{
			cout << ptr->data;
			if (ptr->next != nullptr) cout << " , ";
			else cout << " ";
			ptr = ptr->next;
		} while (ptr != nullptr);
		cout << "]" << endl;
	}
}
void liste_ausgeben_rueckwaerts(TListenKnoten* anker){//neu 
	if (anker == nullptr){
		cout << "Leere Liste." << endl;
	}
	else{
		cout << "[ ";
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr){
			ptr = ptr->next;
		}
		do{
			cout << ptr->data;
			if (ptr->prev != nullptr) cout << " , ";
			else cout << " ";
			ptr = ptr->prev;
		} while (ptr != nullptr);
		cout << "]" << endl;
	}
}
void einfuegen(TListenKnoten* &anker, int wert_neu, int vor_wert){
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert_neu;
	neuer_eintrag->prev = anker;
	neuer_eintrag->next = 0;
	if (anker == nullptr){
		anker = neuer_eintrag;
	}
	else{
		TListenKnoten *ptr = anker;
		//[0, 1, 4, 9, 16, 25, 36, 49, 64, 81] 
		//       :: 
		while (ptr->next != nullptr && ptr->data != vor_wert){
			ptr = ptr->next;
		}
		if (ptr->prev == nullptr){
			neuer_eintrag->data = anker->data;
			neuer_eintrag->next = anker->next;
			anker->data = wert_neu;
			ptr->next->prev = neuer_eintrag;
			ptr->next = neuer_eintrag;
		}
		else if (ptr->next == nullptr){
			neuer_eintrag->prev = ptr;
			ptr->next = neuer_eintrag;
		}
		else if (ptr->data == vor_wert){
			ptr->prev->next = neuer_eintrag;
			neuer_eintrag->prev = ptr->prev;//Der *next des Vorherrigen Kontens wird auf neuer_eintrag gesetzt 
			ptr->prev = neuer_eintrag;//Der *prev des Nächsten Kontens wird auf neuer_eintrag gesetzt) 
			neuer_eintrag->next = ptr;
		}
	}
}
//int main(){ 
//    int laenge = 10; 
//    TListenKnoten *anker = nullptr; 
//    liste_ausgeben(anker); 
//    for (int i = 0; i < laenge; i++){ 
//        hinten_anfuegen(anker, i*i); 
//    } 
//    liste_ausgeben(anker); 
//    liste_ausgeben_rueckwaerts(anker); 
//    system("PAUSE"); 
//    return 0; 
//} 
int main()
{
	int laenge = 10;
	TListenKnoten *anker = nullptr;
	for (int i = 0; i < laenge; i++)
		hinten_anfuegen(anker, i*i);
	liste_ausgeben(anker);
	int wert_neu, vor_wert;
	cout << "Einzufuegender Wert: "; cin >> wert_neu;
	cout << "Vor welchem Wert? "; cin >> vor_wert;
	einfuegen(anker, wert_neu, vor_wert);
	liste_ausgeben(anker);
	liste_ausgeben_rueckwaerts(anker);
	system("PAUSE");
	return 0;
}
