/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 07
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion

int main(void)		// main funktion
{
	float x,y;		// deklaration der variablen x, y als float
	printf("Laboraufgabe - 07\n");
	for(x=1;x<=10;x++)	// for schleife die bis 10 zählt
  	{
   		y=x*x+x+10;	// berechnung von y
   		printf("%2.0f.Ergebnis: %5.2f\n",x,y);	// ausgabe
  	}
	return 0;		// rückgabewert, beendigung des programms
}
