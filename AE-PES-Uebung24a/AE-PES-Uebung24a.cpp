// AE-PES-Uebung24a.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include "Core.h"
#include "Tools/Date.h"

using namespace std;
using namespace Teronis::VCPlusPlus;
using namespace Teronis::VCPlusPlus::Tools;

int main()
{
	// We need the year to determine the amounth of "friday the 13."'s.
	// PS: "ttb" means "the to be".
	int year, day = 13, ttbMatchedDayIndex = 5, found = 0;
	string literalDay = DateTools::toWeekDayName(ttbMatchedDayIndex);
	transform(literalDay.begin(), literalDay.end(), literalDay.begin(), tolower);

	cout << "This program prints out the " << day << ". day of all months that are " << literalDay << "s.\n";
	cout << "Enter the year you want to discover:\n";
	cout << "> ";
	cin >> year;

	for (int month = 1; month <= 12; month++) {
		if (DateTools::calcLeapYearWeekDayIndex(year, month, day) == ttbMatchedDayIndex) {
			cout << "Found date '" << year << "-" << month << "-" << day << "'\n";
			found++;
		}
	}

	if (0 == found)
		cout << "No dates have been found that matched the criteria.";

	stop(0);
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
