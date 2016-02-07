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

int main()
{

  int number;
  char roman;
  char repeat;
  cout << "Number to Roman Numeral Conversion" << endl;
  while(true)
  {
  cout << "Please enter a number for conversion: ";
  cin >> number;
  cout << endl;
  cout << "Converted number: " << convert(number) << endl;
  cout << "Do you want to convert another number? Answer Y or N." << endl;
  cin >> repeat;
  
  for (int i = 0, i < 13, i++)
  {
    while (number >= value[i])
    {
      ret += romannumeral[i]
      roman = romannumeral[i]
    }
  }
  string convert(int number)
  {
    const string romannumeral [] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "VI", "I"};
    const int value [] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ret = "";
    
  }
  
  if (number > 3999 || number < 1)
  return "Invalid number for conversion, between 1 - 3999" << endl;
  
  if (repeat == 'n' || repeat == 'N')
  break;
  else if (repeat == 'y' || repeat == 'Y')
  return 0;
  }
  return 0;
}

