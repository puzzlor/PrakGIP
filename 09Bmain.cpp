// Datei: main.cpp 
#include <iostream> 
#include <string> 
using namespace std;

const unsigned int maxAutos = 3;

class Mobile{
public:
	Mobile(){
		einlesen();
	}
	~Mobile(){

	}
	void einlesen(){
		cout << "ID             = ? ";
		cin >> this->id;
		cout << "Marke          = ? ";
		cin >> this->marke;
		cout << "Modell         = ? ";
		cin >> this->modell;
		cout << "Preis          = ? ";
		cin >> this->preis;
		cout << "Kilometerstand = ? ";
		cin >> this->kilometerstand;
		cout << "Kraftstoffart  = ? ";
		cin >> this->kraftstoffart;
		cout << "PLZ            = ? ";
		cin >> this->plz;
	}
	void ausgabe(){
		cout << "ID             = ?  " << this->id << endl;
		cout << "Marke          = ?  " << this->marke << endl;
		cout << "Modell         = ?  " << this->modell << endl;
		cout << "Preis          = ?  " << this->preis << endl;
		cout << "Kilometerstand = ?  " << this->kilometerstand << endl;
		cout << "Kraftstoffart  = ?  " << this->kraftstoffart << endl;
		cout << "PLZ            = ?  " << this->plz << endl;
	}
	bool suche(string marke, string modell, double preis, double kilometerstand, string kraftstoffart, unsigned int plz){
		if (this->marke == marke || marke == "0"){
			if (this->modell == modell || modell == "0"){
				if (this->preis <= preis || preis == 0){
					if (this->kilometerstand <= kilometerstand || kilometerstand == 0){
						if (this->kraftstoffart == kraftstoffart || kraftstoffart == "0"){
							if (this->plz == plz || plz == 0){
								return true;
							}
						}
					}
				}
			}
		}
		return false;
	}
private:
	unsigned int id;
	string marke;
	string modell;
	double preis;
	double kilometerstand;
	string kraftstoffart;
	unsigned int plz;
};
void suche(string &marke,string &modell,double &preis,double &kilometerstand,string &kraftstoffart,unsigned int &plz){
	cout << endl << endl << "Wonach suchen Sie?" << endl;
	cout << "Marke          = ? ";
	cin >> marke;
	cout << "Modell         = ? ";
	cin >> modell;
	cout << "Preis          = ? ";
	cin >> preis;
	cout << "Kilometerstand = ? ";
	cin >> kilometerstand;
	cout << "Kraftstoffart  = ? ";
	cin >> kraftstoffart;
	cout << "PLZ            = ? ";
	cin >> plz;

	return;
};
int main(){
	Mobile autos[maxAutos];
	string marke;
	string modell;
	double preis;
	double kilometerstand;
	string kraftstoffart;
	unsigned int plz;

	suche(marke,modell,preis,kilometerstand,kraftstoffart,plz);

	cout << endl << endl << "Angebote:" << endl;

	for (unsigned int i = 0; i < maxAutos; i++){
		if (autos[i].suche(marke, modell, preis, kilometerstand, kraftstoffart, plz)){
			autos[i].ausgabe();
		}
	}
	cout << endl;

	system("PAUSE");
	return 0;
}
