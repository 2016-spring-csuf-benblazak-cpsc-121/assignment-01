/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ian McQueen <ianmcqueen@live.ca>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/*
A program to convert numbers into roman numerals
*/

#include <iostream> 
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


string thousands(int num)
{
	

		
		string ret_thousands = "";
		for (int count = 0; count < num / 1000; count++)
		{
			ret_thousands += "M";
		}
		return ret_thousands;
	


}

string hundreds(int num)
{
	string ret_hundreds = "";

	if ((num / 100) % 10 <= 0)
		return "";

	else
	{
		int letters = (num / 100) % 10;

		if (letters == 5)
			return "D";
		else if (letters == 9)
			return "CM";

		else if (letters > 5)
		{
			for (int count = 0; count < letters - 5; count++)
			{
				ret_hundreds = "D";
				
				for (int count = 0; count < letters - 5; count++)
				ret_hundreds += "C";
			}
			return ret_hundreds;
		}
		else if (letters == 4)
		{
			return "CD";

		}
		else 
		{
			for (int count = 0; count < letters; count++)
			{
				ret_hundreds += "C";
			}
			return ret_hundreds;

		}

	
	}




}

string tens(int num)
{
	string ret_tens = "";

	int letters = (num / 10) % 10;

	if (letters == 5)
		return "L";

	else if (letters == 9)
		return "XC";

	else if (letters == 4)
		return "XL";

	else if (letters < 5)
	{
		for (int count = 0; count < letters; count++)
			ret_tens += "X";
		return ret_tens;

	}
	else
	{
		ret_tens = "L";
		for (int count = 0; count < letters - 5; count++)
			ret_tens += "X";
		return ret_tens;
	}
}


string ones(int num)
{	
	string ret_ones = "";
	int letters = num % 10;

	if (letters == 5)
		return "V";

	else if (letters == 9)
		return "IX";

	else if (letters == 4)
		return "IV";
	else if (letters < 5)
	{
		for (int count = 0; count < letters; count++)
			ret_ones += "I";
		return ret_ones;
	}
	else
	{
		ret_ones = "V";
		for (int count = 5; count < letters; count++)
			ret_ones += "I";
		return ret_ones;


	}

}




