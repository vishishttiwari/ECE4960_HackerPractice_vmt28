/* 
 * File:   Hacker_Practice_2.cpp
 * Author: Vishisht
 *
 * Created on February 4, 2018, 11:31 PM
 */
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Hacker_Practice_1{
private:
    double factorialLimit;
    
public:
    // Solve factorial with double
    void calculateFactorialDouble() {
        double factorial = factorialLimit;
        for (int i = factorialLimit - 1; i >= 1; i--) {
            factorial *= i;
            cout << "Factorial in iteration " << factorialLimit - i << " is:" << factorial << endl;
        }
    }
    
    // Solve factorial with long double
    void calculateFactorialLongDouble() {
        long double factorial = factorialLimit;
        for (int i = factorialLimit - 1; i >= 1; i--) {
            factorial *= i;
            cout << "Factorial in iteration " << factorialLimit - i << " is:" << factorial << endl;
        }
    }
    
    // constructor
    Hacker_Practice_1(double factorialLimit = 200){
        this->factorialLimit = factorialLimit;
    }
};

// Change to main function when implementing this program
int main(){
    // Create the first object
    Hacker_Practice_1 *first = new Hacker_Practice_1();
    first->calculateFactorialDouble();
    first->calculateFactorialLongDouble();
    
    return 0;
}