// myFunction.h
#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <stdexcept>

//********************************************************************************

// Defines
int add(int x, int y);
int subtract(int x, int y);
int divide(int x, int y);


//********************************************************************************

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int divide(int x, int y) {
    if (y == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return x / y;
}   


#endif // MYFUNCTIONS_H


