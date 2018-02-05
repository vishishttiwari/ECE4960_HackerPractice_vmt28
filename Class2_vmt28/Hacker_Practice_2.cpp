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

class Hacker_Practice_2{
private:
    double doubleResult1, doubleResult2;
    long intResult1, intResult2;
    
public:
    // function for handling double
    void exceptionHandlingDouble(double x, double y) {
        doubleResult1 = 1/x;
        doubleResult2 = y/x;
        
        cout << "doubleResult1 is:" << doubleResult1 << endl;
        cout << "doubleResult2 is:" << doubleResult2 << endl;
    }
    
    // function for handling long
    void exceptionHandlingLong(long m, long n) {
        intResult1 = 1/m;
        intResult2 = n/m;
        
        cout << "intResult1 is:" << intResult1 << endl;
        cout << "intResult2 is:" << intResult2 << endl;
    }
};

// Change to main function when implementing this program
int callingFunction2(){
    // Object of class
    Hacker_Practice_2 *second = new Hacker_Practice_2();
    second->exceptionHandlingDouble(0.0, 0.0);
    second->exceptionHandlingLong(0, 0);
    
    return 0;
}

