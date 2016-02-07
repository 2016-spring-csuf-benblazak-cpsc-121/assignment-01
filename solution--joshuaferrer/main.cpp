/* ----------------------------------------------------------------------------
* Copyright & copy; 2016 Joshua Ferrer <joshferrrer@csu.fullerton.edu>
*------------------------------------------------------------------------ - */
//This program converts integers into roman numerals.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string romanNumeral(int num);

int main()
{
	int num;
	char choice;
	do{
    	cout << "Please enter an integer: ";
    	cin >> num;
    	cout << romanNumeral(num) << endl;
    	
    	cout << "Would you like to convert another integer (Y/N)?";
    	cin >> choice;
    	cout << endl << endl;
    	
    	} while (choice == 'y' || choice == 'Y'); 
    	
	return 0;
}


string romanNumeral(int num) 
{
    const string numerals [] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","VI","I" };
    const int integers [] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4 , 1 };
    
    string done = "";
    
    //The condition for which numbers are converted into roman numerals.
    //Conversion help from the in-class assignment 01 review
    
    for(int x = 0; x < 13; x++) 
    {
        for(int y =0; y < num / integers[x]; y++)
        {
            done += numerals[x];
        }
        
        num %= integers[x];
    }
    
    return done;
}
