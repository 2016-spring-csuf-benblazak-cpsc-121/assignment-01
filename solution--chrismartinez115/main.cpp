/* ----------------------------------------------------------------------------
 Copyright (c) 2016 Christian Martinez <cmartinez115@csu.fullerton.edu>
 Released under the [MIT License] (http://opensource.org/licenses/MIT)
   ---------------------------------------------------------------------------- */

/*
 A program that converts integers into roman numerals.
*/
#include <iostream>
using std::cout;
//function prototype
void conversion(int);

int main() {

	int input;
	char choice;

	do {
		cout << "Please enter an integer: ";
		std::cin >> input;
		cout << "\n--> ";
		conversion(input);
		cout << "\nWould you like to convert another integer (Y/N)?";
		std::cin >> choice;
	} while (toupper(choice) == 'Y');

	return 0;
}

void conversion(int a) {
	// check for out of bounds
	if (a < 1 || a > 3999) {
		cout << "Error, integer cannot be 0 and cannot exceed 3999.";
		return;
	}

	//the thousands
	for (int i = 0; i < (a / 1000); i++)
		cout << 'M';

	a %= 1000;

	if (a >= 900) {
		cout << "CM";
		a %= 900;
	}

	if (a >= 500) {
		cout << 'D';
		a %= 500;
	}

	if (a >= 400) {
		cout << "CD";
		a %= 400;
	}

	//the hundreds (after 900s, 500s, and 400s are done)
	for (int j = 0; j < (a / 100); j++)
		cout << 'C';

	a %= 100;

	if (a >= 90) {
		cout << "XC";
		a %= 90;
	}

	if (a >= 50) {
		cout << 'L';
		a %= 50;
	}

	if (a >= 40) {
		cout << "XL";
		a %= 40;
	}

	//the tens (after 90s, 50s, and 40s are done)
	for (int b = 0; b < (a / 10); b++)
		cout << 'X';

	a %= 10;

	if (a >= 9) {
		cout << "IX";
		a %= 9;
	}

	if (a >= 5) {
		cout << "V";
		a %= 5;
	}

	if (a >= 4) {
		cout << "IV";
		a %= 4;
	}

	//the ones (after 9s, 5s, and 4s are done)
	for (int x = 0; x < (a / 1); x++)
		cout << 'I';

	return;
}
