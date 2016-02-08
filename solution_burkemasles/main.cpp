/* assignment1_burkemasles.cpp : Defines the entry point for the console application.
* Copyright Burke Masles 2016 <burkemasles>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* A program that intakes an integar and outputs the integar into Roman Numerals and
* has the ability to repeat the process
*/

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void conversion(int num);
int main()
{
	int num;
	char cont;
	while (true)
	{
		cout << "Please enter an integar";
		cin >> num;
		cout << endl << "--> ";
		conversion(num);
		cout << endl << "Would you like to input another number? ";
		cin >> cont;
		if (cont == 'n' || cont == 'N') break;
	}
    return 0;
}
void conversion(int num)
{
	int Hremainder, Tremainder;
	Hremainder = num % 10;
	Tremainder = num % 100;
	if (num <= 10)
	{
		switch (num) {
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
		}
	}
	else if (num <= 100)
	{
		if (num < 20) cout << "X";
		else if (num < 30) cout << "XX";
		else if (num < 40) cout << "XXX";
		else if (num < 50) cout << "XL";
		else if (num < 60) cout << "L";
		else if (num < 70) cout << "LX";
		else if (num < 80) cout << "LXX";
		else if (num < 90) cout << "LXXX";
		else if (num < 100) cout << "XC";
		else cout << "C";

		switch (Hremainder) {
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
		}
	}
	else if (num <= 1000)
	{
		if (num < 200) cout << "C";
		else if (num < 300) cout << "CC";
		else if (num < 400) cout << "CCC";
		else if (num < 500) cout << "CD";
		else if (num < 600) cout << "D";
		else if (num < 700) cout << "DC";
		else if (num < 800) cout << "DCC";
		else if (num < 900) cout << "DCCC";
		else if (num < 1000) cout << "CM";
		else cout << "M";

		if (Tremainder < 20) cout << "X";
		else if (Tremainder < 30) cout << "XX";
		else if (Tremainder < 40) cout << "XXX";
		else if (Tremainder < 50) cout << "XL";
		else if (Tremainder < 60) cout << "L";
		else if (Tremainder < 70) cout << "LX";
		else if (Tremainder < 80) cout << "LXX";
		else if (Tremainder < 90) cout << "LXXX";
		else if (Tremainder < 100) cout << "XC";
		else cout << "C";

		switch (Hremainder) {
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
		}
	}
	else if (num <= 2000)
	{
		cout << "M";
		if (num < 1200) cout << "C";
		else if (num < 1300) cout << "CC";
		else if (num < 1400) cout << "CCC";
		else if (num < 1500) cout << "CD";
		else if (num < 1600) cout << "D";
		else if (num < 1700) cout << "DC";
		else if (num < 1800) cout << "DCC";
		else if (num < 1900) cout << "DCCC";
		else if (num < 2000) cout << "CM";
		else cout << "M";

		if (Tremainder < 20) cout << "X";
		else if (Tremainder < 30) cout << "XX";
		else if (Tremainder < 40) cout << "XXX";
		else if (Tremainder < 50) cout << "XL";
		else if (Tremainder < 60) cout << "L";
		else if (Tremainder < 70) cout << "LX";
		else if (Tremainder < 80) cout << "LXX";
		else if (Tremainder < 90) cout << "LXXX";
		else if (Tremainder < 100) cout << "XC";
		else cout << "C";

		switch (Hremainder) {
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
		}
	}
	else if (num <= 3000)
	{
		cout << "MM";
		if (num < 2200) cout << "C";
		else if (num < 2300) cout << "CC";
		else if (num < 2400) cout << "CCC";
		else if (num < 2500) cout << "CD";
		else if (num < 2600) cout << "D";
		else if (num < 2700) cout << "DC";
		else if (num < 2800) cout << "DCC";
		else if (num < 2900) cout << "DCCC";
		else if (num < 3000) cout << "CM";
		else cout << "M";

		if (Tremainder < 20) cout << "X";
		else if (Tremainder < 30) cout << "XX";
		else if (Tremainder < 40) cout << "XXX";
		else if (Tremainder < 50) cout << "XL";
		else if (Tremainder < 60) cout << "L";
		else if (Tremainder < 70) cout << "LX";
		else if (Tremainder < 80) cout << "LXX";
		else if (Tremainder < 90) cout << "LXXX";
		else if (Tremainder < 100) cout << "XC";
		else cout << "C";

		switch (Hremainder) {
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
		}
	}
	else if (num < 4000)
	{
		cout << "MMM";
		if (num < 3200) cout << "C";
		else if (num < 3300) cout << "CC";
		else if (num < 3400) cout << "CCC";
		else if (num < 3500) cout << "CD";
		else if (num < 3600) cout << "D";
		else if (num < 3700) cout << "DC";
		else if (num < 3800) cout << "DCC";
		else if (num < 3900) cout << "DCCC";
		else if (num < 4000) cout << "CM";

		if (Tremainder < 20) cout << "X";
		else if (Tremainder < 30) cout << "XX";
		else if (Tremainder < 40) cout << "XXX";
		else if (Tremainder < 50) cout << "XL";
		else if (Tremainder < 60) cout << "L";
		else if (Tremainder < 70) cout << "LX";
		else if (Tremainder < 80) cout << "LXX";
		else if (Tremainder < 90) cout << "LXXX";
		else if (Tremainder < 100) cout << "XC";
		else cout << "C";

		switch (Hremainder) {
		case 1: cout << "I";
			break;
		case 2: cout << "II";
			break;
		case 3: cout << "III";
			break;
		case 4: cout << "IV";
			break;
		case 5: cout << "V";
			break;
		case 6: cout << "VI";
			break;
		case 7: cout << "VII";
			break;
		case 8: cout << "VIII";
			break;
		case 9: cout << "IX";
			break;
		case 10: cout << "X";
			break;
		}
	}
	else
	{
		cout << "The number you entered cannot be printed on the screen in its";
		cout << " Roman Numeral format";
	}

}
// Roman Numerals - http://literacy.kent.edu/Minigrants/Cinci/roman
