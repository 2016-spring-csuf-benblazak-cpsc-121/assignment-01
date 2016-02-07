/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 Tim Ferido <timferido@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- 
 */

/*
 * A program that converts user entered integers into roman numerals.
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;


//declare global variable
int input = 0;
char restart;

//define function prompt
void prompt()
{
    cout << "Please enter an integer: ";
    cin >> input;
}


//define function convert
void convert()
{
    //convert user input to string
    std::string s = std::to_string(input);
    
    //convert string to char array
    int temp = static_cast<int>(s.length());
    char inputChar[4];
    for (int a = 0; a < temp; a++)
    {
        inputChar[a] = s[a];
    }
    
    
    cout << "--> ";
  
    
    //convert digits to roman numerals
    if (temp == 4)
    {
        switch (inputChar[0])
        {
            case '1':cout << "M"; break;
            case '2':cout << "MM"; break;
            case '3':cout << "MMM"; break;
            default:cout << "";
        }
        
        switch (inputChar[1])
        {
                
            case '1':cout << "C"; break;
            case '2':cout << "CC"; break;
            case '3':cout << "CCC"; break;
            case '4':cout << "CD"; break;
            case '5':cout << "D"; break;
            case '6':cout << "DC"; break;
            case '7':cout << "DCC"; break;
            case '8':cout << "DCCC"; break;
            case '9':cout << "CM"; break;
            default:cout << ""; break;
        }
        
        switch (inputChar[2])
        {
            case '1':cout << "X"; break;
            case '2':cout << "XX"; break;
            case '3':cout << "XXX"; break;
            case '4':cout << "XL"; break;
            case '5':cout << "L"; break;
            case '6':cout << "LX"; break;
            case '7':cout << "LXX"; break;
            case '8':cout << "LXXX"; break;
            case '9':cout << "XC"; break;
            default:cout << "";
        }
        
        switch (inputChar[3])
        {
            case '1':cout << "I"; break;
            case '2':cout << "II"; break;
            case '3':cout << "III"; break;
            case '4':cout << "IV"; break;
            case '5':cout << "V"; break;
            case '6':cout << "VI"; break;
            case '7':cout << "VII"; break;
            case '8':cout << "VIII"; break;
            case '9':cout << "IX"; break;
            default:cout << "";
        }
    }
    else if (temp == 3)
    {
        switch (inputChar[0])
        {
                
            case '1':cout << "C"; break;
            case '2':cout << "CC"; break;
            case '3':cout << "CCC"; break;
            case '4':cout << "CD"; break;
            case '5':cout << "D"; break;
            case '6':cout << "DC"; break;
            case '7':cout << "DCC"; break;
            case '8':cout << "DCCC"; break;
            case '9':cout << "CM"; break;
            default:cout << ""; break;
        }
        
        switch (inputChar[1])
        {
            case '1':cout << "X"; break;
            case '2':cout << "XX"; break;
            case '3':cout << "XXX"; break;
            case '4':cout << "XL"; break;
            case '5':cout << "L"; break;
            case '6':cout << "LX"; break;
            case '7':cout << "LXX"; break;
            case '8':cout << "LXXX"; break;
            case '9':cout << "XC"; break;
            default:cout << "";
        }
        
        switch (inputChar[2])
        {
            case '1':cout << "I"; break;
            case '2':cout << "II"; break;
            case '3':cout << "III"; break;
            case '4':cout << "IV"; break;
            case '5':cout << "V"; break;
            case '6':cout << "VI"; break;
            case '7':cout << "VII"; break;
            case '8':cout << "VIII"; break;
            case '9':cout << "IX"; break;
            default:cout << "";
        }
    }
    else if (temp == 2)
    {
        switch (inputChar[0])
        {
            case '1':cout << "X"; break;
            case '2':cout << "XX"; break;
            case '3':cout << "XXX"; break;
            case '4':cout << "XL"; break;
            case '5':cout << "L"; break;
            case '6':cout << "LX"; break;
            case '7':cout << "LXX"; break;
            case '8':cout << "LXXX"; break;
            case '9':cout << "XC"; break;
            default:cout << "";
        }
        
        switch (inputChar[1])
        {
            case '1':cout << "I"; break;
            case '2':cout << "II"; break;
            case '3':cout << "III"; break;
            case '4':cout << "IV"; break;
            case '5':cout << "V"; break;
            case '6':cout << "VI"; break;
            case '7':cout << "VII"; break;
            case '8':cout << "VIII"; break;
            case '9':cout << "IX"; break;
            default:cout << "";
        }
    }
    else if (temp == 1)
    {
        switch (inputChar[0])
        {
            case '1':cout << "I"; break;
            case '2':cout << "II"; break;
            case '3':cout << "III"; break;
            case '4':cout << "IV"; break;
            case '5':cout << "V"; break;
            case '6':cout << "VI"; break;
            case '7':cout << "VII"; break;
            case '8':cout << "VIII"; break;
            case '9':cout << "IX"; break;
            default:cout << "";
        }
    }
    
    cout << endl << endl;
    
}

//main function
int main()
{
    
    
    //run prompt function
    prompt();
    
    //run convert function
    convert();
    
    
    do {
        cout << "Would you like to convert another integer? (Y/N): ";
        cin >> restart;
        
        if (restart == 'y' || restart == 'Y')
        {
            cout << endl;
            prompt();
            convert();
        }
        else if (restart == 'n' || restart == 'N')
        {
            return 0;
        }
    } while (restart != 'n' || restart != 'N');
    
    
    system("pause");
}
