// Roman Numeral Assignment
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std:string;

string num_to_roman(int x);

int main ()
{
  int input;
  char answer;
do
{
  cout << "Please enter an integer." <<endl;
  cin >> input;
  cout << num_to_roman(input) << endl;
  cout << "Would you like to convert another number? (Y/N)?" << endl;

} while (cin && answer != 'n' && answer != 'N');
return0;

string num_to_roman (int i) {
  const string numerals[] = {
  "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
  const int values [] = {
    1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    
  if (i<0)
    return "Error: Integer must be greater than 0.";
    if (i>4000)
    return "Error: Integer must be less than 4000.";
    string ret =
    "";
    for (int a=0; a < sizeof(values) / sizeof(int); a++) {
      while (i >= values[a]) {
      ret += numerals[a];
      i -= values[a];
      }
  }
  return ret;
}
