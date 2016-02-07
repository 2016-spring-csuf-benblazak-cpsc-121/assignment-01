/* ----------------------------------------------------------------------------
* Nelson Luong
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to ask the user to enter an integer and prints the integer in Roman Numerals.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void conversion(int integer, string roman, int cut);

int main() {
	int integer;
	string roman;
        int cut;
	char doAgain;
	do {
		cout << "Please enter an integer: ";
		cin >> integer;
                
           
                
                conversion(integer, roman, cut);

                
                
                
		cout << endl << "Would you like to convert another integer (Y/N)? ";
		cin >> doAgain;

	} while (doAgain == 'Y' || doAgain == 'y');
	return 0;
}

// I = 1
// V = 5
// X = 10
// L = 50
// C = 100
// D = 500
// M = 1000

void conversion(int integer, string roman, int cut) {
    if (integer >= 5001 || integer <= 0) {
        cout << "Invalid Number" << endl;
    }
    else {
        if (integer >= 1000) {
            cut = (integer / 1000);
            
            for (int i=0; i < cut; i++){
                roman += "M";
            }
            integer %= 1000;
        }
        if (integer >= 100) {
            cut = (integer / 100);
            
            if (cut == 9) {
                roman += "CM";
            }
            else if (cut >= 5) {
                roman += "D";
                for (int i=0; i < cut - 5; i++) {
                    roman += "C";
                }
            }
            else if (cut == 4) {
                roman += "CD";
            }
            else if (cut >= 1) {
                for (int i = 0; i < cut; i++) {
                    roman += "C";
                }
            }
            integer %= 100;
        }
        if (integer >= 10) {
            cut = (integer / 10);
            if (cut == 9) {
                roman += "XC";             
            }
            else if (cut >= 5) {
                roman += "L";
                for (int i=0; i < cut - 5 ; i ++) {
                    roman += "X";
                }
            }
            else if (cut == 4) {
                roman += "XL";
            }
            else if (cut >= 1) {
                for (int i=0; i < cut; i++) {
                    roman += "X";
                }
            } 
            integer %= 10;
        }
        if (integer >= 1) {
            cut = integer;
            
            if (cut == 9) {
                roman += "IX";
            }
            else if (cut >= 5) {
                roman += "V";
                
                for (int i = 0; i < cut - 5; i++) {
                    roman += "I";
                }
            }
            else if (cut == 4) {
                roman += "IV";
                }
            else if (cut >= 1 ){
                for (int i = 0; i < cut; i++) {
                    roman += "I";
                }
            }
        }
    }
    cout << "--> " << roman;
}
