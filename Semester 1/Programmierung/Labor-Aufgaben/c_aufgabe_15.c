/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 15
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion

int main(void)	// main funktion
{
        int feld[3][5];	// deklaration eines 2-dimensionalen arrays
        int i, j;	// deklaration der variablen i und j als integer
	printf("Laboraufgabe - 15\n");
        for(i = 0; i <= 3; i++)	// for schleife die bis 3 zählt
        {
                for(j = 0; j <= 5; j++)	// for schleife die bis 5 zählt
                {
                        feld[i][j] = j;	// wert in array setzen
                        printf("(*(feld + i))[j]: %d\n", (*(feld+i))[j]);	// ausgabe
                        printf("*(*(feld + i)+j): %d\n", *(*(feld+i)+j));	// ausgabe
                }
        }
        return 0;	// rückgabewert, beendigung des programms
}

