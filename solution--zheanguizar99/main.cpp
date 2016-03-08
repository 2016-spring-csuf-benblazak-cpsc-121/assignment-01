/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Zheantezsa Guizar <zheanguizar99@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Converting numbers to Roman Numerals.
*/

#include <iostream>
#include <string>
 
using std::cout;
using std::cin;
using std::char;
using std::string;

string convert(int num);

int main(){
  
  int num;
  char choice;
  
  do{
    cout << "Please enter an integer. ";
    cin >> num;
    cout << convert(num) << endl;
    
    cout << "Would you like to enter another integer? (Y/N)";
    cin >> choice;
    cout << endl;
  } while(choice == 'Y' || choice == 'y')
  
  return 0;
  
}

string convert(int num){
  
  const string numeral [] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "VI", "I"};
  const int value [] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  
  string ret = "";
  
  for(int i = 0; i < 13; i++){
    for(int j = 0; j < num/values[i]; j++)
      ret += numeral[i];
      num %= value[i];
  }
  
  return ret;
  
} 
