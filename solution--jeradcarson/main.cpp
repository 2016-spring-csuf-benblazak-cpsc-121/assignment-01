/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Jerad Carson and Jenna Martinez <jerad.carson@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program that converts numbers into roman numerals.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int number = 0;

/*Functions*/
void romanNumeral(int);

int main()
{
	char choice;

	cout << "Please enter an integer: ";
	cin >> number;
	romanNumeral(number);

	cout << "Would you like to convert another integer? (Y/N) ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		cout << "Please enter an integer: ";
		cin >> number;
		cout << endl;
		romanNumeral(number);
	}
	else if (choice == 'N' || choice == 'n') {
		cout << "Thank you for using our converter.";
	}

	else {
		cout << "Invalid input.";
		cin >> choice;
	}

	return 0;
}
/* Roman Numeral Conversion Function*/
void romanNumeral(int number)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	if (number >= 1000) {
		a = number / 1000;
		while (a >= 1) {
			cout << "M";
			number = number - 1000;
			a--;
		}
	}

	if (number >= 500 && number < 1000) {
		b = number / 500;
		while (b >= 1) {
			cout << "D";
			number = number - 500;
			b--;
		}
	}

	if (number >= 100 && number < 500) {
		c = number / 100;
		while (c >= 1) {
			cout << "C";
			number = number - 100;
			c--;
		}
	}

	if (number >= 50 && number < 100) {
		d = number / 50;
		while (d >= 1) {
			cout << "L";
			number = number - 50;
			d--;
		}
	}

	if (number >= 10 && number < 50) {
		e = number / 10;
		while (e >= 1) {
			cout << "X";
			number = number - 10;
			e--;
		}
	}

	if (number >= 5 && number < 10) {
		f = number / 5;
		while (f >= 1) {
			cout << "V";
			number = number - 5;
			f--;
		}
	}

	if (number >= 1 && number < 5) {
		g = number / 1;
		while (g >= 1) {
			cout << "I";
			number = number - 1;
			g--;
		}
	}
	cout << endl;
}

