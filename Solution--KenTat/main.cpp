/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ken Tat <ktat73@csu.fullerton.edu>, CPSC 121 Class
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program that converts a user inputted number into roman numerals.
*/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
string convert(int number);

int main()
{
//Variables
  int number;
  char repeat;
  string ret = "";
  cout << "Number to Roman Numeral Conversion" << endl;
 do
  {
  cout << "Please enter a number for conversion: ";
  cin >> number;
  //Requests input for conversion
  
  cout << "Converted number: " << convert(number) << endl;
  //Displays converted number into roman numerals
  cout << "Do you want to convert another number? Answer Y or N." << endl;
  //Either continues or ends the program
  cin >> repeat;
   
  }
 while (repeat == 'y' || repeat == 'Y');
	 return 0;
  
//Check for valid range of roman numerals
  if (number > 3999 || number < 1);
  cout << "Invalid number for conversion, between 1 - 3999" << endl;
  
  
  
 
  
return 0;  
  
}


//Function For Conversion
string convert(int number){

	//Arrays for conversation
    const string romannumeral [] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "VI", "I"};
    const int value [] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
   
    
  string ret = "";
   for (int i = 0; i < 13; i++)
	   //Increment for working down the array ->
  {
    for (int j = 0; j < number/value[i]; j++)
	     
	 ret += romannumeral[i];
	 number %= value[i];
	
      
  }
   return ret;
}
