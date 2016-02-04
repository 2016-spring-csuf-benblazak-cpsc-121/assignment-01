/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Nathan Blush <nb970@cu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/*
* A program where the user enters a number and the number is converted into a roman numeral
*/
#include <iostream>
#include <string>
/*using std::cout;
using std::cin;
using std::endl;
using std::string;*/
using namespace std;
void conversion(int num);
int main()
{
	int num;
	char choice;
	do
	{
		cout << "Please enter an integer." << endl;
		cin >> num;
		if (num < 0)
			cout << "Too small" << endl;
		if (num > 4000)
			cout << "Too large" << endl;
		if (num > 0 && num <= 4000)
			conversion(num);
		cout << "Would you like to convert another number? (y/n)" << endl;
		cin >> choice;
	} while (toupper(choice) == 'Y');
	system("pause");
}
void conversion(int num)
{
	string roman;
	
	for (int i = 0; i < num / 1000; i++)
		roman += "M";
	num %= 1000;
	if (num > 900)
	{
		roman += "CM";
		num -= 900;
	}
	else
	{
		for (int i = 0; i < num / 500; i++)
			roman += "D";
		num %= 500;
	}
	if (num > 400)
	{
		roman += "CD";
		num -= 400;
	}
	for (int i = 0; i < num / 100; i++)
		roman += "C";
	num %= 100;
	if (num > 90)
	{
		roman += "XC";
		num -= 90;
	}
	else if (num > 50)
	{
		roman += "L";
		num -= 50;
	}
	else if (num > 40)
	{
		roman += "XL";
		num -= 40;
	}
	for (int i = 0; i < num / 10; i++)
		roman += "X";
	num %= 10;
	if (num == 9)
		roman += "IX";
	else if (num >= 5)
	{
		roman += "V";
		num -= 5;
	}
	if (num == 4)
		roman += "IV";
	else if (num <= 3)
		for (int i = 1; i <= num; i++)
			roman += "I";
	cout << roman << endl;
}
