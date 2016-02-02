/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alex Chuoy <alexchuoy@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
  I used the following website to test the code.
  http://www.cpp.sh/
  I referenced this website for information on Roman numerals.
  //http://romannumerals.babuo.com/roman-numerals-1-5000
* This program will convert Arabic Numerals into Roman Numerals.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void AtoR (int);

int main ()
{
  char y;
  int x;
  
  do                         
  {
    cout << "Please enter an interger. (1-3999)" << endl;   
    cin >> x;                   /*The max number that can be represented  
                                without special notation is 3,999. */      
    while(x < 1 || x > 3999)
    {
      cout << "Invalid number. Enter a number between 1 and 3999."
      cin >> x;
    }  
    
    AtoR(x);
    
    cout << "Would you like to convert another interger? Y or N." << endl;
    cin >> y;
    
    while (y != 'Y' && y != 'y' && y != 'N' && y != 'n')
    {
      cout << "Invalid answer. Please enter 'Y' or 'N'." << endl;
      cin >> y;
    }
  }
  while (y == 'Y' || y == 'y');
  
  return 0;
}  

void AtoR (int x)    /* Roman numerals use 7 letters, I(1),V(5),X(10),L(50)                  
{                       C(100),D(500),M(1000). */                     
  cout << "The Roman numeral for " << x << " is ";     
  
  while (x >= 1000)
  {
    x -= 1000;
    cout << "M";
  }
  if (x >= 900)    //Numbers with a 9 or 4 have a special notation in Roman.
  {
    x -= 900;
    cout << "CM";          
  }
  if (x >= 500)
  {
    x -= 500;
    cout << "D";
  }
  if (x >= 400)
  {
    x -= 400;
    cout << "CD";
  }  
    while (x >= 100)
  {
    x -= 100;
    cout << "C";
  }
  if (x >= 90)
  {
    x -= 90;
    cout << "XC";
  }
  if (x >= 50)
  {
    x -= 50;
    cout << "L";
  }
  if (x >= 40)
  {
    x -= 40;
    cout << "XL";
  }  
    while (x >= 10)
  {
    x -= 10;
    cout << "X";
  }
  if (x >= 9)
  {
    x -= 9;
    cout << "IX";
  }
  if (x >= 5)
  {
    x -= 5;
    cout << "V";
  }
  if (x >= 4)
  {
    x -= 4;
    cout << "IV";
  }  
  while (x >= 1)
  {
    x--;
    cout << "I";
  }  
  cout << ".";
  
  return;
}
