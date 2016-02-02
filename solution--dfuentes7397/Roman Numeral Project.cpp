// Copyright &copy; 2016 David Fuentes <dfuentes7397@fullerton.edu>
// Released under the [MIT License] (http://opensource.org/licenses/MIT)

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	double num;
	int roman, m, d, c, l, x, v, i, n;

	cout << "Enter a number and I will convert it to roman numerals: ";
	cin >> num;
	roman = (int)num;
	m = roman / 1000;
	d = ((roman % 1000) / 500);
	c = ((roman % 500) / 100);
	l = ((roman % 100 / 50));
	x = ((roman % 50) / 10);
	v = ((roman % 10) / 5);
	i = ((roman % 5) / 1);
	n = m + d + c + l + x + v + i;
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
	system("pause");
	return 0;
}
