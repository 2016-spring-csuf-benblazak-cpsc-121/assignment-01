/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Jose Abundez <Jabundez@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to convert an integer into a Roman Numeral.
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string IntToRom (int);//Function that converts and returns the converted number

int main() {
    
    char Response; // User's response to the converting another number question
    int Integer; // Number being converted
	
    // Do-while loop to handle the operation
    do{
    // Ask user for the integer they want to convert
	  cout << "Enter a number between 1-3999: "; 
    cin >> Integer;

	  // Checks to see if the number is within the bounds
    while((Integer <= 0 || Integer >= 4000)){
    cout << "Please enter an integer between 1-3999: ";
    cin >> Integer;
	  }
	
    // Call and display the return function that converts the number
    cout << "Roman Numeral: " << IntToRom(Integer) << endl; 
    
    // Ask user if they would like to convert another number
    cout << "Would you like to convert another number (y/n)?: ";
    cin >> Response; // Get user input
    cout << "\n";
    
    }while(Response == 'y' || Response == 'Y'); // Loop while the user enters 
                                                // yes

    return 0;
}
string IntToRom(int Num){
   
    string ConvertedNum; // Roman numeral after conversion
    int check; // Check to see how many letters are needed to be added to the
               // string
    
    // The Roman numerals in a string array
    const string RomanNum[] {"M", "CM","D", "CD", "C", "XC", "L", "XL", "X", 
    "IX", "V", "IV", "I"};
    // The values for the Roman numerals in an integer array
    const int RVal[] {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };
    
    for (int i = 0 ; i < 13 ; i++){
        if (Num >= RVal[i]){
            check = (Num / RVal[i]); // Checks to see how many letters are needed
            
            // Add the number of letters needed to the string
            for(int j = 0 ; j < check ; j++){
                ConvertedNum += RomanNum[i];
            }
            Num %= RVal[i]; // Divides the number and leaves the remainder
        }
    }
     
    return ConvertedNum; // Return the converted number in a string
}
