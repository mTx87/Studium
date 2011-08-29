/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 02
*/

#include <stdio.h>	// standard ein-/ausgabe einfügen
#include <string.h>	// header für fgets sowie strlen einfügen

int main(void)		// main funktion
{
	char text[10];	// deklaration eines strings
	int i;		// deklaration der variable i
	printf("Laboraufgabe - 02\n");
	printf("Geben Sie eine Zeichenkette a 10 Zeichen ein: ");	// ausgabe
	fgets(text, sizeof(text)+1, stdin);	// einlesen von stdin und in text speichern
	printf("Zeichenkette rückwärts: "); // ausgabe
	for(i = 0;i<=strlen(text);i++) // for schleife die bis 10 zählt (länge des strings)
	{
		printf("%c", text[strlen(text)-i]); // ausgabe der einzelnen zeichen des strings in umgekehrter reihenfolge
	}
	printf("\n");	// ausgabe eines zeilenumbruchs
	return 0;	// rückgabewert, beendigung des programms
}
