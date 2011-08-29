/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 08
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktion

int main(void)		// main funktion
{
	int n, x;		// deklaration der variablen n und x als integer
	float aussend, innend, hoehe, pi = 3.14;	// deklaration der variablen aussend, innend, hoehe und pi als float
	printf("Laboraufgabe - 08\n");
	printf("Anzahl der Zylinder: ");		// ausgabe
	scanf("%i", &n);				// einlesen der variable n
	for(x = 1; x <= n; x++)				// for-schleife die bis n zählt
	{
		printf("%d.Zylinder\n", x);		// ausgabe
		printf("Außendurchmesser: ");		// ausgabe
		scanf("%f", &aussend);			// einlesen in aussend
		printf("Innendurchmesser: ");		// ausgabe
		scanf("%f", &innend);			// einlesen in innend
		printf("Höhe: ");			// ausgabe
		scanf("%f", &hoehe);			// einlesen in hoehe
		printf("Volumen des %d.Zylinders: %.2f\n", x, pi * hoehe * (aussend + innend));		// ausgabe des volumens
		printf("Oberfläche des %d.Zylinders: %.2f\n", x, pi * hoehe * (aussend + innend) + 2 * (pi / 4 * (aussend - innend)));	// ausgabe der oberfläche
	}
	return 0;	// rückgabewert, beendigung des programms
}
