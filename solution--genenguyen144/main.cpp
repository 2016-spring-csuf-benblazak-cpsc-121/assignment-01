#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string convert(int i);

int main()
{
	while (true)
	{
		char n;
		int i;
		cout << "enter a number " << endl;
		cin >> i;
		cout << convert(i) << endl;
		cout << "would you like to enter another number " << endl;
		cin >> n;
		if (n == 'n' || n == 'N')
		{
			break;
		}
	}
	
	
	return 0;

}
