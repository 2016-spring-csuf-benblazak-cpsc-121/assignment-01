#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

string conversion (int)
const string numerals[];
const int values[];

int main()
{

  int integer;
  char answer;
  do (
  cout << "Enter an integer: ";
  cin >> integer;
  cout << "conversion(number) << endl << endl;
  
  cout << "Would you like to convert another integer? ";
  cin >> answer;
  cout << endl;
  ) while (answer == 'Y' || answer == 'y');
  return 0;
 }
  
  string conversion (int integer)
  {
    const string numerals [] =
  {
      "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
  };
    const int values[] =
  {
      1000, 900, 500, 400, 100, 90, 50, 40, 10, 5, 4, 1
  };
    string ret = "";
    for (int a=0; a < 13; a++)
    {
      for (int b=0; b <= integer/values[a]; b++)
        ret += numerals[a];
      integer %= values[a];
    }
  return ret;
  }
