#include <iostream>
#include <string>

using namespace std;

// Definition einer Struktur

struct Person
{
	string Vorname;
	string Nachname;
	char Geschlecht;
	int Alter;
	float Groesse;
	bool Brille;

};


int main()
{
	cout << "Programm zu Strukturen" << endl << endl;

	Person Person1;

	Person1.Vorname = "Daniel";
	Person1.Nachname = "Schmunkamp";
	Person1.Geschlecht = 'm';
	Person1.Alter = 32;
	Person1.Groesse = 1.83;
	Person1.Brille = false;


	cout << Person1.Vorname << endl;
	cout << Person1.Nachname << endl;
	cout << Person1.Geschlecht << endl;
	cout << Person1.Alter << endl;
	cout << Person1.Groesse << endl;
	cout << Person1.Brille << endl;



	system("pause");
	return 0;
}