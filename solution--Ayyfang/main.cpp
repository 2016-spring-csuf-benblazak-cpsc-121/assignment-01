#include <iostream>;
using std::cout;
using std::cin;
using std::endl;
#include <string>;
using std::string;

string convert(int num);

int main() {

	int num;
	char ans;
	
	while (true) {
		cout << "Please enter an integer: ";
		cin >> num;

		if ((num > 3999) || (num < 1)) {
			cout << "invalid number" << endl;
		}
		else {
			cout << convert(num) << endl;

			cout << endl;

			cout << "Would you like to convert another (Y/N)? ";
			cin >> ans;
			if (ans == 'n' || ans == 'N')
				break;
		}
	}
	
	return 0;

}
string convert(int num) {
	const string roman[]={ "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX","V", "IV", "I" };
	const int values[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

	string line = " ";

	for (int i = 0; i < 13; i++) {
		while (num >= values[i]) {
			line += roman[i];
			num -= values[i];
		}
	}
	return line;
}
