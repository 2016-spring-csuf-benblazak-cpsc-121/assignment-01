/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Moises Leon<ml_70@fullerton.edu> Moises Leon
CCWID:890679137
Visual Studios
Assignment 1
Arabic to Roman Numeral Converter
* ------------------------------------------------------------------------- */
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int num;
int j; // Counter
int m; // 1000 value
int d; // 500 value
int c; // 100 value
int l; // 50 value
int x; // 10 value
int ix; // 9 value
int v; // 5 value
int iv; // 4 value
int i; // 1 value
int cm; // 900 value
int cd; // 400 value 
int xc; // 90 value 
int xl; // 40 value

void roman() {
	cout << "Roman Numeral: " << endl;
	// Outputs roman numeral depending on value of variable
	for (j = 1; j <= m; j++)
		cout << "M";
	for (j = 1; j <= cm; j++)
		cout << "CM";
	for (j = 1; j <= d; j++)
		cout << "D";
	for (j = 1; j <= cd; j++)
		cout << "CD";
	for (j = 1; j <= c; j++)
		cout << "C";
	for (j = 1; j <= xc; j++)
		cout << "XC";
	for (j = 1; j <= l; j++)
		cout << "L";
	for (j = 1; j <= xl; j++)
		cout << "XL";
	for (j = 1; j <= x; j++)
		cout << "X";
	for (j = 1; j <= ix; j++)
		cout << "IX";
	for (j = 1; j <= v; j++)
		cout << "V";
	for (j = 1; j <= iv; j++)
		cout << "IV";
	for (j = 1; j <= i; j++)
		cout << "I";
	cout << endl;
}
int main() {

	char choice = 'y';
	while (choice == 'y' || choice == 'Y') {
		cout << "Please Enter Arabic Number." << endl;
		cin >> num;
		// Check if Number is between ranges 0-3999
	while (num <= 0 || num > 3999) {
			cout << "Error Invalid Number Please Enter a Number from 1-3999." << endl;
			cin >> num;
		}
		// Gives variable a value depending on number entered
		m = num / 1000;
		num = num % 1000;

		cm = num / 900;
		num = num % 900;

		d = num / 500;
		num = num % 500;

		cd = num / 400;
		num = num % 400;

		c = num / 100;
		num = num % 100;

		xc = num / 90;
		num = num % 90;

		l = num / 50;
		num = num % 50;

		xl = num / 40;
		num = num % 40;

		x = num / 10;
		num = num % 10;

		ix = num / 9;
		num = num % 9;

		v = num / 5;
		num = num % 5;

		iv = num / 4;
		num = num % 4;

		i = num;

		roman();

		cout << "Rerun Program? Press Y or y" << endl;
		cin >> choice;



	}















	return 0;
}




