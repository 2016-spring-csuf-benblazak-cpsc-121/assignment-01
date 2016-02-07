// Email To: bblazak@csu.fullerton.edu
// Program Purpose: Print a roman numeral baised on an intenger inputed by a user
// Programmer: Joseph Jacob M. Dungca
// Instructor: Ben Blazak
// Date Last Updated: February 6, 2016

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Protype
void romanNumeral(int);

// Main Function
int main()
{
	// Variables
	int number;
	string repProgram = "yes";

	// Opening Statement
	cout << "This program will change a user inputed integer in to a roman numeral." << endl;

	// Using jump statements for looping
	wrongNumber:
	cout << "\nPlease enter an integer: ";
	cin >> number;

	// Verify integer input
	if (number <= 0)
	{
		cout << "You have to input a positive integer.\n" << endl;
		goto wrongNumber;
	}
	else if (number >= 4000)
	{
		cout << "The integer has to be less then 4000.\n" << endl;
		goto wrongNumber;
	}
	else // Convert integer in to roman numeral
		romanNumeral(number);

	// Ask user to run program again
	wrongAnswer:
	cout << "Would you like to run the program again?: ";
	cin >> repProgram;
	if (repProgram[0] == 'y' || repProgram[0] == 'Y')
		goto wrongNumber;
	else if (repProgram[0] == 'n' || repProgram[0] == 'N')
		goto endProgram;
	else
	{
		cout << "Please enter either yes or no.\n" << endl;
		goto wrongAnswer;
	}

	// Closing Statements
	endProgram:
	cout << "\nThank you for using this program.\nGood Bye." << char(2) << endl;
	return 0;
}

void romanNumeral(int num)
{
	// Parallel arrays
	int romBase[13] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	string romChar[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	// Variable to display
	string romanNumber = "";

	// Loop to create Roman Number
	for (int i = 0; i < 13; ++i)
	{
		int j = 0;
		while (num / romBase[i] > 0 && j < 3)
		{
			++j;
			num -= romBase[i];
			romanNumber += romChar[i];
		}
	}

	// Display Roman Number
	cout << "Roman Numeral: " << romanNumber << endl << endl;

}
