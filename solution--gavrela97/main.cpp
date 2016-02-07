/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Gerardo Varela <gvarela97@csu.fullerton.edu>

/*
* A short program to convert decimal numbers to roman numerals
*/
//libraries and operators needed for program
#include <iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
//conversion function prototype 
string numConverter(int);

int main()
{
    //variables needed for convesion number and continue option
    int decNum;
    char choice;
    
    //loop to continue running program
    do
    {
        cout<<"Enter the number you wish to convert."<<endl;
        cin >> decNum;
        if(decNum <=0)
        cout<<"invalid input"<<endl;
        else
        cout<< decNum << " in roman numerals is "<< numConverter(decNum)<<endl;
        cout<<"Would you like to convert another number (y/n)?"<<endl;
        cin >>choice;
    }
    while(choice=='Y' || choice=='y');
    
    return 0;
}
//converter function
string numConverter(int decNum)
{
    //variable to hold converted number 
    string answer = "";
    
    //numeral values and logic to update number being converted 
    int m = decNum/1000;
    decNum%=1000;
    
    int cm = decNum/900;
    decNum%=900;
    
    int d = decNum/500;
    decNum%=500;
    
    int cd = decNum/400;
    decNum%=400;
    
    int c = decNum/100;
    decNum%=100;
    
    int xc = decNum/90;
    decNum%=90;
    
    int l = decNum/50;
    decNum%=50;
    
    int xl = decNum/40;
    decNum%=40;
    
    int x = decNum/10;
    decNum%=10;
    
    int ix = decNum/9;
    decNum%=9;
    
    int v = decNum/5;
    decNum%=5;
    
    int iv = decNum/4;
    decNum%=4;
    
    int i = decNum;
    
    //logic to scan number and replace numerical values with roman values
    for(i=1; i<=m; i++)
    answer+='M';
    
    for(i=1; i<=cm; i++)
    answer+="CM";
    
    for(i=1; i<=d; i++)
    answer+='D';
    
    for(i=1; i<=cd; i++)
    answer+="CD";
    
    for(i=1; i<=c; i++)
    answer+='C';
    
    for(i=1; i<=xc; i++)
    answer+="XC";
    
    for(i=1; i<=l; i++)
    answer+='L';
    
    for(i=1; i<=xl; i++)
    answer+="XL";
    
    for(i=1; i<=x; i++)
    answer+='X';
    
    for(i=1; i<=ix; i++)
    answer+="IX";
    
    for(i=1; i<=v; i++)
    answer+='V';
    
    for(i=1; i<=iv; i++)
    answer+="IV";
    
    for(int j=decNum; j>=i; j--)
    answer+='I';
    
    //send answer to main
    return answer; 
}

