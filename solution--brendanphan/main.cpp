/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Brendan Phan <brendanphan1@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Convert integer to romal numeral
*/

#include <iostream>
#include <string>

void convert(int x);

int main()
{
	int x;
	std::string again;
	while (again != "n" || "N")
	{
		std::cout << "Please enter an integer: ";
		std::cin >> x;
		convert(x);
		std::cout << std::endl << std::endl;
		std::cout << "Would you like to convert another integer (Y/N)? ";
		std::cin >> again;
		std::cout << std::endl;
		if (again == "n" || again == "N")
		{
			return 0;
		}
	}
}
void convert(int x)
{
	std::cout << "--> ";
	while (x >= 1000)
	{
		std::cout << "M";
		x -= 1000;
	}
	while (x >= 400)
	{
		std::cout << "CD";
		x -= 400;
	}
	while (x >= 100)
	{
		std::cout << "C";
		x -= 100;
	}
	while (x >= 90)
	{
		std::cout << "XC";
		x -= 90;
	}
	while (x >= 50)
	{
		std::cout << "L";
		x -= 50;
	}
	while (x >= 10)
	{
		std::cout << "X";
		x -= 10;
	}
	while (x >= 9)
	{
		std::cout << "IX";
		x -= 9;
	}
	while (x>=5)
	{
		std::cout << "V";
		x -= 5;
	}
	if (x == 1)
	{
		std::cout << "I";
	}
	if (x == 2)
	{
		std::cout << "II";
	}
	if (x == 3)
	{
		std::cout << "III";
	}
	if (x == 4)
	{
		std::cout << "IV";
	}
}
