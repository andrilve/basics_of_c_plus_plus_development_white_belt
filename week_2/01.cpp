#include <iostream>

int Factorial(int Num) {
    
    if (Num <= 1){
        return 1;
    }  
    else {
        return Num * Factorial(Num - 1);
    }
}

