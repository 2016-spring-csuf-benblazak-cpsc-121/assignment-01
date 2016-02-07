/* ----------------------------------------------------------------------------
  Copyright &copy; 2016 Katelyn Jaing <kjaing18@csu.fullerton.edu>
 ------------------------------------------------------------------------- */
/**
  Ask user to input an integer and print the integer as a Roman numeral. 
*/
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int num(char);
string convert1(int);
string convert2(int);
string convert3(int);
string convert4(int);

int main()
{
	string number;
	char ans = 'Y';
	
	while (toupper(ans) == 'Y')
	{
		string roman = "";
		cout << "Enter an integer: ";
		cin >> number;

		int size = number.size();
		if (size == 1)
		{
			int one = num(number[0]);

			roman += convert1(one);
		}
		else if (size == 2)
		{
			int one = num(number[0]);
			int two = num(number[1]);

			roman += convert2(one);
			roman += convert1(two);
		}
		else if (size == 3)
		{
			int one = num(number[0]);
			int two = num(number[1]);
			int three = num(number[2]);

			roman += convert3(one);
			roman += convert2(two);
			roman += convert1(three);
		}
		else if (size == 4)
		{
			int one = num(number[0]);
			int two = num(number[1]);
			int three = num(number[2]);
			int four = num(number[3]);

			roman += convert4(one);
			roman += convert3(two);
			roman += convert2(three);
			roman += convert1(four);
		}
		cout << roman << endl;
		cout << "Do you want to convert another integer (Y or N)? ";
		cin >> ans;
	}
	system("pause");
	return 0;
}

int num(char a)
{
	if (a == 48)
		return 0;
	else if (a == 49)
		return 1;
	else if (a == 50)
		return 2;
	else if (a == 51)
		return 3;
	else if (a == 52)
		return 4;
	else if (a == 53)
		return 5;
	else if (a == 54)
		return 6;
	else if (a == 55)
		return 7;
	else if (a == 56)
		return 8;
	else if (a == 57)
		return 9;
}

string convert1(int one)
{
	string roman = "";
	if (one != 0)
	{
		while (one < 4 && one > 0)
		{
			roman += "I";
			one--;
		}
		if (one == 4)
			roman += "IV";
		else if (one > 4 && one != 9)
		{
			roman += "V";
			while (one > 5)
			{
				roman += "I";
				one--;
			}
		}
		else if (one == 9)
			roman += "IX";
	}

	return roman;
}

string convert2(int two)
{
	string roman = "";
	if (two != 0)
	{
		while (two < 4 && two > 0)
		{
			roman += "X";
			two--;
		}
		if (two == 4)
			roman += "XL";
		else if (two > 4 && two != 9)
		{
			roman += "L";
			while (two > 5)
			{
				roman += "X";
				two--;
			}
		}
		else if (two == 9)
			roman += "XC";
	}
	return roman;
}

string convert3(int three)
{
	string roman = "";
	if (three != 0)
	{
		while (three < 4 && three > 0)
		{
			roman += "C";
			three--;
		}
		if (three == 4)
			roman += "XD";
		else if (three > 4 && three != 9)
		{
			roman += "D";
			while (three > 5)
			{
				roman += "C";
				three--;
			}
		}
		else if (three == 9)
			roman += "XM";
	}
	return roman;
}

string convert4(int four)
{
	string roman = "";
	while (four > 0)
	{
		roman += "M";
		four--;
	}
	return roman;
}
