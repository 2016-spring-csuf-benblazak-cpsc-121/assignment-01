// /* ----------------------------------------------------------------------------
// * Copyright &copy; 2016 Alex Wallingford <alexwallingford007@fullerton.edu>
// *------------------------------------------------------------------------ - */

/**
* Roman Numeral Conversion Program
*/
//

#include "stdafx.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string conversion(int x);

int main()
{
	int factor;
	char answer='Y';

	do {
		cout << "Please enter an integer: ";
		cin >> factor;
		if (factor > 3999)
		{
			cout << "Error: Please enter another integer smaller than 4000 and greater than 0. ";
			cin >> factor;
		}
		cout << conversion(factor);
		cout << endl;
		cout << "Would you like to enter another? ";
		cin >> answer;

	} while (answer != 'N' && answer != 'n');

	return 0;

}

string conversion(int factor)
{
	const string numerals[] =
	{
		"M","CM","D", "CD", "C","XC","L","XL","X","IX","V","IV","I"
	};
	const int values[] =
	{
		1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
	};
	string ret = "";
	int jo;
	for (jo = 0; jo < sizeof(values) / sizeof(int); jo++)
	{
		while (factor >= values[jo])
		{
			ret += numerals[jo];
			factor -= values[jo];
		}
	}


	return ret;
}
