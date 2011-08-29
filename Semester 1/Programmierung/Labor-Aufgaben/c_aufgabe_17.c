/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 17
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion
#include <string.h>	// string.h und stdlib.h für malloc, strlen, realloc, strcat und fgets benötigt
#include <stdlib.h>

char* combinestring(char *string1, char *string2)	// funktion zur aneinanderkettung 2er strings
{
	char *newstring;	// deklaration eines pointers als charakter
	int leng = strlen(string1);	// deklaration der variable leng als integer, sowie zuweisung
	newstring = malloc(strlen(string1) + 2);	// newstring speicherzuweisung
	strncat(newstring, string1, leng);	// strncat um inhalt von string1 in newstring zu speichern
	newstring = realloc(newstring, strlen(newstring) + strlen(string2) + 1);	// mehr speicher für newstring
	strcat(newstring, string2);		// strcat um inhalt von string2 in newstring zu speichern
	return newstring;		// rückgabewert newstring
}

int main(void)	// main funktion
{
	char *string1 = (char *)malloc(200*sizeof(char));	// deklaration eines pointers als charakter mit speicherzuweisung
	char *string2 = (char *)malloc(200*sizeof(char));	// deklaration eines pointers als charakter mit speicherzuweisung
	printf("Laboraufgabe - 17\n");
	printf("1. Zeichenkette (ohne Leerzeichen): ");			// ausgabe
	scanf("%s", string1);						// einlesen von string1
	printf("2. Zeichenkette (ohne Leerzeichen): ");			// ausgabe
	scanf("%s", string2);						// einlesen von string2
	printf("Kombinierter String: %s\n", combinestring(string1, string2));	// ausgabe des aneinandergehängten strings mit leerzeichen
	return 0;	// rückgabewert, beendigung des programms
}
