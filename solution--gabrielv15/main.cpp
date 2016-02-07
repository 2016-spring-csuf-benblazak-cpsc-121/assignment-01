/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Gabriel Varela <gabrielv@csu.fullerton.edu>
* ------------------------------------------------------------------------- */

/**
* A short program to print interger values as Roman Numerals.
*/

#include <iostream>
void roman_numeral(int value){
	int division = 0;
	using std::cout;
	using std::cin;
	using std::endl;
	if (value < 1 || value > 3999) {
		cout << "Please enter a value between 1 and 3999";
		value = value % value;
	}
	if (value > 1000) {
		division = value / 1000;
		for (int i = 1; i <= division; i++)
			cout << "M";
		value = value % 1000;
	}
	if (value >= 900) {
		division = value / 900;
		for (int i = 1; i <= division; i++)
			cout << "CM";
		value = value % 900;
	}
	if (value >= 500) {
		division = (value - 500) / 100;
		cout << "D";
		for (int i = 1; i <= division; i++)
			cout << "C";
		value = value % 100;
	}
	if (value >= 400) {
		cout << "CD";
		value = value % 400;
	}
	if (value >= 100) {
		division = value / 100;
		for (int i = 1; i <= division; i++)
			cout << "C";
		value = value % 100;
	}
	if (value >= 90) {
		cout << "XC";
		value = value % 90;
	}
	if (value >= 50) {
		cout << "L";
		division = (value - 50) / 10;
		for (int i = 1; i <= division; i++)
			cout << "X";
		value = value % 10;
	}
	if (value >= 40) {
		cout << "XL";
		value = value % 40;
	}
	if (value >= 10) {
		division = value / 10;
		for (int i = 1; i <= division; i++)
			cout << "X";
		value = value % 10;
	}
	if (value >= 9) {
		cout << "IX";
		value = value % 9;
	}
	if (value >= 5) {
		cout << "V";
		division = (value - 5) / 1;
		for (int i = 1; i <= division; i++)
			cout << "I";
		value = value % 1;
	}
	if (value >= 4) {
		cout << "IV";
		value = value % value;
	}
	if (value >= 1) {
		for (int i = 1; i <= value; i++)
			cout << "I";
	}
}
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	int value;
	char loop;
	do {
		cout << "Please enter a value" << endl;
		cin >> value;
		roman_numeral(value);
		cout << endl << "Would you like to enter another value? Y/N" << endl;
		cin >> loop;
	} while (loop == 'y'|| loop == 'Y');
	return 0;

}

