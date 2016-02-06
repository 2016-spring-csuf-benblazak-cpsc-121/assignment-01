//Asad siddiqui
//CWID: 890731946
//Program will take a interger and display as a roman numeral
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int rome(char);
string roman0(int);
string roman1(int);
string roman2(int);
string roman3(int);


int main() {

	string num;
	
	char repeat = 'Y';
	 
	while (repeat == 'Y') {
		string roman = "";
		cout << "Please enter an integer: ";
		cin >> num;

		if (size == 1) {
			int rome0 = number(num[0]);

			convert += roman0(zero);
		}
		else if (size == 2) {
			int rome0 = number(num[0]);
			int rome1 = number(num[1]);

			convert += roman0(zero);
			convert += roman1(one);
		}
		else if(size == 3){
			int  rome0 = number(num[0]);
			int  rome1 = number(num[1]);
			int  rome2 = number(num[2]);

			convert += roman0(zero);
			convert += roman1(one);
			convert += roman2(two);
		}
		else if (size == 4) {
			int rome0 = number(num[0]);
			int rome1 = number(num[1]);
			int rome2 = number(num[2]);
			int rome3 = number(num[3]);

			convert += roman0(three);
			convert += roman1(two);
			convert += roman2(one);
			convert += roman3(zero);
		}
		cout << convert << endl;
		cout << "do you want to convert another integer(Y or N)?";
		cin >> ans;
		}
	system("pause");
		return 0;
	}
		if (a == 48){
		return 0;
		else if (a == 49)
		return 1;
		else if (a == 50)
		return 2;
		else if (a == 51)
		return 3;
		else if (a == 52)
		return 4;
		else if (a == 53)
		return 5;
		else if (a == 54)
		return 6;
		else if (a == 55)
		return 7;
		else if (a == 56)
		return 8;
		else if (a == 57)
		return 9;
		}
		string roma0(int zero) {
			string roman = "";
			if (one != 0) {
				while (one < 4 && one > 0) {
					romam += "I";
					one--;
				}
			}
		}
