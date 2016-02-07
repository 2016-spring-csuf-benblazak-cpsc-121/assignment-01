//  Created by David Guan on 1/29/16.
//  Copyright © 2016 David Guan <davidguan@csu.fullerton.edu> All rights reserved.
// A short program to convert integers into Roman Numerals

#include <iostream>
int input;
char response;
int i;
using std::cout;
using std::endl;
using std::cin;

void convert(int input);

int main()
{
    do
    {
        cout << "Please enter an integer" << endl;
        cin >>input;
        convert (input);
        cout << " Would you like to convert another integer (Y/N)";
        cin >> response;
    }
    while (response == 'Y'|| response == 'y');
    
    return 0;
}

void convert(int input)
{
    if (input <=20) {
        switch (input)
        {
            case 1: cout << "I"<< endl;
                break;
            case 2 : cout << "II"<< endl;
                break;
            case 3: cout << "III"<< endl;
                break;
            case 4: cout << "IV"<< endl;
                break;
            case 5: cout << "V"<< endl;
                break;
            case 6: cout << "VI"<< endl;
                break;
            case 7: cout << "VII"<< endl;
                break;
            case 8: cout << "VIII"<< endl;
                break;
            case 9: cout << "IX"<< endl;
                break;
            case 10:cout << "XI"<< endl;
                break;
            case 11: cout << "XII"<< endl;
                break;
            case 12 : cout << "XIV"<< endl;
                break;
            case 13: cout << "XIII"<< endl;
                break;
            case 14: cout << "XIV"<< endl;
                break;
            case 15: cout << "XV"<< endl;
                break;
            case 16: cout << "XVI"<< endl;
                break;
            case 17: cout << "XVII"<< endl;
                break;
            case 18: cout << "XVIII"<< endl;
                break;
            case 19: cout << "XIX"<< endl;
                break;
            case 20:cout << "XX"<< endl;
                break;
        }
}
    



}
