/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A


Write a program valid.cpp, 
which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should 
keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.

*/

#include <iostream>
using namespace std;
int main() {
    cout << "Please enter an integer: " << endl; 
    int integer; 
    cin >> integer; 

    while (!((integer < 100) && (integer > 0))) { 
        cout << "Please re-enter: " << endl; 
        cin >> integer; 
    } 

    cout << "Number squared is: " << integer*integer << endl; 
}