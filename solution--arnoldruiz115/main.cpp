# assignment-1
#include <iostream>
#include <string>

 int romanconverter(int)
 {
 
 }
 
 int main()
 {
 	int num;
 	std::string romnum;

 	std::cout << "Please enter an integer: \n";
 	std::cin >> num;
	std::cout << romnum;
	
 	char repeat;
 	
 	do {
		std::cout << "Would you like to convert another integer (Y/N)?\n";
 		std::cin >> repeat;
 	} while (repeat == 'Y' || repeat == 'y');
 }
