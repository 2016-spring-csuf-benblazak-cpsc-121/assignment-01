#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void convert(int num);

int main()
{
	int input;
	char response;

	do {
		cout << "Enter the number you want to convert.";
		cin >> input;
		convert(input);

		cout << "Do you want to enter another number?" << endl;
		cin >> response;
	}
	while (response == 'Y' || response == 'y');
	
		
	if (response == 'N' || response == 'n'){
		cout << "thank you!";
	}

	system("Pause");
	return 0;
	
}

void convert(int x) {

	for (int i = 0; i < (x / 1000); i++) {
		cout << 'M';
	}
	x %= 1000;
	if (x >= 900) {
		cout << "CM";
		x %= 900;
	}
	
	if (x >= 500) {
		cout << 'D' ;
		x %= 500;
	}

	if (x >= 400) {
		cout << "CD";
		x %= 400;
	}
	for (int i = 0; i < (x / 100); i++) {
		cout << 'C' ;	
	}
	x %= 100;
	if (x >= 90) {
		cout << "XC" ;
		x %= 90;
	}
	if (x >= 50) {
		cout << 'L';
		x %= 50;
	}
	if (x >= 40) {
		cout << "XL";
		x %= 40;
	}
	for (int i = 0; i < (x / 10); i++) {
		cout << 'X';
	}
	x %= 10;
	if (x >= 9) {
		cout << "IX";
		x %= 9;
	}
	if (x >= 5) {
		cout << 'V';
		x %= 5;
	}
	if (x >= 4) {
		cout << "IV";
		x %= 4;
	}
	for (int i = 0; i < (x / 1); i++) {
		cout << 'I';
	}
	x %= 1;
}
