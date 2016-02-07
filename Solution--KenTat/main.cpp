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

  int number;
  
  char repeat;
  string ret = "";
  cout << "Number to Roman Numeral Conversion" << endl;
 do
  {
  cout << "Please enter a number for conversion: ";
  cin >> number;
  
  
  cout << "Converted number: " << convert(number) << endl;
  cout << "Do you want to convert another number? Answer Y or N." << endl;
  cin >> repeat;
   
  }
 while (repeat == 'y' || repeat == 'Y');
	 return 0;
  
  if (number > 3999 || number < 1);
  cout << "Invalid number for conversion, between 1 - 3999" << endl;
  
  
  
 
  
return 0;  
  
}

string convert(int number){
    const string romannumeral [] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "VI", "I"};
    const int value [] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
   
    
  string ret = "";
   for(int i = 0; i < 13; i++)
  {
    for(int j = 0; j < number/value[i]; j++)
	{
      ret += romannumeral[i];
      number %= value[i];
	}
    
  
  }
   return ret;
}
