#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int num;
char answer;
string rom;

void convert(int num)
{
	while (num >= 1 || num <= 3999)
	{
		while (num >= 1000)
		{
			rom += "M";
			num %= 1000;
			cout << rom;
			break;
		}
		while (num >= 900)
		{
			rom += "CM";
			num %= 900;
			cout << rom;
			break;
		}
		while (num >= 500)
		{
			rom += "D";
			num %= 500;
			cout << rom;
			break;
		}
		while (num >= 400)
		{
			rom += "CD";
			num %= 400;
			cout << rom;
			break;
		}
		while (num >= 100)
		{
			rom += "C";
			num %= 100;
			cout << rom;
			break;
		}
		while (num >= 90 && num <= 99)
		{
			rom += "XC";
			num %= 90;
			cout << rom;
			break;
		}
		while (num >= 50 && num <=89)
		{

			rom += "L";
			num %= 50;
			cout << rom;
			break;
		}
		while (num >= 40 && num < 49)
		{
			rom += "XL";
			num %= 40;
			cout << rom;
			break;
		}
		while (num >= 10 && num <= 39)
		{
			rom += "X";
			num %= 10;
			cout << rom;
			break;
		}
		while (num >= 9)
		{
			rom += "IX";
			num %= 9;
			cout << rom;
			break;
		}
		while (num >= 5 && num <= 8)
		{
			rom += "V";
			num %= 5;
			cout << rom;
			break;
		}
		while (num >= 4)
		{
			rom += "IV";
			num %= 4;
			cout << rom;
			break;
		}
		while (num >= 1 && num <=3)
		{
			rom += "I";
			num %= 1;
			cout << rom;
			break;
		}
		cout << endl;
		break;

	}
}

int main()
{
	while ('y' || 'Y')
	{
		cout << "Please enter an integer: ";
		cin >> num;
		convert(num);
		cout << rom << endl;
		cout << "Would you like to convert another (y/n)?";
		cin >> answer;
	}

	system("pause");
	return 0;
}
