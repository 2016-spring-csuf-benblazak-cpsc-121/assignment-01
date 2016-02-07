# Roman-numerals

/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Sara Kubo <sarakubo@csu.fullerton.edu>
* ------------------------------------------------------------------------- */

/**
* A program to convert regular numbers to Roman Numerals.
*/

#include <iostream>
#include <string>

using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;

int main() {

string roman;
int integer;
int piece;
char ans;

do {
    
cout << "Please enter an integer:" << endl;
  cin >> integer;
  
if ((integer >= 4000) || (integer <= 0)) {
  cout << "INVALID INTEGER" << endl;
}
else if (integer >= 1000) {
    piece = integer / 1000;
    
    for (int i = 0; i < piece; i++) {
      roman += 'M';
    }
    integer %= 1000;
  }
  
  if (integer >= 100) {
      piece = (integer / 100);
      
      if (piece == 9) {
          roman += "CM";
        }
        else if (piece >= 5) {
            roman += 'D';
            
            for (int i = 0; i < piece - 5; i++) {
                roman += 'C';
            }
        }
        else if (piece == 4) {
               roman += "CD";
        }
        else if (piece >= 1) {
            
            for (int i = 0; i < piece; i++) {
                roman += 'C';
            }
        }
        integer %= 100;
        
     }
    if (integer >= 10) {
        piece = (integer / 10);
        
        if (piece == 9) {
            roman += "XC";
        }
        else if (piece >= 5) {
            roman += 'L';
            
            for (int i = 0; i < piece - 5; i++) {
                roman += 'X';
            }
        }
        else if (piece == 4) {
            roman += "XL";
        }
        else if (piece >= 1) {
            
            for (int i = 0; i < piece; i++) {
                roman += 'X';
            }
        }
        integer %= 10;
    }
    
    if (integer >= 1) {
        piece = integer;
        
        if (piece == 9) {
            roman += "IX";
        }
        else if (piece >= 5) {
            roman += 'V';
            
            for (int i = 0; i < piece - 5; i++) {
                roman += 'I';
            }
        }
        else if (piece == 4) {
            roman += "IV";
        }
        else if (piece >= 1) {
            
            for (int i = 0; i < piece; i++) {
                roman += 'I';
            }
        }
    }
    

cout << roman << endl;

cout << "Would you like to convert another integer (Y/N)?" << endl;
cin >> ans;

} while (ans == 'Y' || ans == 'y');

return 0;


}
