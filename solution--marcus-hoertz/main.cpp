/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Marcus Hoertz <marcus.hoertz@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to take arabic numerals and convert it into roman numerals
*/
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main()
{
	int x;
	string choice= "Y";
	while (choice== "Y")
	{
	cout << "Please enter an integer: ";
	cin >> x;
	if (x <= 0)
	{
		cout << "Invalid integer. please input a non-zero, non-negative integer";
		cin >> x;
	}
	//tests for valid input.
	while (x>0)//runs until a value of zero occurs
	{
	    while (x>=1000)// tests for each case
	    {
	        cout<< "M";
	        x-=1000;//subtracts 1000 from the value, then continues
	    }
	    if (x>=500)
	    {
	        if (x>=900)//special case for 900. has to be CM
	        {
	            cout<<"CM";
	            x-=900;
	        }
	        else
	        {
	            cout<<"D";
	            x-=500;
	        }
	    }
	    while (x>=100)
	    {
	        if (x>=400)//special case for 400, has to be CD
	        {
	            cout<< "CD";
	            x-=400;
	        }
	        else
	        {
	            cout<<"C";
	            x-=100;
	        }
	    }
	    while (x>=50)
	    {
	        if (x>=90)// special case for 90. has to be XC
	        {
	            cout<< "XC";
	            x-=90;
	        }
	        else
	        {
	            cout<<"L";
	            x-=50;
	        }
	    }
	    while (x>=10)
	    {
	        if (x>=40)//special case for 40. has to be XL
	        {
	            cout<< "XL";
	            x-=40;
	        }
	        else
	        {
	            cout<<"X";
	            x-=10;
	        }
	    }
	    while (x>=5)
	    {
	        if (x>=9)//special case for 9. Has to be IX
	        {
	            cout<< "IX";
	            x-=9;
	        }
	        else
	        {
	            cout<<"V";
	            x-=5;
	        }
	    }
	    while (x>=1)
	    {
	        if (x>=4)//special case for 4. has to be IV
	        {
	            cout<< "IV";
	            x-=4;
	        }
	        else
	        {
	            cout<<"I";
	            x-=1;
	        }
	    }
	}
	cout<< endl << "Would you like to input another number? please input Y for yes and anything else for no";
	cin>>choice;
	// used in a while loop. could do a do while loop.
	}
}
