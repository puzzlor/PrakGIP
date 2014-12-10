// Datei: main.cpp
//-------------------------------------------B02.01
#include <iostream> 
#include <climits> 
using namespace std;

int main(){
	char c1 = '\n', c2 = '\t', c3 = '\x07', c4 = '\"', c5 = '\'', c6 = 'a', c7 = 'Z';
	cout << "Newline: " << c1;	
	cout << "Tab: " << c2 << "Bell:" << c3 << endl;
	cout << "Doppeltes Hochkomma: " << c4 << endl;
	cout << "Einfaches Hochkomma: " << c5 << endl;
	cout << "Buchstabe a: " << c6 << endl;
	cout << "Buchstabe Z: " << c7 << endl;

	system("PAUSE");
	return 0;
}
//-------------------------------------------B02.02
//#include <iostream>  
//using namespace std;
//
//int main(){
//	int WievielterBuchstabe;
//
//	cout << "Der wievielte Buchstabe soll ausgegeben werden? ";
//	cin >> WievielterBuchstabe;
//	char Buchstabe = (WievielterBuchstabe + 96);
//	cout << "Der " << WievielterBuchstabe << ". des Alphabets lautet: " << Buchstabe << endl;
//
//	system("PAUSE");
//	return 0;
//}
//-------------------------------------------B02.03
//#include <iostream> 
//using namespace std;
//
//int main(){
//	char ZehnerzifferErster, EinerzifferErster, ZehnerzifferZweiter, EinerzifferZweiter;
//
//	cout << "Bitte geben Sie die Zehnerziffer der ersten Zahl ein: ";
//	cin >> ZehnerzifferErster;
//	cout << "Bitte geben Sie die Einerziffer der ersten Zahl ein: ";
//	cin >> EinerzifferErster;
//	cout << "Bitte geben Sie die Zehnerziffer der zweiten Zahl ein: ";
//	cin >> ZehnerzifferZweiter;
//	cout << "Bite geben Sie die Einerziffer der zweiten Zahl ein: ";
//	cin >> EinerzifferZweiter;
//
//	int SummeZehner = ((ZehnerzifferErster - 48) + (ZehnerzifferZweiter - 48)), SummeEiner = ((EinerzifferErster - 48) + (EinerzifferZweiter - 48));
//	cout << SummeZehner << SummeEiner;
//
//	system("PAUSE");
//	return 0;
//}
