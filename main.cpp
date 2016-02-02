//  Created by Darren Meier on 1/27/16.
//  Copyright © 2016 Darren Meier. All rights reserved.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void calculation(int);

int main()   // Print Function, with input validation
{
    char answer;
    int num;
    
    do {
        cout << " Please enter a number to convert to roman numerals:" << endl;
        cin >> num;
        
        if ( num >= 4000 || num <= 1 )    
        {
          cout << "Please input a number between 1-3999. " << endl;
        }
        
        else
        calculation(num);
        
        cout << "Would you like to try another number? (Y/N)" << endl;
        cin >> answer;
        
    } while (answer == 'Y' || answer == 'y');
}



void calculation(int num)     //Calculation using num from main
{

	for (; num >= 1000; num -= 1000)   
		cout << "M";

	for (; num >= 900; num -= 900)
		cout << "CM";

	for (; num >= 500; num -= 500)
		cout << "D";
	
	for (; num >= 400; num -= 400)
		cout << "DC";

	for (; num >= 100; num -= 100)
		cout << "C";
	
	for (; num >= 90; num -= 90)
		cout << "XC";

	for (; num >= 50; num -= 50)
		cout << "L";

	for (; num >= 40; num -= 40)
		cout << "XL";

	for (; num >= 10; num -= 10) 
		cout << "X";

	for (; num >= 9; num -= 9)
		cout << "IX";

	for (; num >= 5; num -= 5)
		cout << "V";

	for (; num >= 4; num -= 4)
        cout << "IV";

	for (; num >= 1; num -= 1) 
		cout << "I";
    
    cout << endl;
}
