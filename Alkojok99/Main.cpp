/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ahmed Alkojok <alkojok@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A program that converts integers to Roman Numerals
*/
#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::string;
using std::endl;


string convert(int number);


int main(){

  int number;
  char answer;

  do{
    cout << "Please enter an integer: ";
    cin >> number;
    cout << "--> ";
    cout << convert(number) << endl;

    cout << "Would you like to convert another integer? (Y/N)";
    cin >> answer;
    cout << endl;
  }

  while(answer == 'Y' || answer == 'y');

  return 0;

}

string convert(int number){

  const string roman [] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "VI", "I"};
  const int value [] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

  string ret = "";

  for(int i = 0; i < 13; i++){
    for(int j = 0; j < number/value[i]; j++)
      ret += roman[i];
      number %= value[i];
  }

  return ret;

}
