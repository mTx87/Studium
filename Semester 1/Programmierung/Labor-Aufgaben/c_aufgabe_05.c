/*
        Datum: 14.07.2011
        Author: Tannert, Sebastian
        Uni/FH: Hochschule für Technik und Wirtschaft Berlin
        Studiengang: Computer Engineering (Sommersemester 2011)
        Fachbereich: 1
        Fach: Strukturierte Programmierung
        Dozent: Prof. Dr. Schmidek
        Laboraufgabe - 05
*/

#include <stdio.h>	// einfügen der standard ein-/ausgabefunktionen

int gueltig(char typ[6], int zahl)		// funktion zur überprüfung der eingabe (monat, jahr)
{
	if (typ == "monat")			// überprüfung ob typ = "monat" ist
	{
		if (zahl > 12 || zahl < 1)	// überprüfung ob die zahl > 12 oder < 1 ist
		{
			printf("Fehlerhafte Eingabe, nur Zahlen von 1-12 möglich!\n");		// fehlerausgabe
			return 0;		// rückgabewert
		}
		else			// falls die überprüfung nicht zutrifft
			return 1;	// rückgabewert
	}
	else if (typ == "jahr")		// überprüfung ob typ = "jahr" ist
	{
		if (zahl < 1)		// überprüfung ob die zahl < 1 ist
		{
			printf("Fehlerhafte Eingabe, nur Zahlen ab 1 möglich!\n");	// fehlerausgabe
			return 0;		// rückgabewert
		}
		else			// fals die überprüfung nicht zutrifft
			return 1;	// rückgabewert
	}
}

char* zahltomonat(int zahl)	// funktion um eine zahl in den dazugehörigen monat als text umzuwandeln
{
	switch(zahl)			// switch-case der variable zahl
	{
		case 1: return "Januar"; break;		// rückgabewerte der monate
		case 2: return "Februar"; break;
		case 3: return "März"; break;
		case 4: return "April"; break;
		case 5: return "Mai"; break;
		case 6: return "Juni"; break;
		case 7: return "Juli"; break;
		case 8: return "August"; break;
		case 9: return "September"; break;
		case 10: return "Oktober"; break;
		case 11: return "November"; break;
		case 12: return "Dezember"; break;
	}
}

int main(void)		// main funktion
{
	int monat, jahr, tage;		// deklaration der variablen monat, jahr und tage als integer
	printf("Laboraufgabe - 05\n");
	do		// do-while schleife
	{
		printf("Eingabe des Monats (1-12): ");		// ausgabe
		scanf("%i", &monat);				// einlesen des monats in variable monat
	}
	while(gueltig("monat", monat) == 0);			// bedingung der do-while schleife
	do		// do-while schleife
	{
		printf("Eingabe des Jahres: ");			// ausgabe
		scanf("%i", &jahr);				// einlesen des jahres in variable jahr
	}
	while(gueltig("jahr", jahr) == 0);			// bedigung der do-while schleife
	switch(monat)			// switch-case
	{
		case 2:
		{
			if( !(jahr%4) && jahr%100 != 0 || !(jahr%400))	// überprüfung ob schaltjahr etc.
				tage = 29;				// tage variable setzen
			else						// falls überprüfung nicht zutrifft
				tage = 28;				// tage variable setzen
			break;
		}
		case 11: tage = 30; break;				// tage variable setzen
		default: tage = 31;					// tage variable setzen
	}
	printf("Der Monat %s des Jahres %i hat %i Tage.\n", zahltomonat(monat), jahr, tage);	// ausgabe des monats, jahres und der tage
	return 0;	// rückgabewert, beendigung des programms
}
