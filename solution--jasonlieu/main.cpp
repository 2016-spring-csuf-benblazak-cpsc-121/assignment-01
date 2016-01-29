/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Jason Lieu <jasonlieu@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to convert numbers into roman numerals
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void i(int&);
void v(int&);
void x(int&);
void l(int&);
void c(int&);
void d(int&);
void m(int&);
void run(int&);


int main()
{
	int a;
	char b;
	cout << "Please enter an integer: ";
	cin >> a;
	cout << "--> ";
	run(a);
	cout << endl<<endl;
	cout << "Would you like to convert another integer(Y / N)";
	cin >> b;
	while (b == 'Y' || b == 'y')
	{
		cout << "Please enter an integer: ";
		cin >> a;
		cout << "--> ";
		run(a);
		cout << endl <<endl<< "Would you like to convert another integer(Y / N)";
		cin >> b;
	}

	system("pause");

}
void run(int &a)
{
	m(a);
	d(a);
	c(a);
	l(a);
	x(a);
	v(a);
	i(a);
}

void i(int &a)
{
	if (a > 0)
	{
		cout << "I";
		a = a - 1;
		i(a);
	}
}
void v(int &a)
{
	if (a >= 4)
	{
		if (a < 5)
		{
			cout << "IV";
			a = a - 4;
			v(a);
		}
		else
		{
			cout << "V";
			a = a - 5;
			v(a);
		}
	}
}
void x(int &a)
{
	if (a >= 9)
	{
		if (a < 10)
		{
			cout << "IX";
			a = a - 9;
			x(a);
		}
		else
		{
			cout << "X";
			a = a - 10;
			x(a);
		}
	}
}
void l(int &a)
{
	if (a >= 40)
	{
		if (a < 50)
		{
			cout << "XL";
			a = a - 40;
			l(a);
		}
		else
		{
			cout << "L";
			a = a - 50;
			l(a);
		}
	}
}
void c(int &a)
{
	if (a >= 90)
	{
		if (a < 100)
		{
			cout << "XC";
			a = a - 90;
			c(a);
		}
		else
		{
			cout << "C";
			a = a - 100;
			c(a);
		}
	}
}
void d(int &a)
{
	
	if (a >= 400)
	{
		if (a<500)
		{
			cout << "CD";
			a = a - 400;
			d(a);
		}
		else
		{
			cout << "D";
			a = a - 500;
			d(a);
		}
	}
}
void m(int &a)
{
	if (a >= 900)
	{
		if (a < 1000)
		{
			cout << "CM";
			a = a - 900;
			m(a);
		}
		else
		{
			cout << "M";
			a = a - 1000;
			m(a);
		}
	}
}
