/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 13
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion

int nebendiagonale(int zeilen, int spalten, int mat[zeilen][spalten])	// funktion zur berechnung der nebendiagonale
{
	int val=0,i;	// deklaration der variablen val und i als integer
	zeilen--;	// zeilen runterzählen
	spalten--;	// spalten runterzählen
	for(i=0; i <= zeilen; i++)	// for schleife die bis zeilen zählt
	{
		val = val + mat[i][spalten];	// berechnung
		spalten--;	// spalten runterzählen
	}
	return val;	// rückgabewert
}

int main(void)	// main funktion
{
	int matrix[8][8] = { 1, 1, 1, 1, 1, 1, 1, 1,		// deklaration eines 2-dimensionalen arrays matrix
			     1, 1, 1, 1, 1, 1, 1, 1,
			     0, 0, 0, 0, 0, 0, 0, 0,
			     1, 1, 1, 1, 1, 1, 1, 1,
			     0, 0, 0, 0, 0, 0, 0, 0,
			     1, 0, 1, 0, 1, 0, 1, 0,
			     0, 1, 0, 1, 0, 1, 0, 1,
			     1, 0, 1, 0, 1, 0, 1, 0, };
	int i, x;			// deklaration der variablen i und x als integer
	printf("Laboraufgabe - 13\n");
	printf("Ausgabe der Matrix:\n");	// ausgabe
	/* Schleife für manuelle Eingabe der Matrix
	for(i = 0; i < 8; i++)
	{
		for(x = 0; x < 8; x++)
		{
			printf("Zeile: %i, Spalte: %i der Matrix: ", i, x);
			scanf("%i", &matrix[i][x]);
		}
	}
	*/
	for(i = 0; i < 8; i++)	// for schleife die bis 8 zählt
	{
		for(x = 0; x < 8; x++)	// for schleife die bis 8 zählt
		{
			printf("%i ", matrix[i][x]);	// ausgabe der matrix
		}
		printf("\n");	// ausgabe eines zeilenumbruchs
	}
	printf("Ergebnis der Nebendiagonale: %d\n", nebendiagonale(8, 8, matrix));	// ausgabe der nebendiagonale
	return 0;	// rückgabewert, beendigung des programms
}
