/* ------------------------------------------------------------------------
 * Copyright &copy; 2016 Kevin Tran <kevintran323@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * -------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------
 *A program that would allow the users to be able to convert numbers into roman numerals
 *----------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

const int
NumThou = 4,
NumHund = 10,
NumTen = 10,
NumOne = 10;

void FindSymbol(int input, int &NumThou, int &NumHund,int &NumTen,int &NumOne);

int main()
{
	int input;
	char choice;
	string SymThou[NumThou]={"","M","MM","MMM"};
	string SymHund[NumHund]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	string SymTen[NumTen]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	string SymOne[NumOne]={"","I","II","III","IV","V","VI","VII","VIII","IX",};
    
	do
	{
    	cout << "Please input an integer: ";
    	cin >> input;
    	while (input < 0 ||input > 3999 )
        	{
            	cout << "Invalid. Please re-enter a value between 1 and 3999: ";
            	cin >> input;
        	}

    	int NumThou, NumHund, NumTen, NumOne;
    	FindSymbol(input, NumThou, NumHund, NumTen, NumOne);
    	cout << "--> " << SymThou[NumThou] << SymHund[NumHund] << SymTen[NumTen] << SymOne[NumOne] << endl;
   	 
    	cout<<"Would you like to convert another integer (Y/N)?" << endl;
    	cin >> choice;
        if (choice =='n' || choice=='N')
        {
            return 0;
        }
   	 
	} while (choice =='y' || choice =='Y');    	
    
}

void FindSymbol(int input, int &NumThou, int &NumHund,int &NumTen,int &NumOne)
{
	NumThou=(input/1000);
	NumHund=(input - (NumThou*1000))/100;
	NumTen=(input-(NumThou*1000+NumHund*100))/10;
	NumOne=(input-(NumThou*1000+NumHund*100+NumTen*10));
}

