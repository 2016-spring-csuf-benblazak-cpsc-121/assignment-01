/* -----------------------------------------------------
    Created by Philip Dang on 1/25/16.
Copyright © 2016 Philip Dang <philipdang@ymail.com>. All rights reserved.
   -----------------------------------------------------
 */

/*
 A short program to ask user for an integer and print it out in roman numerals.
 */

#include <iostream>
#include <sstream>
#include <string>

void Convert(int);
int main()
{
    double num;
    int intnum;
    char yes ='Y';
    
    while (yes == 'y' || yes == 'Y')
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
        intnum = (int)num;
        std::cout << "--> ";
        Convert(intnum);
        
        std::cout << "\nWould you like to convert another integer? (Y/N): ";
        std::cin >> yes;
        std::cout << std::endl;
    }
    return 0;
}

void Convert(int intnum)
{
int m, d, c, l, x, v, i, n;
if (intnum >= 1000)             // http://www.cplusplus.com/doc/tutorial/control/
{
    m = intnum / 1000;
    n = 0;
    {
        for (; n < m; n++)
            std::cout << "M";
            }
            intnum = intnum%1000;
            }
            
            if (intnum >= 900)
        {
            std::cout << "CM";
            intnum = intnum%900;
        }
            else if (intnum >= 500)
        {
            {
                d = intnum / 500;
                n = 0;
                for (; n < d; n++)
                    std::cout << "D";
            }
            intnum = intnum%500;
        }
            
            if (intnum >= 400)
        {
            std::cout << "CD";
            intnum = intnum%400;
        }
            else if (intnum >= 100)
        {
            {
                c = intnum / 100;
                n = 0;
                for (; n < c; n++)
                    std::cout << "C";
            }
            intnum = intnum%100;
        }
            
            if (intnum >= 90)
        {
            std::cout << "XC";
            intnum = intnum%90;
        }
            
            else if (intnum >= 50)
        {
            {
                l = intnum / 50;
                n = 0;
                for (; n < l; n++)
                    std::cout << "L";
            }
            intnum = intnum%50;
        }
            if (intnum >= 40)
        {
            std::cout << "XL";
            intnum = intnum%40;
        }
            
            else if (intnum >= 10)
        {
            {
                x = intnum / 10;
                n = 0;
                for (; n < x; n++)
                    std::cout << "X";
            }
            intnum = intnum%10;
        }
            
            if (intnum >= 9)
        {
            std::cout << "IX";
            intnum = intnum%9;
        }
            
            else if (intnum >= 5)
        {
            {
                v = intnum / 5;
                n = 0;
                for (; n < v; n++)
                    std::cout << "V";
            }
            intnum = intnum%5;
        }
            if (intnum >= 4)
        {
            std::cout << "IV";
            intnum = intnum%4;
        }
            else if (intnum >= 1)
        {
            i = intnum;
            n = 0;
            for (; n < i; n++)
                std::cout << "I";
        }
    return;
}
