#include <iostream>
void romanNumConv(int num);
int main() {

	char choice;
	
	do {
		std::cout << "Please enter an integer: ";
		int num;
		std::cin >> num;

		romanNumConv(num); //call function

		std::cout << "\n";
		std::cout << "Would you like to convert to another integer (Y/N)? ";
		std::cin >> choice;
		std::cout << "\n";
		
	} while (choice == 'y' || choice == 'Y');

	//end program

	system("pause");
	return 0;
}
void romanNumConv(int num) {
	for (int m = 1000; num >= 1000; num -= 1000) {
		std::cout << "M";
	}
	for (int cm = 900; num >= 900; num -= 900) {
		std::cout << "CM";
	}
	for (int d = 500; num >= 500; num -= 500) {
		std::cout << "D";
	}
	for (int cd = 400; num >= 400; num -= 400) {
		std::cout << "CD";
	}

	for (int c = 100; num >= 100; num -= 100) {
		std::cout << "C";
	}
	for (int xc = 90; num >= 90; num -= 90) {
		std::cout << "XC";
	}
	for (int l = 50; num >= 50; num -= 50) {
		std::cout << "L";
	}
	for (int xl = 40; num >= 40; num -= 40) {
		std::cout << "XL";
	}
	for (int x = 10; num >= 10; num -= 10) {
		std::cout << "X";
	}
	for (int ix = 9; num >= 9; num -= 9) {
		std::cout << "IX";
	}
	for (int v = 5; num >= 5; num -= 5) {
		std::cout << "V";
	}
	for (int iv = 4; num >= 4; num -= 4) {
		std::cout << "IV";
	}
	for (int i = 1; num >= 1; num -= 1) {
		std::cout << "I";
	}
	std::cout << "\n";
}
