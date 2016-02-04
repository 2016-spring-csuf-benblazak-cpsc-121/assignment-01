/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Kristi Chang <kristi.chang@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
/**
*Program to take user input integer and convert to Roman numberals
*/
#include <iostream>
  
void romann(int z) {
  
    /**   note:  int roman nums
    1   = I         4   = IV
    5   = V         9   = IX
    10  = X         40  = XL
    50  = L         90  = XC
    100 = C         400 = CD
    500 = D         900 = CM
    1000= M
    largest roman numeral 3,999 = MMMCMXCIX
    **/
    int m, cm, d, c, xc, l, x, ix, v, i;
    //define m, if input is greater than m, subtract 1000 from input and print m
    for (m = 1000; z >= m; z -= 1000) { 
        std::cout << "M";
    }
      
    for (cm = 900; z >= cm; z -= 900) {
        std::cout << "CM";
    }
  
    for (d = 500; z >= d; z -= 500) {
        std::cout << "D";
    }
  
    if (z >= 400) {
        std::cout << "CD"; z -= 400;
    }
     else {
        for (c = 100; z >= c; z -= 100) {
            std::cout << "C";
        }
    }
      
    for (xc = 90; z >= xc; z -= 90) {
        std::cout << "XC";
    }
  
    for (l = 50; z >= l; z -= 50) {
        std::cout << "L";
    }
  
    if (z >= 40) {
        std::cout << "XL"; z -= 40;
    }
    else {
        for (x = 10; z >= x; z -= 10) {
            std::cout << "X";
        }
    }
  
    for (ix = 9; z >= ix; z -= 9) {
        std::cout << "IX";
    }
  
    for (v = 5; z >= v; z -= 5) {
        std::cout << "V";
    }
  
    if (z >= 4) {
        std::cout << "IV"; z -= 4;
    }
    else {
        for (i = 1; z >= i; z -= 1) {
            std::cout << "I";
        }
    }
 
}
int main()
{
    char ans;
    int a;
  
    do {
        std::cout << "Please enter an integer between 1 and 3999 : ";
        std::cin >> a;
      
        std::cout << "The number in roman numerals is : ";
        romann(a);
              
        std::cout << "\n Would you like to convert another integer? [y/n]: ";
        std::cin >> ans;
  
    } while (ans == 'y' || ans == 'Y');

    return 0;
}
