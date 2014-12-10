// Datei: main.cpp
//-------------------------------------------A02.01
#include <iostream>
using namespace std;

int main(){
	double TCelsius = 0.0;
	cout << " Bitte geben Sie die Temperatur in Grad Celsius ein: ";
	cin >> TCelsius;
	double TFahrenheit = TCelsius * 1.8 + 32;
	cout << "Die Temparatur in Fahrenheit lautet: " << TFahrenheit << endl;

	system("PAUSE");

	return 0;
}
//-------------------------------------------A02.02
//#include <iostream> 
//using namespace std;
//int main(){
//	double LMeter = 0.00;
//	cout << "Bitte geben Sie die Laenge in Metern ein: ";
//	cin >> LMeter;
//	double LFuss = LMeter * 3.2808;
//	cout << "Die Laenge in Fuss lautet: " << LFuss << endl;
//
//	system("PAUSE");
//
//	return 0;
//}
//-------------------------------------------A02.03
//#include <iostream> 
//using namespace std;
//
//int main(){
//	double GeldEuro = 0.00;
//	cout << "Bitte geben SIe die Geldmenge in Euro ein: ";
//	cin >> GeldEuro;
//
//	double GeldUSDollar = GeldEuro*1.2957;
//	cout << "Die Geldmenge in US-Dollar lautet: " << GeldUSDollar << endl;
//
//	system("PAUSE");
//
//	return 0;
//}
//-------------------------------------------A02.04
//#include <iostream> 
//using namespace std;
//
//int main(){
//	double Eingabe = 0.00;
//
//	cout << "Ihre Eingabe: ";
//	cin >> Eingabe;
//
//	int auswahl = 0;
//	cout << endl
//		<< "Ihre Auswahl der Umwandlung: " << endl
//		<< " 1 - Celsius in Fahrenheit" << endl
//		<< " 2 - Meter in Fuss" << endl
//		<< " 3 - Euro in US Dollar" << endl;
//	cin >> auswahl;
//	cout << "Das Ergebnis lautet: " <<
//
//		((auswahl - 3)*(auswahl - 2) / 2)*(Eingabe*1.8 + 32) +
//
//		((auswahl - 1)*(auswahl - 3)*(-1))*(Eingabe*3.2808) +
//
//		((auswahl - 2)*(auswahl - 1) / 2)*(Eingabe*1.2957)
//
//		<< endl;
//
//	system("PAUSE");
//	return 0;
//}
