/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Inah Block <iblock16@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A short interactive program that converts Arabic integers to Roman Numerals.
 */
 
 // Example program
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

string romanNumeral(int num);

int main()
{
    int num;
    char ans;
    
	do
	{
		cout << "Please enter an integer: ";
		cin >> num >> endl;
		
		cout << romanNumeral(num) << endl << endl;
    
		cout << "Would you like to convert another integer (Y/N)?" << endl;
		cin >> ans >> endl;
	} while (ans == 'Y' || ans == 'y');

	return 0;
} 

string romanNumeral(int num)
{
    const string numerals[] = {
        "M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
    };
    const int values[] = {
        1000, 900,  500, 400,  100, 90,   50,  40,   10,  9,    5,   4,    1,
    };

    if (num < 0 || num >= 4000)
        return "ERROR";

    string back = "";
    for (int i = 0; i < 13; i++) 
	{
        for (int j = 0; j <= num / values[i]; j++)
			back += numerals[i];
		num %= values[i];
    }

    return back;
}
