//Menu

#include "Menu.h"

using namespace std;


static string menu() {

	string Entry;
	int Counter = 0, NumTries = 3;

	do {
		cout << "\nTemperature Conversion Program\n"
			<< " 1 - CelToFah Change Info\n"
			<< " 2 - KelToFah Change Info\n"
			<< " 3 - FahToCel Change Info\n"
			<< " 4 - CelToKel Change Info\n"
			<< " 5 - KelToCel Change Info\n"
			<< " 6 - FahToKel Change Info\n"
			<< " X - EXIT\n"
			<< " Enter your choice : ";
		cin >> Entry;

		if (Entry == "X" || Entry == "x") {
			return Entry;
		}
		else if (Entry == "1") {
			return Entry;
		}
		else if (Entry == "2") {
			return Entry;
		}
		else if (Entry == "3") {
			return Entry;
		}
		else if (Entry == "4") {
			return Entry;
		}
		else if (Entry == "5") {
			return Entry;
		}
		else if (Entry == "6") {
			return Entry;
		}
		else {
			Counter = Counter + 1;
			cout << "\nERROR!  Invalid Entry....\n" << endl;

			if (Counter >= NumTries) {
				cout << " Maximum number of tries reached!\n";
			}
		}

	} while (Counter < NumTries);

	Entry = "X";
	return Entry;
};