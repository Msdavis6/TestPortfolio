//Header
#define _CRT_SECURE_NO_WARNINGS

#include "Header.h" 

using namespace std;


// Global Variables
string firstName = "Michael";
string lastName = "Davis";

void getHeading(string x) {

	string assignment = x;
	cout << "\n\n  " << getFullName();
	cout << "\n  C++ Programming 2\n  " << "Assignment " << assignment << endl << endl;
	return;
}

void getClosing() {

	auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
	cout << "\n\nProgram ended" << " at " << ctime(&timenow);
	cout << "\nPress the Enter key to continue.\n\n";
}

string getFirstName() {

	return firstName;
}

string getLastName() {

	return lastName;
}

string getFullName() {

	return getFirstName() + " " + getLastName();
}