/*----------------------------------------------------------
*copyright & copy, 2016 Jose Gotuzzo <gotuzzoj23@gmail.com>
*-------------------------------------------------------- - */
/**
* A program to convert integers to roman numerals.
*/



#include <iostream>
#include <string>
#include <cctype>

void convertnum(int);

int main() {
	int num;
	char question;
	std::cout << "Please enter an integer: ";
	std::cin >> num;
	convertnum(num);
	std::cout << "Would you like to convert another integer (Y/N)? ";
	std::cin >> question;
	while (toupper(question) != 'N' && toupper(question) != 'Y') {
		std::cout << "Invalid answer, please try again. \n";
		std::cout << "Would you like to convert another integer (Y/N)? ";
		std::cin >> question;
	}
	while (toupper(question) == 'Y') {
		std::cout << "Please enter an integer: ";
		std::cin >> num;
		convertnum(num);
		std::cout << "Would you like to convert another integer (Y/N)? ";
		std::cin >> question;
		while (toupper(question) != 'N' && toupper(question) != 'Y') {
			std::cout << "Invalid answer, please try again. \n";
			std::cout << "Would you like to convert another integer (Y/N)? ";
			std::cin >> question;
		}
		if (toupper(question) == 'N') {
			EXIT_SUCCESS;
		}
	}
	if (toupper(question) == 'N') {
		EXIT_SUCCESS;
	}

		return 0;
	}

	void convertnum(int num) {
		int I, V, X, L, C, D, M, IV, IX, XL, XC, CD, CM;
		int j; // counter
		M = num / 1000;
		num = num % 1000;
		for (j = 0; j < M; j++) {
			std::cout << "M";
		}
		CM = num / 900;
		num = num % 900;
		for (j = 0; j < CM; j++) {
			std::cout << "CM";
		}
		D = num / 500;
		num = num % 500;
		for (j = 0; j < D; j++) {
			std::cout << "D";
		}
		CD = num / 400;
		num = num % 400;
		for (j = 0; j < CD; j++) {
			std::cout << "CD";
		}
		C = num / 100;
		num = num % 100;
		for (j = 0; j < C; j++) {
			std::cout << "C";
		}
		XC = num / 90;
		num = num % 90;
		for (j = 0; j < XC; j++) {
			std::cout << "XC";
		}
		L = num / 50;
		num = num % 50;
		for (j = 0; j < L; j++) {
			std::cout << "L";
		}
		XL = num / 40;
		num = num % 40;
		for (j = 0; j < XL; j++) {
			std::cout << "XL";
		}
		X = num / 10;
		num = num % 10;
		for (j = 0; j < X; j++) {
			std::cout << "X";
		}
		IX = num / 9;
		num = num % 9;
		for (j = 0; j < IX; j++) {
			std::cout << "IX";
		}
		V = num / 5;
		num = num % 5;
		for (j = 0; j < V; j++) {
			std::cout << "V";
		}
		IV = num / 4;
		num = num % 4;
		for (j = 0; j < IV; j++) {
			std::cout << "IV";
		}
		I = num / 1;
		for (j = 0; j < I; j++) {
			std::cout << "I";
		}
		std::cout << "\n";
	}
