/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Jacob Yablonski <jyablonski@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program that converts integers into roman numberals.
*/

#include <iostream>
#include <string>

std::string roman;
int integer;
int num;
char answer;

int romanfunction()
{
	if ((integer >= 4000) || (integer <= 0))
	{
		std::cout << "Invalid Integer" << std::endl;
	}
	//3286
	else
	{
		if (integer >= 1000)
		{
			num = (integer / 1000);

			for (int i = 0; i < num; i++)
			{
				roman += 'M';

			}
			integer %= 1000;
			// care ^^^
		}
		// 286
		if (integer >= 100)
		{
			num = (integer / 100);

			if (num == 9)
			{
				roman += "CM";
			}
			else if (num >= 5)
			{
				roman += 'D';

				for (int i = 0; i < num - 5; i++)
				{
					roman += 'C';
				}
			}
			else if (num == 4)
			{
				roman += "CD";
			}
			else if (num >= 1)
			{
				for (int i = 0; i < num; i++)
				{
					roman += 'C';
				}
			}
			integer %= 100;
		}

		// 86
		if (integer >= 10)
		{
			num = (integer / 10);

			if (num == 9)
			{
				roman += "XC";
			}
			else if (num >= 5)
			{
				roman += 'L';

				for (int i = 0; i < num - 5; i++)
				{
					roman += 'X';
				}
			}
			else if (num == 4)
			{
				roman += "XL";
			}
			else if (num >= 1)
			{
				for (int i = 0; i < num; i++)
				{
					roman += 'X';
				}
			}
			integer %= 10;
			// 6

		}

		if (integer >= 1)
		{
			num = integer;

			if (num == 9)
			{
				roman += "IX";
			}
			else if (num >= 5)
			{
				roman += "V";

				for (int i = 0; i < num - 5; i++)
				{
					roman += 'I';
				}
			}
			else if (num == 4)
			{
				roman += "IV";
			}
			else if (num >= 1)
			{
				for (int i = 0; i < num; i++)
				{
					roman += 'I';
				}
			}
		}

	}
	return 0;
}

int main()
{
	while (true)
	{
		std::cout << "Please enter an integer: " << std::endl;
		std::cin >> integer;
	    romanfunction();
		std::cout << "--> " << roman << std::endl;
		roman.clear();
		std::cout << "Would you like to convert another integer (Y/N)?" << std::endl;
		std::cin >> answer;
			if (answer == 'n' || answer == 'N')
				break;
	}

}

// https://www.youtube.com/watch?v=1b-y4yUmDfw&ab_channel=programminghelporg 
