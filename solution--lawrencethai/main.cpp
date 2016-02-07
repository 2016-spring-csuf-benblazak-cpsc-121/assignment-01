/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <lawrence.thai@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program that prints out roman numerals from inputted integers
*/

#include<iostream>
#include<string>

string convert(int integer);

int main() {
  do{
    int n;
    char a;
  	std::cout << "Please enter an integer you want converted to a Roman numeral." << std::endl;
  	std::cin >> integer;
  	
  	cout<<convert(integer)<<endl;
  	
  	std::cout << "Would you like to convert another integer Y/N?" << std::endl;
  	std::cin >> a;
    }
  	while (a == 'y' || a=='Y');
  		return 0;
  }
  	
string convert(int integer){
  string ret="";
  return ret;
}

const string numerals[]= {'M', 'D', 'C', 'XC', 'LX', 'L', 'XL', 'XX', 'X', 'IX', 'V', 'IV', 'I'};

const int values[]= {'1000', '500', '100', '90', '60', '50', '40', '20', '10', '9', '5', '4', '1'};

for(int i=0; i<=13; i++){
  for(j=0;j<values[i];j++){
    ret +="M";
    num %= 1000;
  return ret;
}
