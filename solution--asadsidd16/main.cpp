//Asad siddiqui
//CWID: 890731946
//Program will take a interger and display as a roman numeral
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string convert(int);
int main()
{
	int num;
	char repeat = 'y';
	while (toupper(repeat) == 'Y')
	{
		cout << "Enter an integer: ";
		cin >> num;

		string ans = convert(num);
		cout << ans << endl;

		cout << "Would you like to enter another number? ";
		cin >> repeat;
	}


	system("pause");
	return 0;
}

string convert(int n)
{
	string ans = "";
	string roman[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "I" };
	int number[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 1 };

	while (n >= number[0]){
	  
		ans += roman[0];
		n -= number[0];
	}
	while (n >= number[1]){
	  
		ans += roman[1];
		n = n - number[1];
	}
	while (n >= number[2]){
	  
		ans += roman[2];
		n = n - number[2];
	}
	while (n >= number[3]){
	  
		ans += roman[3];
		n = n - number[3];
	}
	while (n >= number[4]){
	  
		ans += roman[4];
		n = n - number[4];
	}
	while (n >= number[5]){
	  
		ans += roman[5];
		n = n - number[5];
	}
	while (n >= number[6]){
	  
		ans += roman[6];
		n = n - number[6];
	}
	while (n >= number[7]){
	  
		ans += roman[7];
		n = n - number[7];
	}
	while (n >= number[8]){
	  
		ans += roman[8];
		n = n - number[8];
	}
	while (n >= number[9]){
	  
		ans += roman[9];
		n = n - number[9];
	}
	while (n >= number[10]){
	  
		ans += roman[10];
		n = n - number[10];
	}
	while (n >= number[11]){
	  
		ans += roman[11];
		n = n - number[11];
	}
	return ans;
}
