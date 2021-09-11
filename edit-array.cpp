/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2C

Write a program edit-array.cpp that creates
 an array of 10 integers, and provides the user 
 with an interface to edit any of its elements. 
*/

#include <iostream>

int main() {

    int myData[10];
    int index2;
         for (int i = 0; i <= 8; i++) { 
            myData[i] = 1; 
            std::cout << myData[i] << " "; 
        }
        myData[9] = 1; 
        std::cout << myData[9] << std::endl;

    do { 
   

    

        std::cout << "\nInput index: " << std::endl; 
        int index; 
        std::cin >> index; 

        std::cout << "Input value: " << std::endl; 
        int value;
        std::cin >> value; 

        if ((index <= 9) && (index >= 0)) { 

             myData[index] = value; 

            for (int i = 0; i <= 9; i++) { 
                std::cout << myData[i] << " "; 
            }
            std::cout << std::endl; 

            

        }
        else { 
            std::cout << "Index out of range. Exit." << std::endl; 
            return 0;
        }
        index2 = index; 
    } while ((index2 <= 9) && (index2 >= 0)); 
  }

    