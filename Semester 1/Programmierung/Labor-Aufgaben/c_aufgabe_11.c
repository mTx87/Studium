/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 11
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktionen

int main(void)		// main funktion
{
	int i;		// deklaration der variablen i als integer
	printf("Laboraufgabe - 11\n");
	for(i = 1; i<=200; i++)		// for schleife die bis 200 zählt
	{
		if(i%7!=0)		// überprüfung ob der rest bei i%7 ungleich 0 beträgt
		{
			if(i%10!=7)	// überprüfung ob der rest bei i%10 ungleich 7 beträgt
			{
				if((i/10)%10!=7)	// überprüfung ob der rest bei (i/10)%10 ungleich 7 beträgt
				{
					printf("%i\n", i);	// ausgabe der variablen i
				}
			}
		}
	}
	return 0;	// rückgabewert, beendigung des programms
}
