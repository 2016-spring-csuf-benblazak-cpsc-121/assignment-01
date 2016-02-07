#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


string roman(int n);


int main() {
	int  a;  
	char choice; 

	do {
		cout << "Enter an integer: ";
		cin >> a;
		cout << a << endl;

		cout << "Would you like to convert another integer (Y/N)? ";
		cin >> choice;
	} while (cin && choice != 'n' && choice != 'N');

	return 0; 
}

string roman(int i) {
	 string RomanNumerals[] = {
		"M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I",
	};
	 int values[] = {
		1000, 900,  500, 400,  100, 90,   50,  40,   10,  9,    5,   4,    1,
	};

	if (i < 0)
		return "NUmbers can not be smaller than 0";
	if (i >= 4000)
		return "Can not be bigger than 4000, roman numerals can not be repeated more than 4 times";

	string ret = "";

	for (int a = 0; a < sizeof(values) / sizeof(int); a++) {
		while (i >= values[a]) {
			ret += numerals[a];
			i -= values[a];
		}
	}

	return ret;
}
