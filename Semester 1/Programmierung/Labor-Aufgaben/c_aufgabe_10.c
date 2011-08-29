/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 10
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion

int gueltig(float aussen, float innen)	// funktion zur überprüfung der gültigkeit der eingabe
{
	if (innen>aussen)	// überprüfung ob innen > aussen ist
	{
		printf("Fehlerhafte Eingabe, der Außendurchmesser muss größer sein als der Innendurchmesser\n");	// fehlerausgabe
		return 0;	// rückgabewert
	}
	else {			// falls überprüfung nicht zutrifft
		return 1;	// rückgabewert
	}
}

int main(void)		// main funktion
{
        int n, x;	// deklaration der variablen n, x als integer
        float aussend, innend, hoehe, pi = 3.14;	// deklaration der variablen aussend, innend, hoehe, und pi als float
	printf("Laboraufgabe - 10\n");
        printf("Anzahl der Zylinder: ");	// ausgabe
        scanf("%i", &n);			// einlesen in n
        for(x = 1; x <= n; x++)			// for schleife die bis n zählt
        {
                printf("%d.Zylinder\n", x);		// ausgabe von x
		do		// do-while schleife
		{
                	printf("Außendurchmesser: ");	// ausgabe
                	scanf("%f", &aussend);		// einlesen in aussend
                	printf("Innendurchmesser: ");	// ausgabe
                	scanf("%f", &innend);		// einlesen in innend
		} 
		while(gueltig(aussend, innend) == 0);	// bedingung der do-while schleife
                printf("Höhe: ");	// ausgabe
                scanf("%f", &hoehe);	// einlesen in hoehe
                printf("Volumen des %d.Zylinders: %.2f\n", x, pi * hoehe * (aussend + innend));	// ausgabe mit berechnung
                printf("Oberfläche des %d.Zylinders: %.2f\n", x, pi * hoehe * (aussend + innend) + 2 * (pi / 4 * (aussend - innend)));	// ausgabe mit berechnung
        }
        return 0;	// rückgabewert, beendigung des programms
}

