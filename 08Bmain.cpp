//Datei: main.cpp 
#include <iostream> 
using namespace std;
//Aufgabe B08 
struct TListenKnoten{
	int data;
	TListenKnoten *next;
};
void vorne_anfuegen(TListenKnoten *&anker, int data){
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = data;
	neuer_eintrag->next = anker;
	anker = neuer_eintrag;
}
void hinten_anfuegen(TListenKnoten *&ptr, int data){
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = data;
	neuer_eintrag->next = ptr->next;
	ptr->next = neuer_eintrag;
}
void ein(TListenKnoten* &anker, int data){
	if (anker == nullptr){
		vorne_anfuegen(anker, data);
	}
	else if (data < anker->data){
		vorne_anfuegen(anker, data);
	}
	else{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr && ptr->next->data < data){
			ptr = ptr->next;
		}
		hinten_anfuegen(ptr, data);
	}
}
void aus(TListenKnoten* &anker){
	if (anker == nullptr){
		cout << "Keine Schluesselwerte." << endl;
	}
	else{
		cout << endl << "Elemente der Liste: " << endl;
		TListenKnoten *ptr = anker;
		while (ptr != nullptr){
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
}
void main(){
	TListenKnoten *anker = nullptr;
	unsigned int input;
	do{
		cout << endl << "\t 1 Schluesselwert eingeben" << endl;
		cout << "\t 2 Liste ausgeben" << endl;
		cout << "\t 3 Programm beenden" << endl;
		cin >> input;
		if (input == 1){
			int keyinput;
			cout << endl << "Schluesselwert = ? ";
			cin >> keyinput;
			ein(anker, keyinput);
		}
		else if (input == 2){
			aus(anker);
		}
	} while (input != 3);
	system("pause");
	return;
}
