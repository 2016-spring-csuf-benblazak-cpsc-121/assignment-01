
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

void romanNumeral();


int main(){

int number;
char answer;

do{
  cout << "Please enter an integer: ";
	//cin >> number;

	romanNumeral();

	cout << "\n Would you like to input another number (Y/N)? ";
	cin >> answer;
} while (answer == 'y' || answer == 'Y');

return 0;
}


void romanNumeral(){

string array;
cin >> array;
cout << "--> ";	

	if (array.length() == 4)




	{




		if (array[0] == '1')




			cout << "M";




		else if (array[0] == '2')




			cout << "MM";




		else if (array[0] == '3')




			cout << "MMM";










		if (array[1] == '1')




			cout << "C";




		else if (array[1] == '2')




			cout << "CC";




		else if (array[1] == '3')




			cout << "CCC";




		else if (array[1] == '4')




			cout << "CD";




		else if (array[1] == '5')




			cout << "D";




		else if (array[1] == '6')




			cout << "DC";




		else if (array[1] == '7')




			cout << "DCC";




		else if (array[1] == '8')




			cout << "DCCC";




		else if (array[1] == '9')




			cout << "CM";










		if (array[2] == '1')




			cout << "X";




		else if (array[2] == '2')




			cout << "XX";




		else if (array[2] == '3')




			cout << "XXX";




		else if (array[2] == '4')




			cout << "XL";




		else if (array[2] == '5')




			cout << "L";




		else if (array[2] == '6')




			cout << "LX";




		else if (array[2] == '7')




			cout << "LXX";




		else if (array[2] == '8')




			cout << "LXXX";




		else if (array[2] == '9')




			cout << "XC";










		if (array[3] == '1')




			cout << "I";




		else if (array[3] == '2')




			cout << "II";




		else if (array[3] == '3')




			cout << "III";




		else if (array[3] == '4')




			cout << "IV";




		else if (array[3] == '5')




			cout << "V";




		else if (array[3] == '6')




			cout << "VI";




		else if (array[3] == '7')




			cout << "VII";




		else if (array[3] == '8')




			cout << "VIII";




		else if (array[3] == '9')




			cout << "IX";




	}










	else if (array.length() == 3) {










		if (array[0] == '1')




			cout << "C";




		else if (array[0] == '2')




			cout << "CC";




		else if (array[0] == '3')




			cout << "CCC";




		else if (array[0] == '4')




			cout << "CD";




		else if (array[0] == '5')




			cout << "D";




		else if (array[0] == '6')




			cout << "DC";




		else if (array[0] == '7')




			cout << "DCC";




		else if (array[0] == '8')




			cout << "DCCC";




		else if (array[0] == '9')




			cout << "CM";










		if (array[1] == '1')




			cout << "X";




		else if (array[1] == '2')




			cout << "XX";




		else if (array[1] == '3')




			cout << "XXX";




		else if (array[1] == '4')




			cout << "XL";




		else if (array[1] == '5')




			cout << "L";




		else if (array[1] == '6')




			cout << "LX";




		else if (array[1] == '7')




			cout << "LXX";




		else if (array[1] == '8')




			cout << "LXXX";




		else if (array[1] == '9')




			cout << "XC";










		if (array[2] == '1')




			cout << "I";




		else if (array[2] == '2')




			cout << "II";




		else if (array[2] == '3')




			cout << "III";




		else if (array[2] == '4')




			cout << "IV";




		else if (array[2] == '5')




			cout << "V";




		else if (array[2] == '6')




			cout << "VI";




		else if (array[2] == '7')




			cout << "VII";




		else if (array[2] == '8')




			cout << "VIII";




		else if (array[2] == '9')




			cout << "IX";




	}
















	else if (array.length() == 2)




	{




		if (array[0] == '1')




			cout << "X";




		else if (array[0] == '2')




			cout << "XX";




		else if (array[0] == '3')




			cout << "XXX";




		else if (array[0] == '4')




			cout << "XL";




		else if (array[0] == '5')




			cout << "L";




		else if (array[0] == '6')




			cout << "LX";




		else if (array[0] == '7')




			cout << "LXX";




		else if (array[0] == '8')




			cout << "LXXX";




		else if (array[0] == '9')




			cout << "XC";










		if (array[1] == '1')




			cout << "I";










		else if (array[1] == '2')




			cout << "II";










		else if (array[1] == '3')




			cout << "III";










		else if (array[1] == '4')




			cout << "IV";










		else if (array[1] == '5')




			cout << "V";










		else if (array[1] == '6')




			cout << "VI";










		else if (array[1] == '7')




			cout << "VII";










		else if (array[1] == '8')




			cout << "VIII";










		else if (array[1] == '9')




			cout << "IX";




	}










	else if (array.length() == 1)




	{




		if (array[0] == '1')




			cout << "I";




		else if (array[0] == '2')




			cout << "II";




		else if (array[0] == '3')




			cout << "III";




		else if (array[0] == '4')




			cout << "IV";




		else if (array[0] == '5')




			cout << "V";




		else if (array[0] == '6')




			cout << "VI";




		else if (array[0] == '7')




			cout << "VII";




		else if (array[0] == '8')




			cout << "VIII";




		else if (array[0] == '9')




			cout << "IX";




	}






















}

