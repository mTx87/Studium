/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 12
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion
#include <stdlib.h>	// header-file für malloc() einfügen

int main(void)		// main funktion
{
	char c;		// deklaration der variable c als charakter
	char *text = (char *)malloc(200*sizeof(char));	// deklaration eines pointers text mit speicherzuweisung
	char *textinit = text;		// deklaration eines pointers textinit
	printf("Laboraufgabe - 12\n");
	do		// do while schleife
	{
		c = getchar();		// einlesen der tastatureingabe in variable c
		if (c != '.' && c != '?' && c != ',' && c != '!' && c != ' ')	// überprüfung ob c ungleich .,?! ist
		{
			*text = c;	// wert des pointers auf c setzen
			text++;		// hochzählen
		}
	}
	while(c != '\n');	// bedingung der do-while schleife
	*text = '\0';	// string terminieren
	printf("%s\n", textinit);	// ausgabe des strings
	return 0;	// rückgabewert, beendigung des programms
}
