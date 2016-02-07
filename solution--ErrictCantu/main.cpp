/* ----------------------------------------------------------------------------
 
 * 2016 Errict Cantu <errictcantu@csu.fullerton.edu>
 
 * ------------------------------------------------------------------------- */

/**
 
 * A short program to print out roman numerals corresponding to the entered number, using parallel arrays and loos.
 
 */

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string conversion(int romanNumeral);

int main()
{
    int	integer;
    char c;
    

    do {
        cout << "Please enter an integer: ";
    
        cin >> integer;
        
            while (integer < 1 || integer > 3999)
            {
                cout << "\nPlease enter a number between 1 and 3999:";
                cin >> integer;
        
            }
        
        
        cout << "--> " << conversion(integer);
            
        cout << "\n\nWould you like to convert another integer (Y/N)? ";
            
        cin >> c;
    
    } while (c == 'y' || c == 'Y');
    
    
    return 0;
}

string conversion(int romanNumeral)
{
    string returnValue = "";
    
    const string numerals[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int values[] =      { 1000, 900, 500, 400,  100,  90,  50,   40,   10,   9,   5,   4,     1};

    for (int i=0; i < 13; i++){
        for (int j = 0; j < romanNumeral / values[i]; j++)
            returnValue += numerals[i];
        romanNumeral %= values[i];
    }
    
    return returnValue;
}
