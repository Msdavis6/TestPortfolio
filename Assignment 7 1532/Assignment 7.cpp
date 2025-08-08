/*
	Main
	Assignment 7
	Michael Davis
	8/5/25
*/

#include "Header.h"
#include "Conversions.h"
#include "Menu.h"
#include "MenuImp.cpp"

using namespace std;


double inputTemp(string);
void outputGeneric(string, double, double);

int main() {

		string sConversionType;
		conversionType type;
		double dFahrenheit, dCelsius, dKelvin;
		string sFahrenheit, sCelsius, sKelvin;

		sFahrenheit = "Fahrenheit";
		sCelsius = "Celsius";
		sKelvin = "Kelvin";

		getHeading("3");

		sConversionType = menu();

		while (sConversionType != "X" && sConversionType != "x") {


			if (sConversionType == "1") {
				dCelsius = inputTemp(sCelsius);
				dFahrenheit = type.ctoF(dCelsius);
				outputGeneric("1", dCelsius, dFahrenheit);
			}
			else if (sConversionType == "2") {
				dKelvin = inputTemp(sKelvin);
				dFahrenheit = type.ktoF(dKelvin);
				outputGeneric("2", dKelvin, dFahrenheit);
			}
			else if (sConversionType == "3") {
				dFahrenheit = inputTemp(sFahrenheit);
				dCelsius = type.ftoC(dFahrenheit);
				outputGeneric("3", dFahrenheit, dCelsius);
			}
			else if (sConversionType == "4") {
				dCelsius = inputTemp(sCelsius);
				dKelvin = type.ctoK(dCelsius);
				outputGeneric("4", dCelsius, dKelvin);
			}
			else if (sConversionType == "5") {
				dKelvin = inputTemp(sKelvin);
				dCelsius = type.ktoC(dKelvin);
				outputGeneric("5", dKelvin, dCelsius);
			}
			else if (sConversionType == "6") {
				dFahrenheit = inputTemp(sFahrenheit);
				dKelvin = type.ftoK(dFahrenheit);
				outputGeneric("6", dFahrenheit, dKelvin);
			}

			sConversionType = menu();

		}

		getClosing();
		return 0;
	}
