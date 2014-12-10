//// Datei: main.cpp
//-------------------------------------------B09.01
//#include <iostream> 
//#include <string> 
//using namespace std;
//
//int main(){
//	const unsigned int maxTankvorgaenge = 3;
//	string kennzeichen = "";
//	double verbrauch = 0;
//	double distanz = 0;
//	double verbrauchswerte[maxTankvorgaenge][2] = { 0 };
//
//	cout << "Kennzeichen = ? ";
//	getline(cin, kennzeichen);
//
//	for (unsigned int i = 1; i <= maxTankvorgaenge; i++){
//		cout << "Tankfuellung " << i << " [l] = ? ";
//		cin >> verbrauchswerte[i - 1][0];
//		cout << "Wegstrecke " << i << " [km]  = ? ";
//		cin >> verbrauchswerte[i - 1][1];
//	}
//
//	for (unsigned int i = 1; i <= maxTankvorgaenge; i++){
//		verbrauch += verbrauchswerte[i - 1][0];
//		distanz += verbrauchswerte[i - 1][1];
//	}
//	cout << endl << kennzeichen << endl;
//	cout << "Mittlerer Verbrauch [l/100km] = " << verbrauch / distanz * 100 << endl << endl;
//
//	system("PAUSE");
//	return 0;
//}
//-------------------------------------------B09.02
#include <iostream> 
#include <string> 
using namespace std;

const unsigned int maxTankvorgaenge = 3;

class KFZ{
public:
	KFZ(){

	}
	~KFZ(){

	}

	string getKennzeichen(){
		return this->kennzeichen;
	}
	void setKennzeichen(string kennzeichen){
		this->kennzeichen = kennzeichen;
	}

	double getVerbrauch(unsigned int n){
		return this->verbrauch[n - 1];
	}
	void setVerbrauch(unsigned int n, double verbrauch){
		this->verbrauch[n - 1] = verbrauch;
	}

	double getDistanz(unsigned int n){
		return this->distanz[n - 1];
	}
	void setDistanz(unsigned int n, double distanz){
		this->distanz[n - 1] = distanz;
	}

	double getDurchschnittsVerbrauch(){
		return this->durchschnittsVerbrauch;
	}
	void setDurchschnittsVerbrauch(double verbrauch){
		this->durchschnittsVerbrauch = verbrauch;
	}

	void berechneDurchschnittsVerbrauch(){
		double verbrauch = 0;
		double distanz = 0;

		for (unsigned int i = 1; i <= maxTankvorgaenge; i++){
			verbrauch += this->getVerbrauch(i);
			distanz += this->getDistanz(i);
		}

		this->setDurchschnittsVerbrauch(verbrauch / distanz * 100);
	}

	void einlesen(){
		string kennzeichen = "";

		cout << "Kennzeichen = ? ";
		getline(cin, kennzeichen);

		this->setKennzeichen(kennzeichen);

		for (unsigned int i = 1; i <= maxTankvorgaenge; i++){
			double verbrauch = 0;
			double distanz = 0;

			cout << "Tankfuellung " << i << " [l] = ? ";
			cin >> verbrauch;

			cout << "Wegstrecke " << i << " [km]  = ? ";
			cin >> distanz;

			this->setVerbrauch(i, verbrauch);
			this->setDistanz(i, distanz);
		}
	}

	void anzeigen(){
		cout << endl << kennzeichen << endl;
		cout << "Mittlerer Verbrauch [l/100km] = " << this->getDurchschnittsVerbrauch() << endl;
	}
private:
	string kennzeichen;
	double verbrauch[maxTankvorgaenge];
	double distanz[maxTankvorgaenge];
	double durchschnittsVerbrauch;
};

int main(){
	KFZ automobil = KFZ();

	automobil.einlesen();
	automobil.berechneDurchschnittsVerbrauch();
	automobil.anzeigen();

	system("PAUSE");
	return 0;
}
