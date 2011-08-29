/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 03
*/

#include <stdio.h>	// standard ein-/ausgabefunktionen einfügen

int main(void)		// main funktion
{
	char c;		// deklaration der variable c als charakter
	int var=0;	// deklaration der variable var als integer
	printf("Laboraufgabe - 03\n");
	printf("alphanumerische Zeichen eingeben: ");	// ausgabe
	while((c=getchar()) != '\n')	// while-schleife die solang zählt, bis (c=getchhar)='\n' erreicht (spricht, bis zur bestätigung mit enter)
	{
		if (c >= '0' && c <= '9')	// überprüfung ob c >= 0 oder <= 9 ist
		{
			var = var*10 + c - '0';		// umrechnung in dezimal
		}
	}
	printf("gefilterte Zahlenkette: %d\n", var);	// ausgabe der zahlen
	return 0;	// rückgabewert, beendigung des programms
}
