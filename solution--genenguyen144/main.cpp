#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//a string that will convert your number
string convert(int i);

int main()
{
	while (true)
	{
		// create a "char" that will exit your compile
		char n;
		// interger that will be use to put in your number
		int i;
		cout << "enter a number " << endl;
		cin >> i;
		cout << convert(i) << endl;
		//ask the user if they want to play again
		cout << "would you like to enter another number " << endl;
		cin >> n;
		//the "char" can be lower case or capital case
		if (n == 'n' || n == 'N')
		{
			break;
		}
	}
	return 0;

}
//create a fnc to display the roman numeral
string convert(int i) {
    // astring that display the roman numeral
	const string romnum[] = 
	{ 
		"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
	};

	// a interger that take in your numbers
    const int values[] = 
	{
		1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1,
	};

	//number must be between 1 and 4000
    if (i < 0)
	return "ERROR: the number is too small";
    if (i >= 4000)
    return "ERROR: the number is too large";

	//returing your value number
    string retval = "";

	// for statement that convert your value to roman numbers
    for (int a = 0; a < sizeof(values)/sizeof(int); a++) 
	{
        while (i >= values[a]) 
		{
            retval += romnum[a];
            i -= values[a];
        }
    }

    return retval;
}


