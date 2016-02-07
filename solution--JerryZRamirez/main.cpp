/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Jerry Ramirez <jerryzramirez@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program to convert inputted integers from the user into a Roman Numeral.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

string int_to_roman(int n);

int main() {
	int number; //user's inputted integer
	char answer; //user's choice to continue conversions or to end program

	do {
		cout << "Please enter an integer: "; //User inputs integer
		cin >> number;
		cout << "----> " << int_to_roman(number) << endl << endl; 
		//Roman Numeral conversion outputted

		cout << "Would you like to convert another integer? (Y/N)?";
		cin >> answer;
		cout << endl;

	} while (cin && answer != 'n' && answer != 'N');
	//entering either N will end loop
	return 0; //approved
}

//Function is limited with a range of [1, 3999]
//If integer is higher than 3999 or less than 1 it will output an ERROR message

string int_to_roman(int i) {
	const string numerals[] = {
		"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
	};
	const int values[] = {
		1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1,
	};
	//ERROR warnings for unavailable integers
	if (i < 0)
		return "ERROR: Integer too small";
	if(i>=4000)
	return "ERROR: Integer too large";

	string ret = "";

	for (int a = 0; a < sizeof(values) / sizeof(int); a++) {
		while (i >= values[a]) {
			ret += numerals[a];
			i -= values[a];
		}
	}
	return ret;
}
