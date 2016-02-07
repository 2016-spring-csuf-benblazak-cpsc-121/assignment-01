/* ----------------------------------------------------------------------------
* Copyright & copy; 2016 Armando Acosta <aacosta13@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program used to convert any integer between 0-4000 to Roman numerals.
*/



#include <iostream>
using std::cout;
using std::cin;

int arabicNo;
char response;
void convert(int x);

int main()
{
	do {
		cout << "Please enter an integer: \n";
		cin >> arabicNo;

		convert(x);

		cout << "Would you like to convert another integer? (Y/N)\n";
		cin >> response;
	} while (response == 'Y' || response == 'y');

	return 0;
}

void convert(int x)
{
	int i = (x / 1000);
	
	if (arabicNo >= 4000 || arabicNo <= 0)
	{
		cout << "Number cannot be converted to Roman numeral.\n";
		return;
	}
	
	for (int j = 0; j < i ; j++)
        cout << "M";
    x -= (1000 * i);

    i = x / 900;
		for (int i = 0; j < i; j++)
			cout << "CM";
	x -= (900 * i);

    i = x / 500;
		for (int j = 0; j < i; j++)
			cout << "D";
    x = x - (500 * i);
    
    i = x / 400;
		for (int j = 0; j < i; j++)
			cout << "CD";
    x = x - (400 * i);

    i = x / 100;
		for (int j = 0; j < i; j++)
			cout << "C";
    x = x - (100 * i);

    i = x / 90;
		for (int j = 0; j < i; j++)
			cout << "XC";
   x = x - (90 * i);

    i = x / 50;
		for (int j = 0; j < i; j++)
			cout << "L";
    x = x - (50 * i);

    i = x / 40;
		for (int j = 0; j < i; j++)
			cout << "XL";
    x = x - (40 * i);

    i = x / 10;
		for (int j = 0; j < i; j++)
			cout << "X";
    x = x - (10 * i);
    
    i = x / 9;
		for (int j = 0; j < i; j++)
			cout << "IX";
    x = x - (9 * i);

    i = x / 5;
		for (int j = 0; j < i; j++)
			cout << "V";
   x = x - (5 * i);

   i = x / 4;
		for (int j = 0; j < i; j++)
			cout << "IV";
   x = x - (4 * i);

   i = x / 1;
		for (int j = 0; j < i; j++)
			cout << "I";
	x = x - (1 * i);
}
