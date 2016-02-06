/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 West Young <westoungg@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to convert user-inputted integers into roman numerals.
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{

    char repeat = 'y';
    while (repeat == 'y' || repeat == 'Y')
    {
        cout << "Please enter an integer ";
        int num;
        cin >> num;
        while (num >= 1000) {
            cout << "M";
            num = num - 1000;
        }
        while (num == 900) {
            cout << "CM";
            num = num - 900;
        }
        while (num >= 500) {
            cout << "D";
            num = num - 500;
        }
        while (num == 400) {
            cout << "CD";
            num = num - 400;
        }
        while (num >= 100) {
            cout << "C";
            num = num - 100;
        }
        while (num >= 90 && num <= 99) {
            cout << "XC";
            num = num - 90;
        }
        while (num >= 50) {
            cout << "L";
            num = num - 50;
        }
        while (num == 40) {
            cout << "XL";
            num = num - 40;
        }
        while (num >= 10) {
            cout << "X";
            num = num - 10;
        }
        while (num == 9) {
            cout << "IX";
            num = num - 9;
        }
        while (num >= 5) {
            cout << "V";
            num = num - 5;
        }
        while (num == 4) {
            cout << "IV";
            num = num - 4;
        }
        while (num >= 1) {
            cout << "I";
            num = num - 1;
        }
        cout << "\nWould you like to convert another integer (y/n)? " << endl;
        cin >> repeat;
    }
    system("PAUSE");
    return 0;
}
