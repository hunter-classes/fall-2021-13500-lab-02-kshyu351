/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2D

Write a program fibonacci.cpp, which uses an
 array of ints to compute and print all 
 Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

int main() {

    int fib[60]; 
    fib[0] = 0;
    fib[1] = 1;
    std::cout << fib[0] << std::endl;
     std::cout << fib[1] << std::endl;

    for(int i = 2; i <= 59; i++) { 
        
        fib[i] = fib[i-1] + fib[i-2]; 
        std::cout << fib[i] << std::endl;


    }
}

/* the numbers should continue to be diverging but
as it approaches larger numbers, the max value an
integer can hold is exceeded, forcing the computer
to resort to the mininum value instead /* 
