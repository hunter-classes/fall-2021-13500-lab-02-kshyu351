
/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2B

Write a program print-interval.cpp that asks the user 
to input two integers L and U (representing the lower 
and upper limits of the interval), and print out all 
integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>

int main() {

    std::cout << "Please enter L: " << std::endl; 
    int L; 
    std::cin >> L; 

    std::cout << "Please enter U: " << std::endl;
    int U;
    std::cin >> U;



    for (int i = L; i < U; i++) { 
        std::cout << i << " "; 

    }
}


    

