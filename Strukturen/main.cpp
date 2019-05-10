#include <iostream>
#include <string>

using namespace std;

// Definition einer Struktur

struct Person
{
	int id;
	string vorname;
	string nachname;
	char geschlecht;
	int alter;
	float groesse;
	bool brille;
};


// Funktion zur Ausgabe der Personendaten in der Konsole
void AusgabePersonenDaten(Person person)
{
	cout << "Id:\t\t" << person.id << endl;
	cout << "Vorname:\t" << person.vorname << endl;
	cout << "Nachname:\t" << person.nachname << endl;
	cout << "Geschlecht:\t" << person.geschlecht << endl;
	cout << "Alter:\t\t" << person.alter << endl;
	cout << "Groesse:\t" << person.groesse << endl;
	cout << "Brille:\t\t" << person.brille << endl;
	cout << endl;
}


int main()
{
	cout << "Programm zu Strukturen" << endl << endl;


	// Verwendung der Struktur 

	// Definition von 2 Variablen mit eigenen Datentyp "Person"
	
	Person person1;
	Person person2;

	// Zuweisung von Werten an die Attribute der Variable

	person1.id = 1001;
	person1.vorname = "Max";
	person1.nachname = "Mustermann";
	person1.geschlecht = 'm';
	person1.alter = 32;
	person1.groesse = 1.83;
	person1.brille = false;

	person2.id = 1002;
	person2.vorname = "Maxine";
	person2.nachname = "Musterfrau";
	person2.geschlecht = 'w';
	person2.alter = 29;
	person2.groesse = 1.75;
	person2.brille = true;

	// Ausgabe der Personendaten in die Konsole
	AusgabePersonenDaten(person1);
	AusgabePersonenDaten(person2);

	system("pause");
	return 0;
}