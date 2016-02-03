//Programmer: Charles Bucher
//Program: To display the roman numerals of an user inputted integer.

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

//Create roman numeral function prototype
string fRomanNumeral(int i); //takes in an integer and returns a string

int main()
{
	//Declare variables
	int input;
	char cChoice;

	do
	{
	
	//Get input from user
	cout <<"Please enter an integer between 1 and 3999.\n";
	cin >> input;
	

	//Display the output from the function after passing in the user entered integer
	cout << fRomanNumeral(input)<<std::endl;
	
	//Ask if they want to do it again. This is the exit from the do-while loop
	cout << "Do you want to enter another integer? (Y/N)\n";
	cin >> cChoice;
	
	//Check
	} while (cChoice == 'y' || cChoice == 'Y');

	return 0;
}

//Function itself.
string fRomanNumeral(int i)
{	
	//Declare variables - one for each place holder of the number inputed
	int iOne, iTen, iHun, iTho;
	string strOut;

	//Determine the thousands, hundreds, tens, and ones place of the integer given
	iTho = (i - (i % 1000)) / 1000;
	iHun = i - (iTho * 1000);
	iHun = (iHun - (iHun % 100)) / 100;
	iTen = i - (iTho * 1000) - (iHun * 100);
	iTen = (iTen - (iTen % 10)) / 10;
	iOne = i - (iTho * 1000) - (iHun * 100) - (iTen * 10);
	iOne = (iOne - (iOne % 1));

	//Depending on what the tens place is, add those respective Roman Numeral''' 
	//characters to the end of the string.
	if (iTho == 1) { strOut += "M"; }
	else if (iTho == 2) { strOut += "MM"; }
	else if (iTho == 3) { strOut += "MMM"; }

	//Depending on what the tens place is, add those respective Roman Numeral''' 
	//characters to the end of the string.
	if (iHun == 1) { strOut += "C"; }
	else if (iHun == 2) { strOut += "CC"; }
	else if (iHun == 3) { strOut += "CCC"; }
	else if (iHun == 4) { strOut += "CD"; }
	else if (iHun == 5) { strOut += "D"; }
	else if (iHun == 6) { strOut += "DC"; }
	else if (iHun == 7) { strOut += "DCC"; }
	else if (iHun == 8) { strOut += "DCCC"; }
	else if (iHun == 9) { strOut += "DM"; }

	//Depending on what the tens place is, add those respective Roman Numeral''' 
	//characters to the end of the string.
	if (iTen == 1) { strOut += "X"; }
	else if (iTen == 2) { strOut += "XX"; }
	else if (iTen == 3) { strOut += "XXX"; }
	else if (iTen == 4) { strOut += "XL"; }
	else if (iTen == 5) { strOut += "L"; }
	else if (iTen == 6) { strOut += "LX"; }
	else if (iTen == 7) { strOut += "LXX"; }
	else if (iTen == 8) { strOut += "LXXX"; }
	else if (iTen == 9) { strOut += "XC"; }

	//Depending on what the ones place is, add those respective Roman Numeral '''
	//....characters to the end of the string.
	if (iOne == 1) { strOut += "I"; }
	else if (iOne == 2) { strOut += "II"; }
	else if (iOne == 3) { strOut += "III"; }
	else if (iOne == 4) { strOut += "IV"; }
	else if (iOne == 5) { strOut += "V"; }
	else if (iOne == 6) { strOut += "VI"; }
	else if (iOne == 7) { strOut += "VII"; }
	else if (iOne == 8) { strOut += "VIII"; }
	else if (iOne == 9) { strOut += "IX"; }
	
	//Return the finished string.
	return strOut;
}
