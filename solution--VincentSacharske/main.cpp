/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Vincent Sacharske <vsacharske97@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

// A program that converts integers to roman numerals.

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string convert(int integer); // Function Prototype

int main()
{
	int integer; // User inputted integer
	char letter; // User inputted letter

	do // Asks user to enter data
	{
    	cout << "Please enter an integer: ";
    	cin >> integer;
    	
    	cout << convert(integer) << endl;
    	
    	cout << "Convert another integer (Y/N) ";
		cin >> letter;
		cout << endl;
	}
	while (letter == 'Y' || letter == 'y');


	return 0;
}

string convert(int integer)
{
	const string romNum[] = {"M", "CM", "D", "CD", "C", "XC", "L",
		"XL", "X", "IX", "V", "IV", "I"};
		
	const int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9,
		5, 4, 1};
		
	
	string ret = "   ";

	int a = 0;
	
	while (a < 13)
	{
		a++;
		while (integer >= numbers[a])
		{
			integer -= numbers[a];
			ret += romNum[a];
		}
	}

	return ret;	
}
