/* ----------------------------------------------------------------------------
Copyright &copy; 2016 Anthony Rodriguez, Edgar Banos, and Oscar Rocha.
Released under the [MIT License] (http://opensource.org/licenses/MIT)
---------------------------------------------------------------------------- */

//Program that takes in an integer and converts it into Roman numerals.

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string conversion(int &);

int main()
{
	char choice;
	int num;

	do
	{
		cout << "Enter an integer: ";
		cin >> num;

		cout << conversion(num) << endl;

		cout << "Would you like to convert another integer (Y/N)? ";
		cin >> choice;
	} while (choice != 'n' && choice != 'N');

	system("pause");
	return 0;
}

string conversion(int & a)
{
	int numbers[13] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	string symbols[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
	int x;
	string output;

	for (int i = 0; i < 13; i++)
	{
		x = a / numbers[i];

		for (int j = 0; j < x; j++)
			output += symbols[i];

		a %= numbers[i];
	}

	return output;
}
