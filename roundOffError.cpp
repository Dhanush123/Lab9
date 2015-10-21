// Lab 9
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program demonstrates the strange phenomenon of round-off error." << endl;
    cout << endl;
	
	float x = 0.0f;
	
	while (true) {
		x += 0.4f;
		cout << x;
	}
}
