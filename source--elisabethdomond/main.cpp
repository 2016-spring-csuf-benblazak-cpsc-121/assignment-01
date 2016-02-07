/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Elisabeth Domond <elisabeth1797@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program to convert roman numerals with user interaction.
*/

#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string romanconvert(int integer);

int main()
{
	int integer;
	char decision;

	do {
		cout << "Please enter an integer: ";
		cin >> integer;
		cout << romanconvert(integer) << endl;

		cout << "Would you like to convert another number? (Y/N)"<< endl;
		cin >> decision;
	} while (decision == 'Y' || decision == 'y');
	return 0;
}

string romanconvert(int integer) {
	const string numerals[] = {
		"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
	};
	const int values[] = {
		1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1,
	};
	{
		if (integer < 0)
			cout << "Error: Number is too small!";
		if (integer >= 3000)
			cout << "Error: Number is too big!";
	}
	string ret = "";
	for (int x = 0; x < 13; x++) {
		for (int y = 0; y < integer / values[x]; y++)
			ret += numerals[x];
		integer %= values[x];	
	}
	return ret;
}

