/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Shang Gao <sgao96@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program to convert integers into roman numerals and to print them.
*/
#include <iostream>
#include <string>

int main()
{

	char what;

	do
	{
		int num;
		std::cout << "Please enter an integer: ";
		std::cin >> num;

		//checks the thousandths digit
		int thousand = num / 1000;

		while (thousand > 0)
		{
			std::cout << "M";
			thousand--;
		}
		num %= 1000;

		//checks the hundredth digit
		int hundred = num / 100;

		if (hundred < 5 && hundred > 0)
		{
			while (hundred > 0)
			{
				if (hundred == 4)
				{
					std::cout << "CD";
					hundred -= 4;
				}
				else
				{
					std::cout << "C";
					hundred--;
				}
			}
		}
		else if (hundred >= 5 && hundred > 0)
		{
			while (hundred > 0)
			{
				if (hundred == 9)
				{
					std::cout << "CM";
					hundred -= 9;
				}
				else if (hundred == 5)
				{
					std::cout << "D";
					hundred -= 5;
				}
				else if (hundred == 6)
				{
					std::cout << "DC";
					hundred -= 6;
				}
				else if (hundred == 7)
				{
					std::cout << "DCC";
					hundred -= 7;
				}
				else if (hundred == 8)
				{
					std::cout << "DCCC";
					hundred -= 8;
				}
				else
				{
					std::cout << "C";
					hundred--;
				}
			}
		}
		num %= 100;

		//checks the tenth digit
		int ten = num / 10;

		if (ten < 5 && ten > 0)
		{
			while (ten > 0)
			{
				if (ten == 4)
				{
					std::cout << "XL";
					ten -= 4;
				}
				else
				{
					std::cout << "X";
					ten--;
				}
			}
		}
		else if (ten >= 5 && ten > 0)
		{
			while (ten > 0)
			{
				if (ten == 9)
				{
					std::cout << "XC";
					ten -= 9;
				}
				else if (ten == 5)
				{
					std::cout << "L";
					ten -= 5;
				}
				else if (ten == 6)
				{
					std::cout << "LX";
					ten -= 6;
				}
				else if (ten == 7)
				{
					std::cout << "LXX";
					ten -= 7;
				}
				else if (ten == 8)
				{
					std::cout << "LXXX";
					ten -= 8;
				}
				else
				{
					std::cout << "X";
					ten--;
				}
			}
		}
		num %= 10;

		//checks the ones digit
		if (num == 1)
			std::cout << "I" << std::endl;
		else if (num == 2)
			std::cout << "II" << std::endl;
		else if (num == 3)
			std::cout << "III" << std::endl;
		else if (num == 4)
			std::cout << "IV" << std::endl;
		else if (num == 5)
			std::cout << "V" << std::endl;
		else if (num == 6)
			std::cout << "VI" << std::endl;
		else if (num == 7)
			std::cout << "VII" << std::endl;
		else if (num == 8)
			std::cout << "VIII" << std::endl;
		else if (num == 9)
			std::cout << "IX" << std::endl;
		else if (num == 0)
			std::cout << std::endl;

		std::cout << "Would you like to convert another integer (Y/N)?";
		std::cin >> what;

	} while (what != 'N' && what != 'n');
}
