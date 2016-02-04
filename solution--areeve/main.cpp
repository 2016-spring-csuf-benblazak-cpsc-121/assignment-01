/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program that converts integers into roman numerals and outputs it.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

//Function prototypes
string intToRoman(int);

int main()
{	
	//Declarations
	int n;			//user inputed integer for conversion
	char user;		//user inputed character for exiting program

	do{
		cout << "Please enter an integer: ";
		cin >> n;
		
		cout << intToRoman(n) << '\n';

		cout << "Would you like to convert another integer (Y/N)? ";
		cin >> user;
		cout << '\n';
	} while(user != 'n' && user != 'N');
	
}

string intToRoman(int num)
{
	string romanNum[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", 
		"IX", "V", "IV", "I" };

	int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 
		4, 1};

	string ret = "-->";

	for (int i = 0; i < 13; i++)	//starting at 1000 work down to 1
	{
		while(num >= values[i])
		{
			ret += romanNum[i];		//add roman numeral to string ret
			num -= values[i];		//reduce user num by value of roman num
		}
	}

	ret += '\n';

	return ret;
}
