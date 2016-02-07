// Copyright &copy; 2016  Justin Huang <justin_huang@csu.fullerton.edu> 
// 02-06-2016
// CPSC 121 
// Number Converter 
// This program will allow user to convert numbers into Roman numerals
#include <iostream>
// Function
void Converter(int Rnum);
int main()
{
	int num;
	char ans;
	do
	{
		std::cout << " Please enter an integer (1-4999) \n";
		std::cin >> num;
		// roman numerals can only display 1-4998
		if (num <= 0 || num >= 4999)
		{
			std::cout << "Invalid input! \n";
			std::cout << " Please enter a valid integer \n";
			std::cin >> num;
		}
		
		std::cout << " Roman Numeral:";
		Converter(num);
		
		std::cout << "Would you like to convert another number?(Y/N): \n";
		std::cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	std::cout << "Thank you, goodbye! \n";
	return 0;
}
void Converter(int Rnum)
{
	int M, D, C, L, X, IX, V, IV, I, n;
	M = Rnum / 1000;
	Rnum = Rnum % 1000;
	D = Rnum / 500;
	Rnum = Rnum % 500;
	C = Rnum / 100;
	Rnum = Rnum % 100;
	L = Rnum / 50;
	Rnum = Rnum % 50;
	X = Rnum / 10;
	Rnum = Rnum % 10;
	IX = Rnum / 9;
	Rnum = Rnum % 9;
	V = Rnum / 5;
	Rnum = Rnum % 5;
	IV = Rnum / 4;
	Rnum = Rnum % 4;
	I = Rnum;

	for (n = 1; n <= M; n++)
	{
		std::cout << "M";
	}
	for (n = 1; n <= D; n++)
	{
		std::cout << "D";
	}
	for (n = 1; n <= C; n++)
	{
		std::cout << "C";
	}
	for (n = 1; n <= L; n++)
	{
		std::cout << "L";
	}
	for (n = 1; n <= X; n++)
	{
		std::cout << "X";
	}
	for (n = 1; n <= IX; n++)
	{
		std::cout << "IX";
	}
	for (n = 1; n <= V; n++)
	{
		std::cout << "V";
	}
	for (n = 1; n <= IV; n++)
	{
		std::cout << "IV";
	}
	for (n = 1; n <= I; n++)
	{
		std::cout << "I";
	}
	std::cout << "\n";
}
