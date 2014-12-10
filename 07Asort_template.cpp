// Datei: sort_template.cpp 
// siehe Übung vom 19.11.2014 
#include "TListenKnoten_Template.h" 
#include "sort_template.h" 
#include <string> 
using namespace std;
template void aufsteigend<string>(string &x, string &y);
template void absteigend<string>(string &x, string &y);
template void sortiere<TListenKnoten<string>, string>(TListenKnoten<string> *anker, void(*cmp_p)(string &, string &));


template <typename T>
void aufsteigend(T &x, T &y){
	/* Hier: Werte von x und y tauschen, falls ... */
	if (x > y) {
		T temp = x;
		x = y;
		y = temp;
	}
}
template <typename T>
void absteigend(T &x, T &y){
	/* Hier: Werte von x und y tauschen, falls ... */
	// if (y > x) { T temp; x = y; y = temp;} 
	aufsteigend<T>(y, x);
}
template <typename T1, typename T2>
void sortiere(T1 *anker, void(*cmp_p)(T2 &, T2 &)){
	int length = 0;
	if (anker != nullptr){
		TListenKnoten<T2> *ptr = anker;
		while (ptr->next != nullptr){
			length++;
			ptr = ptr->next;
		}
	}
	for (int i = 0; i < length; i++){
		TListenKnoten<T2> *ptr = anker;
		for (int j = 0; j < length - i; j++){
			cmp_p(ptr->data, ptr->next->data);
			ptr = ptr->next;
		}
	}
}
