//--------------------------------------------------------------------------
//Copyright &copy; 2016 Patrick Tayag <patricktayag16@csu.fullerton.edu>
//Released under the [MIT License] (http://opensource.org/licenses/MIT)
//--------------------------------------------------------------------------

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
int loop = 1;
do {
    
double num;
int intnum, M, D, C, L, X, V, I, N; //Roman Numerals
char answer;  //Yes/No

cout << "Enter a number:";
cin >> num;
intnum = (int)num;

M = intnum / 1000;   //Conversions
D = ((intnum%1000)/500);
C = ((intnum%500)/100);
L = ((intnum%100)/50);
X = ((intnum%50)/10);
V = ((intnum%10)/5);
I = (intnum%5);
N = M+D+C+L+X+V+I;

while (N > 0) 
{
      
  if (M > 0)
      {
      cout << "M";
      M--;
      N--;
      }

   else if (D > 0)
      {
      cout << "D";
      D--;
      N--;
      }
    else if (C > 0)
      {
      cout << "C";
      C--;
      N--;
      }
    else if (L > 0)
      {
      cout << "L";
      L--;
      N--;
      }
    else if (X > 0)
      {
      cout << "X";
      X--;
      N--;
      }
    else if (V > 0)
      {
      cout << "V";
      V--;
      N--;
      }
    else if (I > 0)
      {
      cout << "I";
      I--;
      N--;
      }
}
cout<< "\nDo you wish to continue? Press y for yes and n for no"<< endl;  //Convert again?
cin>>answer; 

switch (answer) 
{ 
case 'Y': 
case 'y':
loop =1; 
break; 
case 'N': 
case 'n': 
loop =0; 
break; 
default: 
cout<<"\nThat is not a valid option, try again and press either y or n"<< endl; 
} 

} while (loop); 

return 0;
}
