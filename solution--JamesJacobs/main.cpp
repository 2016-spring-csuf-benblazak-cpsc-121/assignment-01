
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

string ArabicNumber_to_RomanNumeral(int a);

int main()

{
	int ArabicNumber;
	
	char Continue;

	do {
		cout << "Please enter an integer: ";
		cin >> ArabicNumber;

		cout << "-->" << ArabicNumber_to_RomanNumeral(ArabicNumber) << "\n";
		
		// ask professor about if he wants the "-->" to show conversion for style"	

		cout << "Would you like to convert another integer (Y/N)?";
		cin >> Continue;

		cout << "\n";
	} 
	while (cin && Continue != 'n' && Continue != 'N');
	
	return 0;
}
string ArabicNumber_to_RomanNumeral(int a) {
	if (a <= 0 || a >= 4000)
		return "ERROR, THAT'S NO ROMAN NUMERAL";
	string output = "";
	
	while (a >= 1000) { output += "M"; a -= 1000; }
	
	while (a >= 900) { output += "CM"; a -= 900; }
	
	while (a >= 500) { output += "D"; a -= 500; }
	
	while (a >= 400) { output += "CD"; a -= 400; }
	
	while (a >= 100) { output += "C"; a -= 100; }
	
	while (a >= 90) { output += "XC"; a -= 90; }
	
	while (a >= 50) { output += "L"; a -= 50; }
	
	while (a >= 40) { output += "XL"; a -= 40; }
	
	while (a >= 10) { output += "X"; a -= 10; }
	
	while (a >= 9) { output += "IX"; a -= 9; }
	
	while (a >= 5) { output += "V"; a -= 5; }
	
	while (a >= 4) { output += "IV"; a -= 4; }
	
	while (a >= 1) { output += "I"; a -= 1; }

	return output;
	// IM TO LAZY RIGHT NOW BASICALLY DECLARE ALL OF THE ROMAN NUMERALS
}
