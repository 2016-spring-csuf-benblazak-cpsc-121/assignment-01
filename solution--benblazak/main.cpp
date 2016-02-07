/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A short interactive program that converts Arabic integers to Roman Numerals.
 */


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

// ----------------------------------------------------------------------------

string int_to_roman(int n);

// ----------------------------------------------------------------------------

int main() {
    int  number;  // the user's integer
    char choice;  // the user's choice (to continue or not)

    do {
        cout << "Please enter an integer: ";
        cin >> number;

        cout << "--> " << int_to_roman(number) << "\n\n";

        cout << "Would you like to convert another integer (Y/N)? ";
        cin >> choice;

        cout << "\n";
    } while (cin && choice != 'n' && choice != 'N');

    return 0;  // success
}

// ----------------------------------------------------------------------------

/**
 * Notes:
 * - We limit this function to converting numbers in the range [1,3999].  In
 *   actual Roman numerals, higher numbers can be represented (a bar placed
 *   above a (string of) numerals multiplies its value by 1000).
 */
string int_to_roman(int i) {
    const string numerals[] = {
        "M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
    };
    const int values[] = {
        1000, 900,  500, 400,  100, 90,   50,  40,   10,  9,    5,   4,    1,
    };

    if (i < 0)
        return "ERROR: too small";
    if (i >= 4000)
        return "ERROR: too large";

    string ret = "";

    for (int a = 0; a < sizeof(values)/sizeof(int); a++) {
        while (i >= values[a]) {
            ret += numerals[a];
            i -= values[a];
        }
    }

    return ret;
}

