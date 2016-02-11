/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Breanna Tomenis <bltomenis@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to print integers into Roman Numerals.
*/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	char repeat = 'y';
	while (repeat == 'y' || repeat == 'Y')
	{
		cout << "Please enter an integer:\n ";
		int a;
		cin >> a;
		cout << "Your number converted into roman numerals is: \n";

		while (a >= 1000) 
		{
			cout << "M";
			a = a - 1000;
		}
		while (a == 900)
		{
			cout << "CM";
			a = a - 900;
		}
		while (a >= 500)
		{
			cout << "D";
			a = a - 500;
		}
		while (a == 400)
		{
			cout << "CD";
			a = a - 400;
		}
		while (a >= 100)
		{
			cout << "C";
			a = a - 100;
		}
		while (a >= 90 && a <= 99)
		{
			cout << "XC";
			a = a - 90;
		}
		while (a >= 50)
		{
			cout << "L";
			a = a - 50;
		}
		while (a == 40)
		{
			cout << "XL";
			a = a - 40;
		}
		while (a >= 10)
		{
			cout << "X";
			a = a - 10;
		}
		while (a == 9)
		{
			cout << "IX";
			a = a - 9;
		}
		while (a >= 5) 
		{
			cout << "V";
			a = a - 5;
		}
		while (a == 4)
		{
			cout << "IV";
			a = a - 4;
		}
		while (a >= 1)
		{
			cout << "I";
			a = a - 1;
		}
		cout << "\nWould you to convert another number (y/n)?: \n ";
		cin >> repeat;
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
