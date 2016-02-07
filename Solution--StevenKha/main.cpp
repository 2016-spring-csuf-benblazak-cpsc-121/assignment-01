/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu> Steven Kha <stevenvkha@gmail.com> Darren Vu <vuchampion@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string convert(int num);

int main()
{
	char userchoice;
	do
	{
		int num;
		char answer;
		cout << "Enter a numeral \n";
		cin >> num;
		cout << convert(num);
		cout << endl << "Would you like to convert another integer? Press N to quit." << endl;
		cin >> userchoice;
	} while (userchoice != 'n' && userchoice != 'N');

	return 0;
}

string convert(int num)
{


	const string roman[] = { "M",  "CM",  "D",  "CD",  "C", "XC",  "L", "XL", "X", "IX", "V", "IV", "I" };
	const int numbers[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4,  1 };

	string ret = "";

	if (num < 1 || num > 3999)
	{
		cout << "Error" << endl;
		exit(0);
	}

	for (int i = 0; i < 13; i++)
	{
		while (num >= numbers[i])
		{
			ret += roman[i];
			num -= numbers[i];
		}
	}

	return ret;

}
