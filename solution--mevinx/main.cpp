/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Mevin Chen, Gyromee Hatcher, James Liu, Meng Shen Kuan, Beren Kiraz <mevin.chen@csu.fullerton.edu>
*
* ------------------------------------------------------------------------- */

/**
* A program to change numbers inputted from the user into roman numerals.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Void Function
string RomanConversion(int x)
{
	string result = "";
	if (x <= 0 || x >= 4000)
		return "Invalid Number. Please try again";
	
		while (x >= 1000)
		{
			result += "M"; 
			x -= 1000;
		}
		while (x >= 900)
		{
			result += "CM";
			x -= 900;
		}

		while (x >= 500)
		{
			result += "D";
			x -= 500;
		}
		while (x >= 400)
		{
			result += "CD";
			x -= 400;
		}
		while (x >= 100)
		{
			result += "C";
			x -= 100;
		}
		while (x >= 50)
		{
			result += "L";
			x -= 50;
		}
		while (x >= 40)
		{
			result += "XL";
			x -= 40;
		}
		while (x >= 10)
		{
			result += "X";
			x -= 10;
		}
		while (x >= 9)
		{
			result += "IX";
			x -= 9;
		}
		while (x >= 5)
		{
			result += "V";
			x -= 5;
		}
		while (x >= 4)
		{
			result += "IV";
			x -= 4;
		}
		while (x > 1)
		{
			result += "I";
			x -= 1;
		}
		return result;
}

int main()
{
	int number;
	char answer;
	do
	{
		cout << "Please enter an integer : " << endl;
		cin >> number;
		RomanConversion(number);  // call the function
		cout << RomanConversion(number) << endl;
		cout << "Would you like to try again? (Y/N)" << endl;
		cin >> answer;
	} while (answer == 'y' || answer == 'Y');
		return 0;
		
}
