/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
* A program to convert Arabic numbers to Roman Numerals
* Contains 2 functions, 'main' and 'convert'
* 'main' runs the program, 'convert' changes numbers from Arabic to Roman
* --------------------------------------------------------------------------*/

#include<iostream>
#include<string>
#include<cmath>

int m, cm, d, cd, c, xc, l, xl, x, ix, v, i;
//m = 1000, cm = 900, d = 500, cd = 400, c = 100, xc = 90, l = 50, xl = 40, x = 10, ix = 9, v = 5, i = 1

void convert(int again); //separate function to convert numbers

int main()
{	
	int input; //the entered number
	char again; //the choice to either run again, or exit the program

	std::cout << "Conversion From Arabic Numbers to Roman Numerals \n";
	
	do
	{
		std::cout << "\nEnter the Arabic Number you wish to convert: \n";
		std::cin >> input; //enter a number

		if (input <= 0) //if entered number is 0 or less, error message
		{
			std::cout << "Too small. Enter a number between 1 and 3999.	\n";
		}

		if (input > 3999) //if entered number is 4000 or more, error message
		{
			std::cout << "Too large. Enter a number between 1 and 3999.	\n";
		}

		if (input > 0 && input < 4000) //if input is between 1 and 3999, move to convert function
		{
			std::cout << "\nConverted to Roman Numeral: \n";
			convert(input); //runs 'convert' function
		}

		std::cout << "\n\nWould you like to convert another integer? (Y/N): \n";
		std::cin >> again;
	}

	while ( again == 'y' || again == 'Y'); //if input is y or Y, run again

	if ( again == 'n' || again == 'N') //if input is n or N, end program
	{	
		std::cout << "\n\n";
	}

	system("pause");
	return 0;
}

void convert(int input)
{
	for ( m = 1000; input >= m; input -= 1000) //M = 1000
	{
		std::cout << "M";
	}

	for ( cm = 900; input >= cm; input -= 900) //CM = 900
	{
		std::cout << "CM";
	}
	
	for ( d = 500; input >= d; input -= 500) //D = 500
	{
		std::cout << "D";
	}
	
	for ( cd = 400; input >= cd; input -= 400) //CD = 400
	{
		std::cout << "CD";
	}

	for ( c = 100; input >= c; input -= 100) //C == 100
	{
		std::cout << "C";
	}

	for ( xc = 90; input >= xc; input -= 90) //XC = 90
	{
		std::cout << "XC";
	}

	for ( l = 50; input >= l; input -= 50) //L = 50
	{
		std::cout << "L";
	}

	for ( xl = 40; input >= xl; input -= 40) //XL = 40
	{
		std::cout << "XL";
	}

	for ( x = 10; input >= x; input -= 10) //X = 10
	{
		std::cout << "X";
	}

	for ( ix = 9; input >= ix; input -= 9) //X = 9
	{
		std::cout << "IX";
	}

	for ( v = 5; input >= v; input -= 5) //V = 5
	{
		std::cout << "V";
	}

	if ( input >= 4) //IV = 4
	{
		std::cout << "IV";
	}

	else
	{
		for( i = 1; input >= i; input -= i) //Numbers 1 through 3 are I, II, and III respectively
			{
				std::cout << "I";
			}
	}
}
