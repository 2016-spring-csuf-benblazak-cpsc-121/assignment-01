#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

string convert (int);

int main() {
    
    char input; 
    int num; 
	
    do{
	  cout << "Please enter an integer: \n "; 
         cin >> num;

	      while((num <= 0 || num >= 4000)){
    cout << "Please enter an integer: \n ";
    cin >> num;
	  }
	
    cout << "Roman Numeral: " << convert(num) << endl; 
    
    cout << "Would you like to convert another number (Y/N)?: ";
    cin >> input;
    cout << endl;
    
    }while(input == 'y' || input == 'Y'); 

    return 0;
}
string convert(int Num){
   
    string input; 
    int answer; 
    
    const string numerals[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    const int values[] = {
    1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };

    for (int z = 0 ; z < 13 ; z++)
    {
        if (Num >= values[z])
        {
            answer = (Num / values[z]); 
            for(int a = 0 ; a < answer ; a++)
            {
                input += numerals[z];
            
            Num %= values[z]; 
            }
            
        }
    }
     
    return input;
}
