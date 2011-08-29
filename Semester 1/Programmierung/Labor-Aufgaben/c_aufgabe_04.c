/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 04
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktionen

int main(void)		// main funktion
{
	int n, sumpos, sumneg, i, temp;		// deklaration der variablen n, sumpos, sumneg, i und temp als integer
	printf("Laboraufgabe - 04\n");
	printf("Anzahl der n-Ganzzahlen?\n");	// ausgabe
	scanf("%i", &n);			// einlesen von n als integer
	for(i = 1; i <= n; i++)			// for schleife die bis n zählt
	{
		printf("%d.Zahl: ", i);		// ausgabe
		scanf("%i", &temp);		// einlesen der zahl in temp
		if (temp > 0)			// überprüfung ob temp > 0 ist (positiv)
			sumpos = sumpos+temp;	// temp in sumpos speichern
		else if (temp < 0)		// überprüfung ob temp < 0 ist (negativ)
			sumneg = sumneg+temp;	// temp in sumneg speichern
	}
	printf("Summe der positiven Zahlen: %i\n", sumpos);	// ausgabe von sumpos
	printf("Summe der negativen Zahlen: %i\n", sumneg);	// ausgabe von sumneg
	return 0;	// rückgabewert, beendigung des programms
}
