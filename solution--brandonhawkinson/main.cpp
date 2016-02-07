//
//  main.cpp
//  Assignment1
//
//  Created by Brandon Hawkinson on 1/28/16.
//  Copyright © 2016 Brandon Hawkinson. All rights reserved.
//


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool userRepeatProgram();
void cinCleaner();

int main() {

    bool runProgram = true; //loops the program
    bool inputValidated; //loops the user's input until a valid input is made
    string userRepeat; // holds the user's input to repeat the program
    int userInput; //holds the user's input for the integer
    string ones[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}; //ones place holders
    string tens[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}; //tens place holder
    string hundreds[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; //hundreds place holder
    string thousands[4] = { "", "M", "MM", "MMM"}; // thousands place holder
    
    while (runProgram == true) { //this while loop loops the program
        cout << "Please enter an integer to be converted to Roman Numerals: "; //prompts the user for input
        cin >> userInput; //takes user input
        while (!cin) { //while the istream fails clear it and prompt the user to renter their input.
            cinCleaner();
            cout << endl << "You have entered something that is not a number, this is not valid. Please enter an integer between 1 - 3999: ";
            cin >> userInput;
        }
        inputValidated = false;
        
        while (inputValidated == false) {

            if (userInput <= 0) { //checks if the input is <= 0
                cout << endl << "You have entered a number that is 0 or below, this is not valid. Please enter an integer between 1 - 3999: ";
                cin >> userInput;
            } else if (userInput >= 4000) { //checks if input is >= 4000
                cout << endl << "You have entered a number that is 4000 or above, this is not valid. Please enter an integer between 1 - 3999: ";
                cin >> userInput;

            }
            else if(userInput > 0, userInput < 4000) {
                inputValidated = true;
            }
            
        }
        cout << endl << thousands[userInput / 1000 % 10] + hundreds[userInput / 100 % 10]+ tens[userInput / 10 % 10]+ ones[userInput % 10] << endl; //the algorithm takes the number of the proper number in the proper location, accessing them via the arrays.
        
        runProgram = userRepeatProgram();
    }
    return 0; //closes program
}

void cinCleaner() {
    cin.clear();
    cin.ignore(10000,'\n');
}


bool userRepeatProgram() {
    bool repeatValidation = false;
    
    while (!repeatValidation) {
    string userRepeat;
    cout << "would you like to enter another integer? (Y/N): "; //prompts the user if user wants to do it again
    cin >> userRepeat; //takes user answer
    
        while (!cin) { //while the istream fails clear it and prompt the user to renter their input.
            cin.clear();
            cin.ignore(10000,'\n');
            cout << endl << "You have entered something invalid, please enter Y or N: ";
            cin >> userRepeat;
        }
    
        if (userRepeat == "Y" || userRepeat == "y") { //checks if Y
            repeatValidation = true;
            return true; // repeats program
        }
        else if (userRepeat == "N" || userRepeat == "n") { //checks if N
            repeatValidation = false;
            return false; //closes the loop
        }
    }
    return false;
}
