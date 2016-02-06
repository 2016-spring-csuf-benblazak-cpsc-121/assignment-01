/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>, Brian Tran <brianttran1996@csu.fullerton.edu>, 
* Gary Kam <kamgary109@csu.fullerton.edu>, and Rawabi Alayed <rawabialayed@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* This program converts a whole number integer into roman numerals.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

void convert(int);

int main()
{
    int num;
    char letter;
    
    do
    {
        cout << "Enter an integer: ";
        cin >> num;
        
        convert(num);
        cout << std::endl;
        
        cout << "Convert another integer (Y/N)? ";
        cin >> answer;
        
    } while (letter == 'y' || letter == 'Y');
    
    return 0;
}

void convert(int num)
{

    int i = num / 1000;
    for (int j = 0; j < i; j++)
        cout << "M";
    num -= (1000 * i);

    i = num / 900;
    for (int j = 0; j < i; j++)
        cout << "CM";
    num -= (900 * i);

    i = num / 500;
    for (int j = 0; j < i; j++)
        cout << "D";
    num = num - (500 * i);
    
    i = num / 400;
    for (int j = 0; j < i; j++)
        cout << "CD";
    num = num - (400 * i);

    i = num / 100;
    for (int j = 0; j < i; j++)
        cout << "C";
    num = num - (100 * i);

    i = num / 90;
    for (int j = 0; j < i; j++)
        cout << "XC";
    num = num - (90 * i);

    i = num / 50;
    for (int j = 0; j < i; j++)
        cout << "L";
    num = num - (50 * i);

    i = num / 40;
    for (int j = 0; j < i; j++)
        cout << "XL";
    num = num - (40 * i);

    i = num / 10;
    for (int j = 0; j < i; j++)
        cout << "X";
    num = num - (10 * i);
    
    i = num / 9;
    for (int j = 0; j < i; j++)
        cout << "IX";
    num = num - (9 * i);

    i = num / 5;
    for (int j = 0; j < i; j++)
        cout << "V";
    num = num - (5 * i);

    i = num / 4;
    for (int j = 0; j < i; j++)
        cout << "IV";
    num = num - (4 * i);

    i = num / 1;
    for (int j = 0; j < i; j++)
        cout << "I";
    num = num - (1 * i);
}
