/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ian McQueen <ianmcqueen@live.ca>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/*
 A program to convert numbers into roman numerals
*/

#include <iostream> 
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string thousands(int num);
string hundreds(int num);
string tens(int num);
string ones(int num);



int main()
{
	char repeat = 'y';

	while (repeat == 'y' || repeat == 'Y')
	{

		int num;
		cout << "Enter an integer to convert into a roman numeral: ";
		cin >> num;



		if (num <= 3999)
		{
			
			
			string roman = "";

			roman += thousands(num);
			roman += hundreds(num);
			roman += tens(num);
			roman += ones(num);
			string numeral = roman;


			cout << roman << endl;

			cout << "would you like to run this again? (y/n)" << endl;
			cin >> repeat;
		}
		else
		{
			cout << "Please enter a number less than 4000\n" << endl;
			repeat = 'y';

		}

	}

}
