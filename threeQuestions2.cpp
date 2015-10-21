// Lab 8
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include<string>
using namespace std;

bool question(string question, string answer){
	string input;
	cout << question;
	getline(cin, input);
	
	if (input == answer) {
		cout << "Correct!" << endl;
		cout << endl;
		return true;
	} else {
		cout << "Incorrect!" << endl;
		cout << endl;
		return false;
	}
}

int main() {
	int correct = 0;
	
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program gives a correct/incorrect output based on user response to 3 questions." << endl;
    cout << endl;

    if (question("1. What company made the iPhone? ","Apple")) correct++;
    if (question("2. Which company makes the Android OS? ","Google")) correct++;
    if (question("3. What year was the Model X released? ","2015")) correct++;
	
	cout << "That's " << correct << " correct out of 3 questions asked." << endl;
}
