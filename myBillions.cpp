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
	
	const int thousandaireCentsAmount = 1000 * 100;
	const int millionaireCentsAmount  = 1000000 * 100;
	const int billionaireCentsAmount  = 1000000000 * 100;
	
	bool hasThousandaireCalcs = false;
	bool hasMillionaireCalcs = false;
	bool hasBillionaireCalcs = false;
	
	int weeksToThousandaire;
	int weeksToMillionaire;
	int weeksToBillionaire;
	
	int amount = 0;
	int initial = 5;
	int currentWeekNumber = 1;
	
	while (true) {
		if (!hasThousandaireCalcs && amount >= thousandaireCentsAmount) {
			hasThousandaireCalcs = true;
			weeksToThousandaire = currentWeekNumber;
		}
		
		if (!hasMillionaireCalcs && amount >= millionaireCentsAmount) {
			hasMillionaireCalcs = true;
			weeksToMillionaire = currentWeekNumber;
		}
		
		if (!hasBillionaireCalcs && amount >= billionaireCentsAmount) {
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
