/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Duy Do <duy.ado@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to converts standard input decimal into Roman Numeral
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
void conversion(int n);

void one(int n);
void ten(int n);
void hundred(int n);
void thousand(int n);
int main()
{
	char c;
	do {
		int n;
		std::cout << "Please enter an integer: ";
		std::cin >> n;
		conversion(n);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Would you like to convert another integer (Y/N)?";
		std::cin >> c;
		std::cout << std::endl;
	} while ((c != 'n' || c != 'N') && (c == 'Y' || c == 'y'));

}
void one(int n) {
	if (n == 1) {
		cout << "I";
	}
	if (n == 2) {
		cout << "II";
	}
	if (n == 3) {
		cout << "III";
	}
	if (n == 4) {
		cout << "IV";
	}
	if (n == 5) {
		cout << "V";
	}
	if (n == 6) {
		cout << "VI";
	}
	if (n == 7) {
		cout << "VII";
	}
	if (n == 8) {
		cout << "VIII";
	}
	if (n == 9) {
		cout << "IX";
	}

}
void ten(int n) {
	int FirstDigit;
	if (n / 10 == 1) {
		cout << "X";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 2) {
		cout << "XX";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 3) {
		cout << "XXX";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 4) {
		cout << "XL";
		one(FirstDigit = n % 10);
	}

	if (n / 10 == 5) {
		cout << "L";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 6) {
		cout << "LX";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 7) {
		cout << "LXX";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 8) {
		cout << "LXXX";
		one(FirstDigit = n % 10);
	}
	if (n / 10 == 9) {
		cout << "XC";
		one(FirstDigit = n % 10);
	}
}

void hundred(int n) {
	int FirstDigit;
	int SecondDigit;
	if (n / 100 == 1) {
		cout << "C";
		if (n >= 101 && n <= 109) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 100);
	}

	if (n / 100 == 2) {
		cout << "CC";
		if (n >= 201 && n <= 209) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 200);
	}
	if (n / 100 == 3) {
		cout << "CCC";
		if (n >= 301 && n <= 309) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 300);
	}
	if (n / 100 == 4) {
		cout << "CD";
		if (n >= 401 && n <= 409) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 400);
	}

	if (n / 100 == 5) {
		cout << "D";
		if (n >= 501 && n <= 509) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 500);
	}
	if (n / 100 == 6) {
		cout << "DC";
		if (n >= 601 && n <= 609) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 600);
	}
	if (n / 100 == 7) {
		cout << "DCC";
		if (n >= 701 && n <= 709) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 700);
	}
	if (n / 100 == 8) {
		cout << "DCCC";
		if (n >= 801 && n <= 809) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 800);
	}
	if (n / 100 == 9) {
		cout << "CM";
		if (n >= 901 && n <= 909) {
			one(FirstDigit = n % 10);
		}
		ten(SecondDigit = n - 900);
	}
}
void thousand(int n) {
	int FirstDigit;
	int SecondDigit;
	int ThirdDigit;
	if (n / 1000 == 1) {
		cout << "M";
		if (n >= 1001 && n <= 1009) {
			one(FirstDigit = n % 1000);
		}
		else if ((n % 100 >= 10 && n % 100 <= 99) && (n >= 1010 && n <= 1099)) {
			ten(SecondDigit = n % 100);
		}

		hundred(ThirdDigit = n - 1000);

	}

	if (n / 1000 == 2) {
		cout << "MM";
		if (n >= 2001 && n <= 2009) {
			one(FirstDigit = n % 2000);
		}
		else if ((n % 100 >= 10 && n % 100 <= 99) && (n >= 2010 && n <= 2099)) {
			ten(SecondDigit = n % 100);
		}
		else {
			hundred(ThirdDigit = n - 2000);
		}

	}
	if (n / 1000 == 3) {
		cout << "MMM";
		if (n >= 3001 && n <= 3009) {
			one(FirstDigit = n % 3000);
		}
		if ((n % 100 >= 10 && n % 100 <= 99) && (n >= 3010 && n <= 3099)) {
			ten(SecondDigit = n % 100);
		}
		else {
			hundred(ThirdDigit = n - 3000);
		}
	}
	if (n / 1000 == 4) {
		cout << "MMMM";
		if (n >= 4001 && n <= 4009) {
			one(FirstDigit = n % 1000);
		}
		if ((n % 100 >= 10 && n % 100 <= 99) && (n >= 4010 && n <= 4099)) {
			ten(SecondDigit = n % 100);
		}
		else {
			hundred(ThirdDigit = n - 4000);
		}
	}
}
void conversion(int n) {
	if (n < 10 && n>0) {
		one(n);
	}
	else if (n >= 10 && n <= 99) {
		ten(n);
	}
	else if (n >= 100 && n <= 999) {
		hundred(n);
	}
	else if (n >= 1000 && n <= 4999) {
		thousand(n);
	}
	else {
		cout << "Invalid integer, Integer must be between 0 and 5000";

	}
}
