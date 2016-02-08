/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 David Fuentes <dfuentes7397@csu.fullerton.edu
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to convert integers into Roman Numerals.
*Sources used
*http://stackoverflow.com/questions/28750576/do-while-to-ask-user-to-repeat-entire-int-main-programme
*http://www.dummies.com/how-to/content/working-with-functions-in-c.html
*http://www.tutorialspoint.com/cplusplus/cpp_for_loop.htm
*/
#include <iostream>
using namespace std;
void romNum()
{
	double num;
	cin >> num;
	int roman = (int)num;
	int m = roman / 1000;
	int d = ((roman % 1000) / 500);
	int c = ((roman % 500) / 100);
	int l = ((roman % 100 / 50));
	int x = ((roman % 50) / 10);
	int v = ((roman % 10) / 5);
	int i = ((roman % 5) / 1);
	int n = m + d + c + l + x + v + i;
	while (n > 0)
	{
		{
			for (m; m > 0; m--)
				cout << "M";
		}
		{
			for (d; d > 0; d--)
				cout << "D";
		}
		{
			for (c; c > 0; c--)
				cout << "C";
		}
		{
			for (l; l > 0; l--)
				cout << "L";
		}
		{
			for (x; x > 0; x--)
				cout << "X";
		}
		{
			for (v; v > 0; v--)
				cout << "V";
		}
		{
			for (i; i > 0; i--)
				cout << "I";
		}
		n--;
		cout << endl;
	}
}
int main()
{
	for (;;)
	{
		cout << "Enter an integer and this program will convert it to roman numerals: ";
		romNum();
		cout << "Would you like to convert another integer? [y/n] (Please enter in lowercase letters)" << endl;
		char answer;
		cin >> answer;
		if (answer != 'y')
			break;
	}
	system("pause");
	return 0;
}
