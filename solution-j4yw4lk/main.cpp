/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Johnny Pierce <j4yw4lk@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to print change integers into roman numerals.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
char answer;

void run(int&);

// function header/title
int main() {			

	string roman;
	string x;
	string y;
	string n;
	int integer;
	int remainder;
	char z;

	answer='y';

	while (answer == 'Y' || answer == 'y'){
	cout << "Enter an integer: ";
	cin >> integer;

	// setting a range of integers
	if ((integer >= 4000) || (integer <= 0)) {
		cout << endl << "Invalid" << endl;
	}

	// entering valid integers
	else {

		// counting thousandths and assigning and using "/" doesnt round
		if (integer >= 1000) {
			remainder = (integer / 1000);

			for (int i = 0; i < remainder; i++) {
				roman += 'M';
			}
			// modifying the integer for triple digets
			integer %= 1000;
		}

		// counting hundredths and assigning Cs
		if (integer >= 100) {
			remainder = (integer / 100);

			if (remainder == 9) {
				roman += "CM";
			}
			else if (remainder >= 5) {				
				roman += 'D';

				for (int i = 0; i < remainder - 5; i++) {
					roman += 'C';
				}
			}
			else if (remainder == 4) {
				roman += "CD";
			}
			else if (remainder >= 1) {

				for (int i = 0; i < remainder; i++) {
					roman += 'C';
				}
			}
			// modifying the integer for double digets
			integer %= 100;							
		}
		if (integer >= 10) {
			remainder = (integer / 10);

			if (remainder == 9) {
				roman += "XC";
			}
			else if (remainder >= 5) {
				roman += 'L';

				for (int i = 0; i < remainder - 5; i++) {
					roman += 'X';
				}
			}
			else if (remainder == 4) {
				roman += "XL";
			}
			else if (remainder >= 1) {

				for (int i = 0; i < remainder; i++) {
					roman += 'X';
				}
			}
			// modifying the integer for single digets
			integer %= 10;

		}

		if (integer >= 1) {
			remainder = integer;

			if (remainder == 9) {
				roman += "IX";
			}

			else if (remainder >= 5) {
				roman += 'V';

				for (int i = 0; i < remainder - 5; i++) {
					roman += 'I';
				}
			}
			else if (remainder == 4) {
				roman += "IV";
			}
			else if (remainder >= 1) {

				for (int i = 0; i < remainder; i++) {
					roman += 'I';
				}
			}
		}

		cout << "Roman Numberal: " << roman << endl;

		// ask to run program again
		cout << "Would you like to convert another integer (Y/N)? ";
		cin >> answer;
	}
}

	if (answer == 'N' || answer == 'n')
	{

		std::cout << "Your program has ended ";

		system("pause");
		return 0;
	}


}
// inspired by: https://www.youtube.com/watch?v=1b-y4yUmDfw
