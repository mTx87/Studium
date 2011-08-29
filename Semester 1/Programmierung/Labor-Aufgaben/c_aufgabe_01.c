/*
	Datum: 14.07.2011
	Author: Tannert, Sebastian
	Uni/FH: Hochschule für Technik und Wirtschaft Berlin
	Studiengang: Computer Engineering (Sommersemester 2011)
	Fachbereich: 1
	Fach: Strukturierte Programmierung
	Dozent: Prof. Dr. Schmidek
	Laboraufgabe - 01
*/

#include <stdio.h> //standard ein-/ausgabe einfügen

int main(void)		// main funktion
{
	int n=5,i;	// deklaration der variablen n und i als integer
	float a, b, h;	// deklaration der variablen a,b, h als float
	printf("Laboraufgabe - 01\n");
	for(i=1;i<n;i++)		// for-schleife die bis n zählt
	{
		printf("\n\n EINGABE: A,B = ");	// ausgabe
		scanf("%f,%f",&a,&b);		// einlesen von a und b
		if(a>b)				// überprüfung ob a>b ist
		{
			h=a;			// variable h zu a setzen
			a=b;			// variable a zu b setzen
			b=h;			// variable b zu h setzen
			printf("a: %f\n", a);	// ausgabe von variable a
			printf("b: %f\n", b);	// ausgabe von variable b
		}
		else				// oder (falls a>b nicht zutrifft)
		{
			a*=a;			// quadrat von variable a berechnen
			b*=b;			// quadrat von variable b berechnen
			printf("Quadrat von a: %f\n", a); // ausgabe von a
			printf("Quadrat von b: %f\n", b); // ausgabe von b
		}
	}
	return 0;	// rückgabewert, beenden des programms
}
	
