//
//  main.cpp
//  Roman Numeral Converter
//
//  Created by Leticia Osuna on 2/3/16.
//  Copyright © 2016 Leticia Osuna. All rights reserved.
//
//  Program that converts numbers to Roman Numerals

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Prototype for function that will perform algorithm
string convert(int num);

int main()
{
	int num;
	string choice;

	do
	{
		//Ask user for a number to convert into a Roman Numeral
		cout << "What number would you like to convert into a Roman Numeral? ";
		cin >> num;

		//Convert number into a Roman Numeral
		cout << num << " = " << convert(num) << endl << endl;

		//Ask user for another conversion
		cout << "Would you like to make another coversion? (Y/N): ";
		cin >> choice;
		cout << endl << endl;
	} while (choice == "Y" || choice == "y");

	return 0;
}
