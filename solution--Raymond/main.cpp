// assignment one
# include <iostream>
# include <string>
using std::cout;
using std::cin;
using std::string;
string roman(int number);
int main()
{
	string romanconversion;
	char reply;
	int num;
	do
	{
		cout << "Please enter an integer:";
		cin >> num;
		cout << "-->";
		
		romanconversion = roman(num);
		cout << romanconversion;
		cout << "would you like to convert another integer (Y/N)?";
		cin >> reply;
	} while (reply == 'y' || reply == 'Y');
		return 0;






}
string roman(int number)
{
	int m,d,c,x,v,l,i,verify;
	string storage="";
	m = number / 1000;
	d = (number% 1000) / 500;
	c = (number % 500) / 100;
	l = (number % 100) / 50;
	x = (number % 50) / 10;
	v = (number % 10) / 5;
	i = (number % 5);
	verify = m + d + c + l + x + v + i;
	if (verify > 0)
	{

		while (m > 0)
		{
			storage += 'M';
		m--;
		}
		while (d > 0)
		{
			storage += 'D';
			d--;
		}
		while (c > 0)
		{
			storage += 'C';
			c--;
		}
		while (l > 0)
		{
			storage += 'L';
			l--;
		}
		while (x > 0)
		{
			storage += 'X';
			x--;
		}
		while (v > 0)
		{
			storage += 'V';
				v--;
		}
		while (i > 0)
		{
			storage += 'I';
			i--;
		}
		return storage;
	}

}
