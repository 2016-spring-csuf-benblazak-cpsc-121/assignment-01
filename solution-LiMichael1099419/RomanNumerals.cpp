#include<iostream>
#include<string>

int main()
{
	int I, IV, V, IX, X, XL, XC, L, C, CD, D, CM, M;
	int test;
	std::string roman;
	char loop;
	do {
		std::cout << " Insert an integer (1-3999) to convert to a Roman Numeral: ";
		std::cin >> test;
		std::cout << "\n";

		if (test < 1 || test > 3999)
		{
			std::cout << " You have enter an invalid responses. \n";
		}
		else
		{
		std::cout << "The Roman Numeral for " << test << " is ";
			for (M = 1000; M <= test; test -= 1000)
				std::cout << "M";
			for (CM = 900; CM <= test; test -= 900)
				std::cout << "CM";
			for (D = 500; D <= test; test -= 500)
				std::cout << "D";
			for (CD = 400; CD <= test; test -= 400)
				std::cout << "CD";
			for (C = 100; C <= test; test -= 100)
				std::cout << "C";
			for (XC = 90; XC <= test; test -= 90)
				std::cout << "XC";
			for (L = 50; L <= test; test -= 50)
				std::cout << "L";
			for (XL = 40; XL <= test; test -= 40)
				std::cout << "XL";
			for (X = 10; X <= test; test -= 10)
				std::cout << "X";
			for (IX = 9; IX <= test; test -= 9)
				std::cout << "IX";
			for (V = 5; V <= test; test -= 5)
				std::cout << "V";
			for (IV = 4; V <= test; test -= 4)
				std::cout << "IV";
			for (I = 1; I <= test; test -= 1)
				std::cout << "I";
			std::cout << "\n";
		}
		std::cout << "\nWould you like to convert another integer into Roman numeral? (y/n) \n\n";
		std::cin >> loop;
		std::cout << "\n";


	} while (loop == 'Y' || loop == 'y');
	if (loop == 'N' || loop == 'n')
	{
		return 0;
	}
	


	std::cin.get();
	std::cin.get();

}
