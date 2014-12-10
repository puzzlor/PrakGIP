// Datei: Wortspiegel.cpp
#include <iostream>
#include <string>
#include "catch.h"
using namespace std;

void wortspiegel(string &text, int pos){
	int pos_x = pos;                                                        //läuft den Text hoch 
	int pos_x2 = pos;                                                        //Platzhalter pos_x2 
	for (; pos_x < text.length() && !(text[pos_x] == ' ' || text[pos_x] == '.'); pos_x++){
		pos_x2 = pos_x;
	}
	int pos_y = pos;                                                        //läuft den Text runter 
	int pos_y2 = pos;                                                        //Platzhalter pos_y2 
	for (; pos_y >= 0 && !(text[pos_y] == ' ' || text[pos_y] == '.'); pos_y--){
		pos_y2 = pos_y;
	}
	char z;
	while (pos_y2 < pos_x2) {
		z = text[pos_x2];                                                    //z = Zwischenspeicher 
		text[pos_x2] = text[pos_y2];
		text[pos_y2] = z;
		pos_x2--;
		pos_y2++;
	}
}

TEST_CASE("Ein Wort am Satzanfang wird um Position 1 gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";
	wortspiegel(text, 1);
	REQUIRE(text == "niE erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein Wort am Satzanfang wird um Position 6 gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";
	wortspiegel(text, 6);
	REQUIRE(text == "Ein retsre Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein Wort am Satzanfang wird um Position 12 gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";
	wortspiegel(text, 12);
	REQUIRE(text == "Ein erster ztaS. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein Wort am Satzanfang wird um Position 3 gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";
	wortspiegel(text, 3);
	REQUIRE(text == "GEHT NICHT");
}
