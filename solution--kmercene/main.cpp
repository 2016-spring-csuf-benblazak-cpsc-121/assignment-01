//credit belongs to the work of Professor Ben Blazak
//This program is designed to convert arabic numerals into Roman Numerals.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

void convert();

int num;

int main() {
	int ans;
	convert();
	cout << "Would you like to convert another integer?(Y/N)" << endl;
	cin >> ans;
	if (ans == 'y' || ans == 'Y'){
		convert();
	}
	else if (ans == 'n' || ans == 'N'){
		return 0;
	}
	else{
		cout << "Invalid entry. Please enter: Y/N" << endl;
	}
	return 0;
}

void convert(){
	int i, MCM, M, CM, D, CC, CL, C, XC, L, XL, X, I;
	const int values[] = {MCM, M, CM, D, CC, CL, C, XC, L, XL, X, I};
	const string numerals[] = {1900, 1000, 900, 500, 200, 150, 100, 90, 50, 40, 10, 1};
	string ret = " ";
	while (num >= values [i]){
		ret += numerals[i];
		num -= values[i];
		return ret;
	}
	cout << "Enter an integer to convert into Roman Numerals: ";
	cin >> num;
	if (num <= 0){
		cout << "Invalid. Integer must be greater than zero." << endl;
		convert();
	}
	else{											//converting process
		for(int i = 0; i <= 13; i++)				//Where numbers get converted
			cout << "i";							//into roman numerals
		for (int i = 1; num >= i; num -= 1)
			cout << "I";
		for (int i = 10; num >= i; num -= 10)
			cout << "X";
		for (int i = 40; num >= i; num -= 40)
			cout << "XL";
		for (int i = 50; num >= i; num -= 50)
			cout << "L";
		for (int i = 90; num >= i; num -= 90)
			cout << "XC";
		for (int i = 100; num >= i; num -= 100)
			cout << "C";
		for (int i = 150; num >= i; num -= 150)
			cout << "CL";
		for (int i = 200; num >= i; num -= 200)
			cout << "CC";
		for (int i = 500; num >= i; num -= 500)
			cout << "D";
		for (int i = 900; num >= i; num -= 900)
			cout << "CM";
		for (int i = 1000; num >= i; num -= 1000)
			cout << "M";
		for (int i = 1900; num >= i; num -= 1900)
			cout << "MCM";
	}
		return;
	}
