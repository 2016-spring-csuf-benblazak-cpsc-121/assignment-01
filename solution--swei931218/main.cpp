/*cpsc 121 assignment 1 Created by Yi Sui on 1/25/16.
 Copyright © 2016 Yi Sui.<swei931218@csu.fullerton.edu>
 Released under the [MIT License] (http://opensource.org/licenses/MIT)*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void converter(int);

int main()// user interaction
{
    int original_integer;
    char choice;
    do
    {cout << "Please enter an integer: ";
        cin >> original_integer;
        converter(original_integer);
        cout << "Would you like to convert another integer (Y/N)?";
        cin >> choice;}while (choice=='Y'||choice=='y');
    while (choice=='N'||choice=='n'){return 0;}
    
    return 0;
}

void converter(int temp)
{   
    //check
    if (temp<1||temp >3999){
        cout<<"Invalid input!"<<endl;return ;}
    
    /*calculating the numbers of each digit */
    int m=temp/1000;temp=temp%1000;//10^3
    int c=temp/100;temp=temp%100;//10^2
    int x=temp/10;temp=temp%10;//10^1
    int i=temp%10;//10^0
    
    //10^3
    for(int n=1;n<=m;n++){cout<<"M";}
    //10^2
    if (c<=3){
        for(int n=1;n<=c;n++){
            cout<<"C";}}
    if(c==4){cout<<"CD";}
    if(c>=5&&c<9){
        cout<<"D";
        for(int n=1;n<=c-5;n++){
            cout<<"C";}}
    if(c==9){cout<<"CM";}
    //10^1
    if (x<=3){
        for(int n=1;n<=x;n++){
            cout<<"X";}}
    if(x==4){cout<<"XL";}
    if(x>=5&&x<9){
        cout<<"L";
        for(int n=1;n<=x-5;n++){
            cout<<"X";}}
    if(x==9){cout<<"XC";}
    //10^0
    if (i<=3){
        for(int n=1;n<=i;n++){
            cout<<"I";}}
    if(i==4){cout<<"IV";}
    if(i>=5&&i<9){
        cout<<"V";
        for(int n=1;n<=i-5;n++){
            cout<<"I";}}
    if(i==9){cout<<"IX";}
    cout<<endl;}
