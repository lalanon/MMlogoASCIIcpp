//
// mmgenerator.cpp
// v0.1-alpha
//
// Author: Ivo Yordanov
// lalanon@gmail.com
//
// A "quick and dirty" brute forse logo generator.
// By changing the logoLeters constant, the number of consecutive "M"s can be changed.
// The logo is rbeing rendered directly to the screen, so no data structures are being used.
//
//
#include <iostream>

using namespace std;

const char solidSymbol = '*';
const char emptySymbol = '-';
const int logoLetters = 2;


int main( int argc, char* argv[]){

    int charWidth = 3;

    while (true) {
        cout << "Please enter an odd charachter width between 3 and 9999: ";
        cin >> charWidth;
        if ((charWidth > 2) && (charWidth < 10000) && (charWidth % 2 != 0)){
            break;
        } else {
            cout << "Invalid input!" << endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }

        for (int i = 0; i < (charWidth + 1)/2; i++) {
        for (int repeater = 0; repeater < logoLetters; repeater++ ) {
            for (int j = 0; j <= charWidth - i-1; j++) {
                cout << emptySymbol;
            }
            for (int j = 0; j <= charWidth + (i*2) -1; j++) {
                cout << solidSymbol;
            }
            for (int j = 0; j <= charWidth - (i*2) -1; j++) {
                cout << emptySymbol;
            }
            for (int j = 0; j <= charWidth + (i*2) -1; j++) {
                cout << solidSymbol;
            }
            for (int j = 0; j <= charWidth - i-1; j++) {
                cout << emptySymbol;
            }

        }

        cout << endl;  
    }

    for (int i = 0; i < (charWidth + 1)/2; i++) {
        for (int repeater = 0; repeater < logoLetters; repeater++ ) {
            for (int j = 0; j < (charWidth-1)/2-i; j++) { // lowerOuterSpace
                cout << emptySymbol;
            }
            for (int j = 0; j < charWidth; j++) { // lowerOuterColumn
                cout << solidSymbol;
            }
            for (int j = 0; j < i*2+1; j++) { // lowerInnerSpace
                cout << emptySymbol;
            }
            for (int j = 0; j < charWidth*2 - i*2 -1; j++) { // lowerInnerColumn
                cout << solidSymbol;
            }
            for (int j = 0; j < i*2+1; j++) { // lowerInnnerSpace
                cout << emptySymbol;
            }
            for (int j = 0; j < charWidth; j++) { //lowerOuterColumn
                cout << solidSymbol;
            }
            for (int j = 0; j < (charWidth-1)/2-i; j++) { // lowerOuterSpace
                cout << emptySymbol;
            }
        }
        
        cout << endl;
    }

    return 0;
}




