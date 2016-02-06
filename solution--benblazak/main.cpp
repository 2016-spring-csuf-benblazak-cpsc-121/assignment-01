#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){

	string ronumeral;
	int num;
	int piece;
	char choice;
	
	do {

		cout << "Please type in number: "<< endl;
		cin >> num;

		if ((num >= 4000) || (num <= 0)) {
			cout << "invalid number entered, Please try again. " << endl;

		}
		else {
			// get rid of thousands
			if (num >= 1000) {
				piece = (num / 1000);
				for (int i = 0; i < piece; i++) {
					ronumeral += "M";
				}
				num %= 1000;
			}
			// get rid of hundreds
			if (num >= 100) {
				piece = (num / 100);

				if (piece == 9) {
					ronumeral += "CM";
				}
				else if (piece >= 5) {
					ronumeral += 'D';

					for (int i = 0; i < piece - 5; i++) {
						ronumeral += 'C';
					}
				}
				else if (piece == 4) {
					ronumeral += "CD";
				}
				else if (piece >= 1) {
					for (int i = 0; i < piece; i++) {
						ronumeral += 'C';
					}
				}
				num %= 100;
			}
			//get rid of tens
			if (num >= 10) {
				piece = (num / 10);
				if (piece == 9) {
					ronumeral += "XC";
				}
				else if (piece >= 5) {
					ronumeral += 'L';
					for (int i = 0; i < piece - 5; i++) {
						ronumeral += 'X';
					}

				}
				else if (piece == 4) {
					ronumeral += "XL";
				}
				else if (piece >= 1) {
					for (int i = 0; i < piece; i++) {
						ronumeral += 'X';
					}
				}


				num %= 10;
			}

			//convert ones
			if (num >= 1) {
				piece = num;
				if (piece == 9) {
					ronumeral += "IX";
				}
				else if (piece >= 5) {
					ronumeral += "V";
					for (int i = 0; i < piece - 5; i++) {
						ronumeral += 'I';
					}

				}
				else if (piece == 4) {
					ronumeral += "IV";
				}
				else if (piece >= 1) {
					for (int i = 0; i < piece; i++) {
						ronumeral += 'I';

					}
				}

			}
			
		}
		cout << " Roman Numeral is : " << ronumeral << endl;
		// ask to conver another number

		cout << "Would you like to convert another number Y/N?" << endl;
		cin >> choice;
	
	} while (choice == 'y' || choice == 'Y');

	

	system("pause");
	return 0;
}
