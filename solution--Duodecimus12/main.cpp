// Program prints integers into Roman numerals
#include <iostream>
#include <string>

void printRoman (int input);
int input = 0;

int main()
{
  cout << "Enter an integral from 1 3999: ";
  cin >> input;
  printRoman(input);

  return 0; 
}

void printRoman (input)
{
    int thousands, fiveHundreds, hundreds, fifties, tens, fives, ones;
    thousands = input/1000;
    switch (thousands)
    {
        case '0': cout << " ";
        break;
        case '1': cout << "M";
        break;
        case '2': cout << "MM";
        break;
        case '3': cout << "MMM";
        break;
    }
    input % 1000;
    
    fiveHundreds = input/500;
    input %= 500;
    switch (fiveHundreds)
    {
        case '0': cout << " ";
        break;
        case '1': cout << "D";
        break;
    }
    
    hundreds = input/100;
    input %= 100;
    switch (hundreds)
    {
        case '0': cout << " ";
        break;
        case '1': cout << "C";
        break;
        case '2': cout << "CC";
        break;
        case '3': cout << "CCC";
        break;
        case '4': cout << "CD";
        break;
    }
    
    fifties = input/50;
    input %=50;
    switch (fifties)
    {
        case '0': cout << " ";
        break;
        case '1': cout << "L";
        break;
    }
    
    tens = input/10;
    input %= 10;
    switch (tens)
    {
        case '0': cout << "X";
        break;
        case '1': cout << "XX";
        break;
        case '2': cout << "XXX";
        break;
        case '4': cout << "XL";
        break;
    }
    
    fives = input/5;
    input %= 5;
    switch (fives)
    {
        case '0': cout << " ";
        break;
        case '1': cout << "V";
        break;
    }
    
    ones = input
    switch (ones)
    {
        case '0': cout << " ";
        break;
        case '1': cout << "I";
        break;
        case '2': cout << "II";
        break;
        case '3': cout << "III";
        break;
        case '4': cout << "IV";
        break;
    }
    
    return 0;
}
