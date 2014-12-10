// Datei: main.cpp
//-------------------------------------------B03.01
#include <iostream> 
#include <string> 
using namespace std;

int main(){
	string text;
	int v;

	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, text);
	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;

	if (v > 26){
		v = v % 26;//mehrmaliges Wrap Araound verhindern direkt mit der Ausschlaggebenden Verschiebung arbeiten! 
	}
	for (int i = 0; i < text.length(); i++){
		if (text[i] >= 65 && text[i] <= 90){//Große Buchstaben prüfen 
			if (text[i] + v > 90){
				text[i] = text[i] + 64 - 90 + v; // position von 90 Ende der Großenbuchstaben einmal abziehen, dannach vom text[i] dann Beginn er großen 64 addieren  
			}
			else{
				text[i] = text[i] + v;
			}
		}
		if (text[i] >= 97 && text[i] <= 122){ //Klein Buchstaben prüfen! 
			if (text[i] + v > 122){
				text[i] = text[i] - 122 + 96 + v;
			}
			else{
				text[i] += v;
			}
		}
	}
	cout << text << endl;

	system("pause");
	return 0;
}
