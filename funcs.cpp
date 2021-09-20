#include <iostream> //your video didn't say to add this but without this line, it was giving error so stack overflow suggested to add this line and it worked! 
#include "funcs.h"



void print_interval(int L, int U) {


    for (int i = L; i < U; i++) { 

        
        std::cout << i << ' '; 
        

    }
}