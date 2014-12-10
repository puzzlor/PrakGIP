// Datei: TListenKnoten_Template.h
template <typename T> struct TListenKnoten{
	T data;
	TListenKnoten<T> *next;
};
template <typename T>
void hinten_anfuegen(TListenKnoten<T>* &anker, T wert);
template <typename T>
void liste_ausgeben(TListenKnoten<T> *anker);
