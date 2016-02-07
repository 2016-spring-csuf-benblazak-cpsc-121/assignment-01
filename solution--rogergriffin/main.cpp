/*Copyright 2016: Roger Griffin <roger.griffin@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)

This program to takes an integer number and converts it into roman numerals, then displays
the roman numerals in standard output. */


#include <iostream>
#include <cctype> //for tolower to make response lower if it isn't
#include<string>
using std::cin;
using std::cout;
using std::tolower;
using std::endl;
using std::string;
void numeralConversion(int);
char inputValidater();

int main()
{
	/*Possible dowhile loop to force through first round then change user input to determine whether
	or not to continue.*/
	int response = 0;
	char repeat = 'y';

	do
	{
		cout << "Please enter an integer number to be converted to \nroman numerals(1-3999(do not include any commas)): \n";
		cin >> response;
		if (response >= 4000 || response <= 0)
		{
			cin.clear();
			cout << "The number you have chosen is out of bounds, please try again. \n";
		}
		numeralConversion(response);
		repeat = inputValidater();
	} while (repeat == 'y');
	cout << "Ending Program. Press enter to end the program. \n";
	cin.ignore();
	cin.get();
	return 0;

}


void numeralConversion(int convert)
{
	// convert the actual interger to roman numerals in a string and output???
	int thousands;
	int hundreds;
	int tens;
	int ones;
	thousands = convert / 1000;
	//cout << thousands << endl; 
	hundreds = (convert % 1000) / 100;
	//cout << hundreds << endl;
	tens = (convert % 100) / 10;
	//cout << tens << endl;
	ones = convert % 10;
	//cout << ones << endl;
	
	string thousand[4] = { "", "M", "MM","MMM" };
	string hundred[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	string ten[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	string one[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
	cout << thousand[thousands] << hundred[hundreds] << ten[tens] << one[ones] << endl;
}

char inputValidater() //Simple recursion function to make input be either y or n
{
	char catcher = 'a';
	char repeat = 'a';
	cout << "Would you like to convert another number? Please respond y or n: \n";
	cin >> catcher;
	catcher = tolower(catcher);
	if (catcher == 'y' || catcher == 'n')
		return catcher;
	else
	{
		cout << "Please input a y or an n to chose whether to repeat the function or not. \n";
		catcher = inputValidater();
		return catcher;
	}


}
