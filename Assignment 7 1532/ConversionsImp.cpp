//Conversions

#include <iostream>
#include <string>
#include <conio.h>
#include "Header.h" 
#include "Conversions.h" 

using namespace std;


double conversionType::ctoF(double cTemp) {
	double fTemp;

	fTemp = 9.0 / 5.0 * cTemp + 32.0;

	return fTemp;
}

double conversionType::ktoF(double kTemp) {
	double fTemp;

	fTemp = 9.0 / 5.0 * (kTemp - 273.0) + 32.0;

	return fTemp;
}

double conversionType::ftoC(double fTemp) {
	double cTemp;

	cTemp = 5.0 / 9.0 * (fTemp - 32.0);

	return cTemp;
}

double conversionType::ctoK(double cTemp) {
	double kTemp;

	kTemp = cTemp + 273.0;

	return kTemp;
}

double conversionType::ktoC(double kTemp) {
	double cTemp;

	cTemp = kTemp - 273.0;

	return cTemp;
}

double conversionType::ftoK(double fTemp) {
	double kTemp;

	kTemp = 5.0 / 9.0 * (fTemp - 32.0) + 273.0;

	return kTemp;
}

double inputTemp(string prompt) {
	double dTemp;

	cout << "\nPlease enter the temperature in " << prompt << " you want to convert : ";
	cin >> dTemp;

	return dTemp;
}

void outputGeneric(string cType, double dInput, double dOutput) {

	if (cType == "1")
		cout << "Celsius of " << dInput << " is " << dOutput << " in Fahrenheit" << endl;
	else if (cType == "2")
		cout << "Kelvin of " << dInput << " is " << dOutput << " in Fahrenheit" << endl;
	else if (cType == "3")
		cout << "Fahrenheit of " << dInput << " is " << dOutput << " in Celsius" << endl;
	else if (cType == "4")
		cout << "Celsius of " << dInput << " is " << dOutput << " in Kelvin" << endl;
	else if (cType == "5")
		cout << "Kelvin of " << dInput << " is " << dOutput << " in Celsius" << endl;
	else if (cType == "6")
		cout << "Fahrenheit of " << dInput << " is " << dOutput << " in Kelvin" << endl;
}
