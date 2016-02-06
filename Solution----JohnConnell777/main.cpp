/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
*A small program to change Basic integers into Roman numerals.
*/

// John Connell 
// CPSC 121 Tuesday lab 5 pm



// Pseudocode
// prompt user to get integer
// Converts integer into roman numeral 
// Prompts user again for another round or exit with either n or N
// exit program

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>


void PrintRoman(int x);


int main() {

	int x;
	char f;


	do {
		std::cout << " Welcome to the Roman Numeral Converter!" << std::endl;
		std::cout << " What number would you like converted into a roman numeral?" << std::endl;
		std::cout << " Your number = ";
		std::cin >> x;
		PrintRoman(x);
		std::cout << "\n Would you like to Try again? (Y/N)\n" << std::endl;
		std::cin >> f;
		std::cout << std::endl;
	} while (f == 'Y' || f == 'y');


	std::cin.get();
	system("pause");
	return 0;

}

void PrintRoman(int x) {

	int xM;
	int xD;
	int xC;
	int xL;
	int xX;
	int xV;
	int xI;

	// Function to set M as 1000 integer
	xM = x / 1000;
	// Used to display in final

	switch (xM)
	{
	case 0:std::cout << "";
		break;
	case 1:std::cout << "M";
		break;
	case 2:std::cout << "MM";
		break;
	case 3:std::cout << "MMM";
		break;
	}
	// Getting Remainder of 1000
	x = x % 1000;

	// xD 500 for Roman Numerals

	xD = x / 500;
	x = x % 500;


	switch (xD)
	{
	case 0:std::cout << "";
		break;
	case 1:std::cout << "D";
		break;
	}

	// xC 100 for Roman Numerals
	xC = x / 100;
	x = x % 100;

	switch (xC) {
	case 0:std::cout << "";
		break;
	case 1:std::cout << "C";
		break;
	case 2:std::cout << "CC";
		break;
	case 3:std::cout << "CCC";
		break;
	case 4:std::cout << "CD";
		break;
	}

	// xL 50 for Roman Numerals
	xL = x / 50;
	x = x % 50;

	switch (xL) {
	case 0:std::cout << "";
		break;
	case 1:std::cout << "L";
		break;
	}

	// xX 10 for Roman Numerals
	xX = x / 10;
	x = x % 10;

	switch (xX) {
	case 0:std::cout << "";
		break;
	case 1:std::cout << "X";
		break;
	case 2:std::cout << "XX";
		break;
	case 3:std::cout << "XXX";
		break;
	case 4:std::cout << "XL";
		break;
	}


	// xV 5 for Roman Numerals

	xV = x / 5;
	x = x % 5;

		switch (xV) {
		case 0:std::cout << "";
			break;
		case 1:std::cout << "V";
			break;
		}

	// xI 1's for roman Numerals

		xI = x;

		switch (xI) {
		case 0:std::cout << "";
			break;
		case 1:std::cout << "I";
			break;
		case 2:std::cout << "II";
			break;
		case 3:std::cout << "III";
			break;
		case 4:std::cout << "IV";
			break;
		}

}
