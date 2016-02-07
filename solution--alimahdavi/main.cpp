#include <iostream>
#include <string>

using std:: cout;
using std:: cin;
using std:: endl;
using std:: string;

int main()

{
    int integer;
    int NewNumber;
    string RomanNumber;
    char another;
    
    do {
        
        cout<< "Please enter an integer: ";
        cin >> integer;
        
        //Check for 1000th place
        
        if (integer >= 1000) {
            NewNumber= (integer/1000);
            
            int i=0;
            
            while (i < NewNumber) {
                RomanNumber += 'M';
                i++;
            }
            
            integer %= 1000;
        }
        //Check for 100th place
        
        if (integer >= 100)
        {
            NewNumber= (integer/100);
            
            if (NewNumber == 9)
            {
                RomanNumber += "CM";
            }
            
            else if (NewNumber >= 5)
            {
                RomanNumber += 'D';
                
                int i=0;
                
                while (i < (NewNumber-5)) {
                    RomanNumber += 'C';
                    i++;
                }
                
                
            }
            
            else if (NewNumber == 4){
                RomanNumber += "CD";
            }
            
            else if (NewNumber >= 1){
                
                int i=0;
                while (i < NewNumber) {
                    RomanNumber += 'C';
                    i++;
                }
                
                
            }
            
            integer %= 100;
        }
        
        // Check for 10th place
        
        if (integer >= 10) {
            NewNumber = (integer/10);
            
            if (NewNumber == 9) {
                RomanNumber += "XC";
                
            }
            else if (NewNumber >= 5){
                RomanNumber += 'L';
                
                int i=0;
                while (i < (NewNumber-5)) {
                    RomanNumber += 'X';
                    i++;
                }
                
            }
            
            else if (NewNumber == 4) {
                RomanNumber += "XL";
            }
            else if (NewNumber >= 1){
                
                int i=0;
                while (i < NewNumber) {
                    RomanNumber += 'X';
                    i++;
                }
                
            }
            
            integer %= 10;
            
            
        }
        // Check for first place
        if (integer >= 1) {
            NewNumber = integer;
            
            if (NewNumber == 9) {
                RomanNumber += "IX";
                
            }
            else if (NewNumber >= 5){
                RomanNumber += 'V';
                
                int i=0;
                while (i < (NewNumber-5)) {
                    RomanNumber += 'I';
                    i++;
                }
                
            }
            
            else if (NewNumber == 4) {
                RomanNumber += "IV";
            }
            else if (NewNumber >=1){
                
                int i=0;
                while (i < NewNumber) {
                    RomanNumber += 'I';
                    i++;
                }
                
            }
            
        }
      
        
        cout<<"-->"<<RomanNumber;
        cout<<endl;

   
    
    cout<<"Would you like to convert another integer (Y/N)?\n ";
        cin >> another;
        
        
    }
    
    while(another == 'Y' || another == 'y');
    

    
    return 0;
    
    
}
