/* ----------------------------------------------------------------------------
* Copyright & copy; 2016 Joshua Ferrer <joshferrrer@csu.fullerton.edu>
*------------------------------------------------------------------------ - */
//This program converts integers into roman numerals.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
	int num;
	string choice;
	cout << "Please enter an integer: ";
	cin >> num;
	cout << romanNumeral();

	cout << "Would you like to convert another integer?";
	cin >> choice;
	while (char == 'y' || char == 'Y') {
		cout << "Please enter an integer: ";
		cin >> num;
		cout << romanNumeral();
	}





	return 0;

}


string romanNumeral(int num) {
	while(num > 1 || num < 3999)
	{
	
	}
