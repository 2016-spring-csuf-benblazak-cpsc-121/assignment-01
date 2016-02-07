#include <iostream>
void romanNumConv(int num);
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num;
	char choice;
	do {
	  int num;
		cout << "Please enter an integer: ";
		cin >> num;
		cout << "--> ";
		
		romanNumConv(num);
		cout << "\n""\n";
		
		cout << "Would you like to convert to another integer (Y/N)? ";
		cin >> choice;
		cout << "\n";
	} while (choice == 'y' || choice == 'Y');
	return 0;
}
void romanNumConv(int num) {

	int n = num;
	if (n > 3999 || n < 1) {
		cout << "Error";
		return;
	}
	for (; n >= 1000; n -= 1000) {
		std::cout << "M";
	}
	for (; n >= 900; n -= 900) {
		std::cout << "CM";
	}
	for (; n >= 500; n -= 500) {
		std::cout << "D";
	}
	for (; n >= 400; n -= 400) {
		std::cout << "CD";
	}
	for (; n >= 100; n -= 100) {
		std::cout << "C";
	}
	for (; n >= 90; n -= 90) {
		std::cout << "XC";
	}
	for (; n >= 50; n -= 50) {
		std::cout << "L";
	}
	for (; n >= 40; n -= 40) {
		std::cout << "XL";
	}
	for (; n >= 10; n -= 10) {
		std::cout << "X";
	}
	for (; n >= 9; n -= 9) {
		std::cout << "IX";
	}
	for (; n >= 5; n -= 5) {
		std::cout << "V";
	}
	for (; n >= 4; n -= 4) {
		std::cout << "IV";
	}
	for (; n >= 1; n -= 1) {
		std::cout << "I";
	}
}
