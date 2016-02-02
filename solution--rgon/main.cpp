
/*A program to convert numbers into Roman numerals/*
#include <iostream>
#include <string>
std:: string conversion(int number);
int main()
{
	std::string roman_num;
	int user_num;
	char restart;
	//prompt
	do{
		std::cout << "Enter any integer: ";
		std::cin >> user_num;
		roman_num = conversion(user_num);
		std::cout << roman_num << "\n";
		std::cout << "Would you like to convert a different integer? (Y/N)\n";
		std::cin>> restart;
	}while ((restart == 'y' || restart =='Y') && (restart!='n' || restart !='N')); 
	system("pause");
	return 0;
}
std:: string conversion( int number )
{
    std::string roman;
	int nM;
	int nC;
	int nD;
	int nX;
	int nV;
	int nL;
	int nI;
	
	//thousands
	nM = number / 1000;

	for (int total = 1; total <= nM;total++)
	{
		roman+="m";
	}
	//remainder
	number %= 1000;
	//500s and remainder
	nD = number / 500;
	number %= 500;
	//500s
	for (int total = 1; total <= nD; total++)
	{
		roman+="d";
	}
	//100s and remainder
	nC = number / 100;
	number %= 100;
	//100s
	for (int total=1; total <= nC; total++)
	{
		if (nC == 4)
		{
			roman+="cd";
			break;
		}
		else
		{
			roman+="c";
		}
	}
	//50s and remainder
	nL = number / 50;
	number %= 50;
	//50s
	for (int total=1; total <= nL; total++)
	{
		roman+="l";
	}
	//10s and remainder
	nX = number / 10;
	number %= 10;
	//10s
	for (int total = 1; total <= nX; total++)
	{
		roman+="x";
	}
	//5s and remainder
	nV = number / 5;
	number %= 5;
	//display 5s
	for (int total = 1; total <= nV; total++)
	{
		roman+="v";
	}
	//1s
	nI = number;
	for (int total = 1; total <= nI; total++)
	{
		if (nI == 4)
		{
			roman+="iv";
			break;
		}
		else
		{
			roman+="i";
		}
	}
	return roman;
}
