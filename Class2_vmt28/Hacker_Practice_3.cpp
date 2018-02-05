/* 
 * File:   Hacker_Practice_4.cpp
 * Author: Vishisht
 *
 * Created on February 4, 2018, 7:09 PM
 */
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Hacker_Practice_3{
private:
    
public:
    // function for factorial
    void factorial(long limit = 20) {
        long intFactorial = 1;
        // loop for multiplying
        for (int i = 2; i <= limit; i++) {
            intFactorial *= i;
            cout << "For the value at iteration " << i << " the value of the factorial is " << intFactorial << endl;
        }
        // loop for dividing
        for (int i = limit; i > 1; i--) {
            intFactorial /= i;
            cout << "For the value at iteration " << i << " the value of the factorial is " << intFactorial << endl;
        }
    }
};

// Change to main function when implementing this program
int callingFunction3(){
    // Object of class
    Hacker_Practice_3 *third = new Hacker_Practice_3();
    third->factorial();
    
    return 0;
}

