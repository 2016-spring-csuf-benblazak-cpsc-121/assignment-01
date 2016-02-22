/* ----------------------------------------------------------------------------
* Copyright & copy; 2016 Joshua Lee <joshualee.says@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to convert Arabic numbers to Roman numerals.
*/



#include <iostream>
#include <string>

int main() 
{
	/*Initializing Roman Numeral characters and special characters*/

	int M; //1000
	int CM; //900
	int D; //500
	int CD; //400
	int C; //100
	int XC; //90
	int L; //50
	int XL; //40
	int X; //10
	int IX; //9
	int V; //5
	int IV; //4
	int I; //1
	int k; // counter
	char input; // user response to repeat the code over again
	int number; // user number to be converted


	do // Direcions for the user
	{


		std::cout << "Enter an integer and it will be converted to Roman Numerals (1-3999)\n";
		std::cin >> number;

		if (number < 1 || number > 3999)
			std::cout << "Error, please enter another number between 1-3999\n";
			
		else
		{
			/*Algorithm to find thousands, hundreds, tens, ones, and unqiue Roman numerals*/
			M = number / 1000;
			number = number % 1000;
			CM = number / 900;
			number = number % 900;
			D = number / 500;
			number = number % 500;
			CD = number / 400;
			number = number % 400;
			C = number / 100;
			number = number % 100;
			XC = number / 90;
			number = number % 90;
			L = number / 50;
			number = number % 50;
			XL = number / 40;
			number = number % 40;
			X = number / 10;
			number = number % 10;
			IX = number / 9;
			number = number % 9;
			V = number / 5;
			number = number % 5;
			IV = number / 4;
			number = number % 4;
			I = number / 1;

			/*Filtering through the numbers using for loops based on the numbers/letters created above*/
			std::cout << "Roman numeral is ";
			for (k = 1; k <= M; k++)
				std::cout << "M";
			for (k = 1; k <= CM; k++)
				std::cout << "CM";
			for (k = 1; k <= D; k++)
				std::cout << "D";
			for (k = 1; k <= CD; k++)
				std::cout << "CD";
			for (k = 1; k <= C; k++)
				std::cout << "C";
			for (k = 1; k <= XC; k++)
				std::cout << "XC";
			for (k = 1; k <= L; k++)
				std::cout << "L";
			for (k = 1; k <= XL; k++)
				std::cout << "XL";
			for (k = 1; k <= X; k++)
				std::cout << "X";
			for (k = 1; k <= IX; k++)
				std::cout << "IX";
			for (k = 1; k <= V; k++)
				std::cout << "V";
			for (k = 1; k <= IV; k++)
				std::cout << "IV";
			for (k = 1; k <= I; k++)
				std::cout << "I";

			std::cout << "\n";

		}
		/*Asking for a repeat of the proccess*/
		std::cout << "To convert another number input Y or N\n";
		std::cin >> input;
	} while (input == 'Y' || input == 'y');

	if (input == 'N' || input == 'n')
	{
	
		std::cout << "You have entered N or n, program will now terminate\n";

		system("pause");
		return 0;
	}
}
