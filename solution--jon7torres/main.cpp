//
//  main.cpp
//  assignment 1
//
//  Created by Jonathan Torres on 1/26/16.
//  Copyright © 2016 Jonathan Torres. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

int main() {
    
    int input, part;
    std::string numeral;
    char yes;
    
    
    do {
        
    std::cout << "Please enter an integer: ";
    std::cin >> input;
    
        if(input >= 1000 ){
            
            part = (input/1000);
            for (int i=0; i < part; i++){
                numeral += 'M';
            }
            input %= 1000;
            }
        
        if( input >= 100){
            part = (input/100);
            
            if (part ==9){
                numeral += "CM";
            }
            else if (part >=5){
                numeral += 'D';
                
                for (int i =0; i < part; i++) {
                    numeral += 'C';
                }
                
            }
            else if(part == 4){
                numeral += "CD";
            }
            else if (part >= 1) {
                
                for (int i=0; i < part; i++){
                    numeral += 'C';
                }
            }
            
            input %=100;
            
            if (input >= 10){
                part = (input/10);
                
                if (part == 9){
                    numeral += "XC";
                }
                else if (part >= 5){
                    numeral += 'L';
                    
                    for (int i=0; i <part-5; i++){
                        numeral += 'X';
                    }
                }
                else if (part ==4) {
                    numeral += "XL";
                }
                else if (part >=1){
                    for (int i =0; i < part; i++){
                        numeral += 'X';
                    }
                }
                input %=10;
            }
            
            if(input >=1){
                part = input;
                
                if (part ==9){
                    numeral += "IX";
                }
                else if (part >=5){
                    numeral += 'V';
                    
                    for (int i =0; i<input-5; i++){
                        numeral += 'I';
                    }
                        
                    
                }
                else if (part == 4){
                    numeral += "IV";
                }
                else if (part >=1){
                    for (int i =0; i<part;i++){
                        numeral += 'I';
                    }
                }
        
            std::cout<< numeral << std::endl;
            }
        }
    
    
        std::cout << "Would you like to convert another integer (Y/N)?";
        std::cin >>yes;
    }

    while (yes == 'y' || yes == 'Y' );

}
