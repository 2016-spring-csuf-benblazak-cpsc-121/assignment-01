// Mohammad Baseer
// Reference Daniel
// Computer Science 121 
// Ben Blazak
// 2/2/16
#include<iostream>
using namespace std;

int load();
int calc(int);

int main()
{

	 load();
	return 0;
}
	
	
int load()
{
	int ArabicNumeral;
	char yes;
	do {
		cout << "Please enter an integer\n";
		cin >> ArabicNumeral;
		calc(ArabicNumeral);

		if (ArabicNumeral < 1 || ArabicNumeral > 3999)
		{
			cout << "Please try again\n";
			continue;
		}

		cout << "Would you like to convert another integer(Y/N)\n";
		cin >> yes;
	} while (yes == 'Y' || yes == 'y');
	return 0;
}

int calc(int number)
{
	for (; number >= 1000; number -= 1000)
		cout << "M";
	for (; number >= 900; number -= 900)
		cout << "CM";
	for (; number >= 500; number -= 500)
		cout << "D";
	for (; number >= 400; number -= 400)
		cout << "CD";
	for (; number >= 100; number -= 100)
		cout << "C";
	for (; number >= 90; number -= 90)
		cout << "XC";
	for (; number >= 50; number -= 50)
		cout << "L";
	for (; number >= 40; number -= 40)
		cout << "XL";
	for (; number >= 10; number -= 10)
		cout << "X";
	for (; number >= 9; number -= 9)
		cout << "IX";
	for (; number >= 5; number -= 5)
		cout << "V";
	for (; number >= 4; number -= 4)
		cout << "IV";
	for (; number >= 1; number -= 1)
		cout << "I";
	return 0;
}

