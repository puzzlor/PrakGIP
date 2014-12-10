//Datei: main.cpp 
#include <iostream> 
using namespace std;
char genres[][100] = { { "Blues" }, { "Classic Rock" }, { "Country" }, { "Dance" }, { "Disco" }, { "Funk" }, { "Grunge" }, { "Hip-Hop" }, { "Jazz" }, { "Metal" }, { "New Age" }, { "Oldies" }, { "Other" }, { "Pop" }, { "R&B" }, { "Rap" }, { "Reggae" }, { "Rock" }, { "Techno" }, { "Industrial" }, { "Alternative" }, { "Ska" }, { "Death Metal" }, { "Pranks" }, { "Soundtrack" }, { "Euro-Techno" }, { "Ambient" }, { "Trip-Hop" }, { "Vocal" }, { "Jazz+Funk" }, { "Fusion" }, { "Trance" }, { "Classical" }, { "Instrumental" }, { "Acid" }, { "House" }, { "Game" }, { "Sound Clip" }, { "Gospel" }, { "Noise" }, { "Alternative Rock" }, { "Bass" }, { "Soul" }, { "Punk" }, { "Space" }, { "Meditative" }, { "Instrumental Pop" }, { "Instrumental Rock" }, { "Ethnic" }, { "Gothic" }, { "Darkwave" }, { "Techno-Industrial" }, { "Electronic" }, { "Pop-Folk" }, { "Eurodance" }, { "Dream" }, { "Southern Rock" }, { "Comedy" }, { "Cult" }, { "Gangsta" }, { "Top 40" }, { "Christian Rap" }, { "Pop/Funk" }, { "Jungle" }, { "Native US" }, { "Cabaret" }, { "New Wave" }, { "Psychadelic" }, { "Rave" }, { "Showtunes" }, { "Trailer" }, { "Lo-Fi" }, { "Tribal" }, { "Acid Punk" }, { "Acid Jazz" }, { "Polka" }, { "Retro" }, { "Musical" }, { "Rock & Roll" }, { "Hard Rock" }, { "Folk" }, { "Folk-Rock" }, { "National Folk" }, { "Swing" }, { "Fast Fusion" }, { "Bebob" }, { "Latin" }, { "Revival" }, { "Celtic" }, { "Bluegrass" }, { "Avantgarde" }, { "Gothic Rock" }, { "Progressive Rock" }, { "Psychedelic Rock" }, { "Symphonic Rock" }, { "Slow Rock" }, { "Big Band" }, { "Chorus" }, { "Easy Listening" }, { "Acoustic" }, { "Humour" }, { "Speech" }, { "Chanson" }, { "Opera" }, { "Chamber Music" }, { "Sonata" }, { "Symphony" }, { "Booty Bass" }, { "Primus" }, { "Porn Groove" }, { "Satire" }, { "Slow Jam" }, { "Club" }, { "Tango" }, { "Samba" }, { "Folklore" }, { "Ballad" }, { "Power Ballad" }, { "Rhythmic Soul" }, { "Freestyle" }, { "Duet" }, { "Punk Rock" }, { "Drum Solo" }, { "A Cappella" }, { "Euro-House" }, { "Dance Hall" }, { "Goa" }, { "Drum & Bass" }, { "Club-House" }, { "Hardcore" }, { "Terror" }, { "Indie" }, { "BritPop" }, { "Negerpunk" }, { "Polsk Punk" }, { "Beat" }, { "Christian Gangsta Rap" }, { "Heavy Metal" }, { "Black Metal" }, { "Crossover" }, { "Contemporary Christian" }, { "Christian Rock" }, { "Merengue" }, { "Salsa" }, { "Thrash Metal" }, { "Anime" }, { "JPop" }, { "Synthpop" }, { "" } };
//A08 a) 
struct id3v1tag{
	char kennung[3];
	char trackname[30];
	char interpretenname[30];
	char albumname[30];
	char jahr[4];
	char kommentar[30];
	unsigned char genre;
};
//A08 b) 
struct id3v1tag eingabe_id3v1Tag(){
	id3v1tag newTag;
	char inputYear[5] = { 0 };
	int inputGenre = 0;

	newTag.kennung[0] = 'T';
	newTag.kennung[1] = 'A';
	newTag.kennung[2] = 'G';
	//1.Kennung, die drei Zeichen ’T’ ’A’ ’G’ 
	cout << "Eingabe:" << endl;
	//2.Trackname, 30 Zeichen incl. Nullterminierungszeichen 
	cout << "Track     = ? ";
	cin >> newTag.trackname;
	//3.Interpretenname, 30 Zeichen incl. Nullterminierungszeichen 
	cout << "Interpret = ? ";
	cin >> newTag.interpretenname;
	//4.Albumname, 30 Zeichen incl. Nullterminierungszeichen 
	cout << "Album     = ? ";
	cin >> newTag.albumname;
	//5.Jahr, 4 Zeichen, kein Nullterminierungszeichen 
	cout << "Jahr      = ? ";
	cin >> inputYear;
	for (unsigned char i = 0; i < 4; i++){ // Kopiert alle Zeichen außer den Nullterminator in das struct. 
		newTag.jahr[i] = inputYear[i];
	}
	//6.Kommentar, 30 Zeichen incl.Nullterminierungszeichen 
	cout << "Kommentar = ? ";
	cin >> newTag.kommentar;
	//7.Genre, 1 Byte (unsigned char). Zahl zwischen 0 und 255. Weiter unten finden Sie eine Liste mit allen definierten Genres. Gespeichert wird nur der Feldindex. 
	cout << "Genre     = ? ";
	cin >> inputGenre;
	newTag.genre = inputGenre;

	return newTag;
}
void printTag(struct id3v1tag tag){
	cout << tag.trackname << endl;
	cout << tag.interpretenname << endl;
	cout << tag.albumname << endl;

	for (unsigned int i = 0; i < 4; i++){
		cout << tag.jahr[i];
	}
	cout << endl;

	cout << tag.kommentar << endl;
	cout << genres[tag.genre] << endl << endl;
}
//A8 c) 
void suche_interpret(struct id3v1tag titel[250], char interpret[30], int n){
	for (int i = 0; i < n; i++){
		if (strcmp(titel[i].interpretenname, interpret) == 0){
			cout << "Titel Nr. " << i + 1 << ":" << endl;
			printTag(titel[i]);
		}
	}
}
//A8 d) 
int main(){
	char input = 0;
	int n = 0;
	id3v1tag titel[250];
	do{
		cout << "t - Titel eingeben" << endl;
		cout << "i - Interpret suchen" << endl;
		cout << "e - Programmende" << endl;
		cin >> input;

		if (input == 't'){
			titel[n] = eingabe_id3v1Tag();
			n++;
		}
		else if (input == 'i'){
			char interpret[30] = { 0 };
			cout << "Interpret = ? ";
			cin >> interpret;
			suche_interpret(titel, interpret, n);
		}
	} while (input != 'e');

	system("PAUSE");
	return 0;
}
