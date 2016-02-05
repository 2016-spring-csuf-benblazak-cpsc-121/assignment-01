/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program to convert integers to roman numerals.
*/

#include <iostream>
#include <cmath>
#include <string>

void Convert(int x);

int main()
{
	int x;
	char choice;
	do
	{

		std::cout << "Please enter an integer: ";
		std::cin >> x;

		Convert(x);

		std::cin.get();
		std::cin.get();

		std::cout << "Would you like to convert another integer (Y/N)? ";
		std::cin >> choice;


	} while ((choice != 'N') && (choice != 'n'));

	return 0;
}

void Convert(int x)
{

	//Variables
	int nM, nCM, nD, nC, nXC, nL, nX, nIX, nV, nI;

	nM = x / 1000;

	switch (nM)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "M"; break;
	case 2: std::cout << "MM"; break;
	case 3: std::cout << "MMM"; break;
	}

	x = x % 1000;

	nCM = x / 900;

	switch (nCM)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "CM"; break;
	}

	x = x % 900;


	nD = x / 500;

	switch (nD)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "D"; break;
	}

	x = x % 500;

	nC = x / 100;

	switch (nC)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "C"; break;
	case 2: std::cout << "CC"; break;
	case 3: std::cout << "CCC"; break;
	case 4: std::cout << "CD"; break;
	}

	x = x % 100;

	nXC = x / 90;

	switch (nXC)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "XC"; break;
	}

	x = x % 90;

	nL = x / 50;

	switch (nL)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "L"; break;
	}

	x = x % 50;

	nX = x / 10;

	switch (nX)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "X"; break;
	case 2: std::cout << "XX"; break;
	case 3: std::cout << "XXX"; break;
	case 4: std::cout << "XL"; break;
	}

	x = x % 10;

	nIX = x / 9;

	switch (nIX)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "IX"; break;
	}

	x = x % 9;

	nV = x / 5;

	switch (nV)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "V"; break;
	}

	x = x % 5;

	nI = x;

	switch (nI)
	{
	case 0: std::cout << ""; break;
	case 1: std::cout << "I"; break;
	case 2: std::cout << "II"; break;
	case 3: std::cout << "III"; break;
	case 4: std::cout << "IV"; break;
	}
}
