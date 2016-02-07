/* ----------------------------------------------------------------------------
* Copyright & copy; 2016 Suchartee Kitisopakul <suchartee@csu.fullerton.edu>
* ------------------------------------------------------------------------- */

/*
* Class: CPSC121
* Project: Assignment 1
* Program description: A short program to convert Arabic numerals to Roman numerals.
* Last updated: Feb 2, 2016
* References: 
* http://www.cplusplus.com/reference/string/string/clear/
* http://en.cppreference.com/w/cpp/language/continue
* http://stackoverflow.com/questions/9138790/cant-use-modulus-on-doubles
*/


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//Function prototype
void convert(int &arabic, string &pos1, string &pos2, string &pos3, string &pos4);
int checkDataType();

int main()
{
	//Declarations
	string position1;
	string position2;
	string position3;
	string position4;
	int inputArabic;
	char answer = 'y';

	//Greeting message
	cout << "Welcome to Roman numeral converter." << endl
		 << "We will convert Arabic to Roman numerals for you." << endl << endl;

		//Checking valid input
		do {
			cout << "Please enter an integer: ";

			//Call checkDataType function
			inputArabic = checkDataType();

			//Validate the input range
			if (inputArabic >= 1 && inputArabic <= 3999)
			{
				//Call convert function
				convert(inputArabic, position1, position2, position3, position4);

				//Output result
				cout << "--> " << position1 << position2 << position3 << position4 << endl << endl;
				cout << "Would you like to convert another integer (Y/N)? ";
				cin >> answer;
				cout << endl;

				//Reinitialize every positions
				position1.clear();
				position2.clear();
				position3.clear();
				position4.clear();
				continue;
			}

			//Error message for input range
			cout << endl << "Your input is invalid!" << endl
				 << "The number you enter must be from 1 - 3999." << endl << endl;

		} while (answer == 'y' || answer == 'Y');

	return 0;
}

int checkDataType()
{
	//Declarations
	int inputArabic;
	double arabic;

	//Ask user to input
	cin >> arabic;

	//Validate datatype to not be a double
	while ((cin.fail()) || !(fmod(arabic, 1) == 0))
	{
		cin.clear();
		cin.ignore();

		//Error message for input datatype
		cout << endl << "Your input is invalid!" << endl
			<< "The number you enter must be an integer." << endl << endl;
		cout << "Please enter an integer: ";
		cin >> arabic;
	}

	//Double to int for returning the value back to the main()
	inputArabic = static_cast<int>(arabic);
	return inputArabic;
}


void convert(int &arabic, string &position1, string &position2, string &position3, string &position4)
{
	//Declarations
	const int THOUSAND = 1000;
	const int HUNDRED = 100;
	const int TEN = 10;
	const int ONE = 1;
	int divided_thousand, mod_thousand, divided_hundred, mod_hundred, divided_ten, mod_ten, divided_one;

	//Checking each position
	divided_thousand = arabic / THOUSAND;
	mod_thousand = arabic % THOUSAND;
	arabic = arabic - (divided_thousand * THOUSAND);
	divided_hundred = arabic / HUNDRED;
	mod_hundred = arabic % HUNDRED;
	arabic = arabic - (divided_hundred * HUNDRED);
	divided_ten = arabic / TEN;
	mod_ten = arabic % TEN;
	arabic = arabic - (divided_ten * TEN);
	divided_one = arabic / ONE;

	//Thousand
	if (divided_thousand > 0)
	{
		if (divided_thousand == 3)
		{
			position1 = "MMM";
		}
		if (divided_thousand == 2)
		{
			position1 = "MM";
		}
		if (divided_thousand == 1)
		{
			position1 = "M";
		}
	}

	//Hundred
	if (divided_hundred > 0)
	{
		if (divided_hundred == 9)
		{
			position2 = "CM";
		}
		if (divided_hundred == 8)
		{
			position2 = "DCCC";
		}
		if (divided_hundred == 7)
		{
			position2 = "DCC";
		}
		if (divided_hundred == 6)
		{
			position2 = "DC";
		}
		if (divided_hundred == 5)
		{
			position2 = "D";
		}
		if (divided_hundred == 4)
		{
			position2 = "CD";
		}
		if (divided_hundred == 3)
		{
			position2 = "CCC";
		}
		if (divided_hundred == 2)
		{
			position2 = "CC";
		}
		if (divided_hundred == 1)
		{
			position2 = "C";
		}
	}

	//Ten
	if (divided_ten > 0)
	{
		if (divided_ten == 9)
		{
			position3 = "XC";
		}
		if (divided_ten == 8)
		{
			position3 = "LXXX";
		}
		if (divided_ten == 7)
		{
			position3 = "LXX";
		}
		if (divided_ten == 6)
		{
			position3 = "LX";
		}
		if (divided_ten == 5)
		{
			position3 = "L";
		}
		if (divided_ten == 4)
		{
			position3 = "XL";
		}
		if (divided_ten == 3)
		{
			position3 = "XXX";
		}
		if (divided_ten == 2)
		{
			position3 = "XX";
		}
		if (divided_ten == 1)
		{
			position3 = "X";
		}
	}

	//One
	if (divided_one > 0)
	{
		if (divided_one == 9)
		{
			position4 = "IX";
		}
		if (divided_one == 8)
		{
			position4 = "VIII";
		}
		if (divided_one == 7)
		{
			position4 = "VII";
		}
		if (divided_one == 6)
		{
			position4 = "VI";
		}
		if (divided_one == 5)
		{
			position4 = "V";
		}
		if (divided_one == 4)
		{
			position4 = "IV";
		}
		if (divided_one == 3)
		{
			position4 = "III";
		}
		if (divided_one == 2)
		{
			position4 = "II";
		}
		if (divided_one == 1)
		{
			position4 = "I";
		}
	}
}
