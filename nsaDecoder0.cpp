// Lab 9
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program decodes a string based off of what the user inputs." << endl;
    cout << endl;
	
	string input;
	
	cout << "Enter a line of text: ";
	getline(cin, input);
	
	for (int i = 0; i < input.length(); i++)
		input[i]--;
	
	cout << input << endl;
}