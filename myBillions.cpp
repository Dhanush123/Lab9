// Lab 9
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program calculates when you can be a billionaire." << endl;
    cout << endl;

	const int thousandaireAmount = 1000;
	const int millionaireAmount  = 1000000;
	const int billionaireAmount  = 1000000000;

	bool hasThousandaireCalcs = false;
	bool hasMillionaireCalcs = false;
	bool hasBillionaireCalcs = false;

	int weeksToThousandaire;
	int weeksToMillionaire;
	int weeksToBillionaire;

	double amount = 0;
	double initial = 0.05;
	int currentWeekNumber = 0;

	while (true) {
		if (!hasThousandaireCalcs && amount >= thousandaireAmount) {
			hasThousandaireCalcs = true;
			weeksToThousandaire = currentWeekNumber;
		}

		if (!hasMillionaireCalcs && amount >= millionaireAmount) {
			hasMillionaireCalcs = true;
			weeksToMillionaire = currentWeekNumber;
		}

		if (!hasBillionaireCalcs && amount >= billionaireAmount) {
			hasBillionaireCalcs = true;
			weeksToBillionaire = currentWeekNumber;
			break;
		}

		amount += initial;
		initial *= 2;
		currentWeekNumber++;
	}

	cout << "In " << weeksToThousandaire << " weeks, I will be a thousandaire!" << endl;
	cout << "In " << weeksToMillionaire << " weeks, I will be a millionaire!" << endl;
	cout << "In " << weeksToBillionaire << " weeks, I will be a billionaire!" << endl;
}
