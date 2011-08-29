/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 16
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion

potent(int y, int z)	// funktion zur berechnung einer potenz
{
	int i, t=y;	// deklaration der variablen i und t;
	if(z == 1)	// überprüfung ob z == 1 ist
		return y;	// rückgabewert y
	else		// oder
	{
		for(i = 1; i<z; i++)	// for schleife die bis z zählt
		{
			t = t*y;	// t setzen als t*y
		}
		return t;	// rückgabewert t
	}
}

int main(void)	// main funktion
{
	int x, n;	// deklaration der variablen x und n als integer
	printf("Laboraufgabe - 16\n");
	printf("Zahl: ");	// ausgabe
	scanf("%d", &x);	// einlesen in x
	printf("Exponent: ");	// ausgabe
	scanf("%d", &n);	// einlesen in n
	printf("Potenz x^n: %d\n", potent(x, n));	// ausgabe mit zugriff auf funktion potent()
	return 0;	// rückgabewert, beendigung des programms
}
