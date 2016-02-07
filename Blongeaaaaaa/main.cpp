/* ----------------------------------------------------------------------------
* Copyright 2016 Mark Bakhit <mbakhit@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
/**
* A program that attempts to convert integers to roman numerals
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
void UserInput();
void RomanCalc(int);

void UserInput() {
	for (char x = 'o'; x != 'N' && x != 'n';) {
		int userInput;
		cout << "Please enter an integer\n";
		cin >> userInput;
		RomanCalc(userInput);
		cout << "Would you like to calculate another? (Y/N)\n";
		cin >> x;
	}
}

void RomanCalc(int input) {
	string solution, iVal, vVal, xVal, lVal, cVal, dVal, mVal;
	int iTester, vTester, xTester, lTester, cTester, dTester, mTester;
	/* If I to D evaluate to 4 then input secondary value*/

	iTester = input % 5;
	vTester = (input % 10) / 5;
	xTester = (input % 50) / 10;
	lTester = (input % 100) / 50;
	cTester = (input % 500) / 100;
	dTester = (input % 1000) / 500;
	mTester = input / 1000;


	cout << "i: " << iTester << endl;
	cout << "v: " << vTester << endl;
	cout << "x: " << xTester << endl;
	cout << "l: " << lTester << endl;
	cout << "c: " << cTester << endl;
	cout << "d: " << dTester << endl;
	cout << "m: " << mTester << endl;

	cout << "The answer is: ";

	if (input != 49) {
		if (lTester < 4 && lTester != 0) {
			for (int i = 0; i < lTester; i++) {
				cout << "L";
			}
		}
		else if (lTester != 0) {
			cout << "XC";
		}
		if (xTester < 4 && xTester != 0) {
			for (int i = 0; i < xTester; i++) {
				cout << "X";
			}
		}
		else if (xTester != 0) {
			cout << "XL";
		}
		if (vTester < 4 && vTester != 0) {
			for (int i = 0; i < vTester; i++) {
				cout << "V";
			}
		}
		else if (vTester != 0) {
			cout << "IX";
		}
		if (iTester < 4) {
			for (int i = 0; i < iTester; i++) {
				cout << "I";
			}
		}
		else {
			cout << "IV";
		}
	}
	else {
		cout << "XLIX";
	}


	cout << endl;
}

int main() {
	UserInput();
	system("Pause");
	return 0;
}
