/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 09
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktionen

int main(void)		// main funktion
{
        int n, x, y, it;	// deklaration der variablen n, x, y und it als integer
        float aussend, innend, hoehe, pi = 3.14, vol, ob;	// deklaration der variablen aussend, innend, hoehe, pi, vol und ob als float
	printf("Laboraufgabe - 09\n");
        printf("Anzahl der Zylinder: ");	// ausgabe
        scanf("%i", &n);			// einlesen in n
	printf("Anzahld der Iterationen: ");	// ausgabe
	scanf("%i", &it);			// einlesen in it
        for(x = 1; x <= n; x++)			// for schleife die bis n zählt
        {
                printf("%d.Zylinder\n", x);	// ausgabe
                printf("Außendurchmesser: ");	// ausgabe
                scanf("%f", &aussend);		// einlesen in aussend
                printf("Innendurchmesser: ");	// ausgabe
                scanf("%f", &innend);		// einlesen in innend
                printf("Höhe: ");		// ausgabe
                scanf("%f", &hoehe);		// einlesen in hoehe
		vol = 0;			// vol 0 setzen
		ob = 0;				// ob 0 setzen
		for(y = 1; y <= it; y++)	// for schleife die bis it zählt
		{
			vol = vol+(pi*hoehe*(aussend+innend));	// berechnung
			ob = ob+(pi*hoehe*(aussend+innend)+2*(pi/4*(aussend-innend)));	// berechnung
		}
                printf("Volumen des %d.Zylinders: %4.2f\n", x, vol/it);	// ausgabe
                printf("Oberfläche des %d.Zylinders: %4.2f\n", x, ob/it); // ausgabe
        }
        return 0;	// rückgabewert, beendigung des programms
}

