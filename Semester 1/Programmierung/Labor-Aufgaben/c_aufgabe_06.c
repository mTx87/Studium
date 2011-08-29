/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 06
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktionen
#include <math.h>	// einfügen der math.h für die funktion fabs

int main(void)		// main funktion
{
	double xneu, xalt, x;	// deklaration der variablen xneu, xalt, x als double
	double epsilon = 1E-4;	// deklaration der variablen epsilon als double
	printf("Laboraufgabe - 06\n");
	printf("Zahl: ");	// ausgabe
	scanf("%lf", &x);	// einlesen der variable x
	xneu = x;		// xneu zu x setzen
	do			// do while schleife
	{
		xalt = xneu;		// xalt zu xneu setzen
		xneu = 0.5*(xalt+(x/xalt));	// xneu berechnung
	}
	while (fabs(xneu-xalt) > epsilon);	// bedingung der do-while schleife
	printf("Ergebnis: %.4f\n", xneu);	// ausgabe von xneu
	return 0;	// rückgabewert, beendigung des programms
}
