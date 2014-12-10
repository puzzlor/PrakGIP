// Datei: TListenKnoten_Template.cpp 
// siehe Praktikum B_06 
#include "TListenKnoten_Template.h" 
#include "sort_template.h" 
#include <string> 
#include <iostream> 
using namespace std;

template void hinten_anfuegen<string>(TListenKnoten<string>* &anker, string wert);
template void liste_ausgeben<string>(TListenKnoten<string> *anker);

template <typename T>
void hinten_anfuegen(TListenKnoten<T>* &anker, T wert){
	TListenKnoten<T> *neuer_eintrag = new TListenKnoten<T>;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = 0;
	if (anker == nullptr){
		anker = neuer_eintrag;
	}
	else{
		TListenKnoten<T> *ptr = anker;
		while (ptr->next != nullptr){
			ptr = ptr->next;
		}
		ptr->next = neuer_eintrag;
	}
}
template <typename T>
void liste_ausgeben(TListenKnoten<T> *anker){
	if (anker == nullptr){
		cout << "Leere Liste." << endl;
	}
	else{
		cout << "[ ";
		TListenKnoten<T> *ptr = anker;
		do{
			cout << ptr->data;
			if (ptr->next != nullptr) cout << " , ";
			else cout << " ";
			ptr = ptr->next;
		} while (ptr != nullptr);
		cout << "]" << endl;
	}
}
