/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alex Chau <chauder_head@yahoo.com>, Joseph Phung <j.phung25@gmail.com>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* -------------------------------------------------------------------------*/

/*
* A program to convert integers into roman numerals.
*/

#include <iostream>
#include <string>



void alex(int);


int main() {
	int integer;

	std::cout << "Please type in an integer: ";
	std::cin >> integer;


	alex(integer);
	return 0;

}


void alex(int integer){
	int piece;
	std::string roman;
	char response = 'n';

	do
	{
		//checks if response is yes
		if (response == 'y' || response == 'Y'){
			//resets the roman numeral to empty string
			roman = "";
			std::cout << "\nPlease type in an integer: ";
			std::cin >> integer;
		}


		if ((integer >= 4000) || (integer <= 0)) {
			std::cout << std::endl << "Invalid Integer" << std::endl;
		}

		if (integer >= 1000) {
			piece = (integer / 1000);

			for (int i = 0; i < piece; i++) {
				roman += 'M';
			}
			integer %= 1000;
		}

		//286
		if (integer >= 100) {
			piece = (integer / 100);

			if (piece == 9) {
				roman += "CM";
			}
			else if (piece >= 5) {
				roman += 'D';

				for (int i = 0; i < piece - 5; i++) {
					roman += 'C';
				}
			}
			else if (piece == 4) {
				roman += "CD";
			}
			else if (piece >= 1) {

				for (int i = 0; i < piece; i++) {
					roman += 'C';
				}
			}
			integer %= 100;
		}

		//86
		if (integer >= 10) {
			piece = (integer / 10);

			if (piece == 9) {
				roman += "XC";
			}
			else if (piece >= 5) {
				roman += 'L';

				for (int i = 0; i < piece - 5; i++) {
					roman += 'X';
				}
			}
			else if (piece == 4) {
				roman += "XL";
			}
			else if (piece >= 1) {

				for (int i = 0; i < piece; i++) {
					roman += 'X';
				}
			}
			integer %= 10;
		}

		//6
		if (integer >= 1) {
			piece = (integer);

			if (piece == 9) {
				roman += "IX";
			}
			else if (piece >= 5) {
				roman += "V";

				for (int i = 0; i < piece - 5; i++) {
					roman += 'I';
				}
			}
			else if (piece == 4) {
				roman += "IV";
			}
			else if (piece >= 1) {

				for (int i = 0; i < piece; i++) {
					roman += 'I';

				}
			}
		}

		std::cout << "Roman Numeral: " << roman << std::endl;

		std::cout << "Would you like to convert another integer (Y/N)?";
		std::cin >> response;

		if (response == 'n' || response == 'N')
			break;

	} while (response == 'y' || response == 'Y');
}
