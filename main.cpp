#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*----------------------------------------------------------------------------
*Copyright &copy; 2016 Alejandro Santillana <alex.santillana21@fullerton.edu>
*-----------------------------------------------------------------------------
* A short program to out put a roman numeral from a given input of an integer from 1 up to 3999.
*/
 int main()
{
    //declaring variables to be used

    //user input and number to be processed through code
    int num, mod_num, sponge;
    char yes = 'y';

    //string to be output
    string roman;

    //asking for input
    cout << "Please input a number from 1 to 3999:  \n";
    //cin >> num;
    //mod_num = num;


    //this while loop makes sure that the user wants to keep inputing numbers
    while(yes == 'y')
    {

        cin >> num;
        mod_num = num;
        // checks to make sure number is valid or not
        if(num >= 4000 || num <= 0)
        {
            cout << "Invalid entry! \n";
        }
        // start of actual conversion code
        else
        {
            // deals with the thousands
           //THIS IF STATEMENT HANDLES THOUSANDS FROM 1000 TO 3999
            if (mod_num >= 1000)
            {
                sponge = mod_num / 1000;
                for(int i = 0; i < sponge;i++)
                {
                    roman += "M";
                }
                //REMODULATE MOD_NUM TO BE USED IN 100'S
                mod_num = mod_num %1000;
            }


            // THIS IS WHERE HUNDREDS ARE PROCESSED
            if (mod_num >=100 && mod_num < 1000)
            {
                sponge = mod_num / 100;
                //deals with two special cases in the hundreds
            // 400 900 and 500 can be solved
                if(sponge == 9)
                {
                    roman += "CM";
                }
                if(sponge == 4)
                {
                    roman += "CD";
                }
                //deals with 5 through 8
                if (sponge >= 5 && sponge < 9)
                {
                    roman += "D";
                    for (int i = 0; i < (sponge-5) ; i++)
                    {
                        roman += "C";
                    }
                }
                //deals with 1 through 3
                if (sponge < 4)
                {
                    for(int i = 0; i < sponge; i++)
                    {
                        roman += "C";
                    }
                }
            //REMODULATE MOD_NUM TO BE USED IN THE TENS SECTIONS
            mod_num = mod_num%100;
            }

            //THIS IS WHERE THE TENS ARE PROCESSED
            if(mod_num >= 10 && mod_num < 100)
            {
                sponge = mod_num/10;
                //deals with the two special cases of 40 and 90
                if(sponge == 9)
                {
                    roman += "XC";
                }
                if(sponge == 4)
                {
                    roman += "XL";
                }
                //deals with 5's and up
                if(sponge >= 5 && sponge < 9)
                {
                    roman += "L";
                    for(int i = 0; i < (sponge-5); i++)
                    {
                        roman += "X";
                    }
                }
                //deals with 4 and below
                if(sponge <4)
                {
                    for(int i = 0 ; i < sponge; i++);
                    {
                        roman += "X";
                    }
                }
                //REMODULATE MOD_NUM TO BE USED IN SINGLE NUMBER'S
                mod_num = mod_num%10;
            }

            //THIS IS WHERE SINGLE NUMBERS WILL BE PROCESSED
            if(mod_num >= 1 && mod_num < 10)
            {
                sponge = mod_num;
                //deals with the two special cases of 4 and 9
                if(sponge == 9)
                {
                    roman += "IX";
                }
                if(sponge == 4)
                {
                    roman += "IV";
                }
                if(sponge >= 5 && sponge < 9)
                {
                    roman += "V";
                    for (int i = 0; i < (sponge-5);i++)
                    {
                        roman += "I";
                    }
                }
                if(sponge < 4)
                {
                    for(int i = 0; i < sponge; i++)
                    {
                        roman += "I";
                    }
                }
            }
        cout << "-->" << roman << endl;
        roman = "";
        }
        cout << "Would yo like to convert another integer (Y/N)?";
        cin >> yes;
    }
    return 0;
}
