/* ----------------------------------------------------------------------------
* Copyright &copy; 2016   Andrew Chen    chianchen@csu.fullerton.edu
				   2016   William Bui    wqbui3@csu.fullerton.edu

* Released under the[MIT License](http://opensource.org/licenses/MIT)
*------------------------------------------------------------------------ - */

/**
* Description: This program converts numbers into Roman Numerals

Originally written by Andrew Chen
Minor modifications by William Bui
*/

#include <iostream>
#include <string>

std::string RomanNumeral(int);

int main()
{
	std::string roman_number;
	int wrong = 0,
		input,
		result;
	char choice;

	do
	{
		std::cout << "Enter an integer between 1 and 3999: ";
		std::cin >> input;

		// Note to self: so long as the while-condition holds true, 
		//				 the While-loop will continue execution
		while (input < 1 || input > 3999)
		{
			wrong++;
			if (wrong < 10)
				std::cout << "Invalid input. Please enter a number between 1 and 3999:  ";
			else if (wrong < 15)
				std::cout << "Be a good human, and enter a number between 1 and 3999:  ";
			else if (wrong < 20)
			{
				std::cout << "What are you doing? Roman numerals can't get bigger than 3999!" << std::endl;
				std::cout << "Or smaller than 1. Try again: ";
			}
			std::cin >> input;
		}

		// Calling the function RomanNumeral 
		roman_number = RomanNumeral(input);

		std::cout << "The Roman Numeral is: " << roman_number << std::endl;
		std::cout << "Would you like to convert another number? (y/n)";
		std::cin >> choice;

	} while (choice == 'Y' || choice == 'y');

	return 0;
}

std::string RomanNumeral(int input)
{
	std::string ones[] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
		tens[] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
		hundreds[] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
		thousands[] = { "", "M", "MM", "MMM", };

	std::string result;
	int index;
	// Converting the number in thousands place
	index = input / 1000;
	result += thousands[index];
	input %= 1000;

	// Converting the number in hundreds place
	index = input / 100;
	result += hundreds[index];
	input %= 100;

	// Converting the number in tens place
	index = input / 10;
	result += tens[index];
	input %= 10;

	// Converting the number in ones place
	result += ones[input];

	return result;
}
