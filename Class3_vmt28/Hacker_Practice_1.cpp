/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_1.cpp
 * Author: Vishisht
 *
 * Created on February 6, 2018, 10:08 AM
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
    
public:
    void checkOneDerivative() {
        double derivation;
        double h = 0.1;
        for (int i = 0; i < 20; i++) {
            derivation = ((pow((1+h),2) - 1)/h);
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 2 << endl;
            h /= 10;
        }
        cout << endl;
    }
    
    void checkOneDerivativeWithLowPrecision() {
        double derivation;
        double h = 0.1;
        for (int i = 0; i < 20; i++) {
            derivation = ((pow((1+h),2) + pow(10,8) - 1 - pow(10,8))/h);
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 2 << endl;
            h /= 10;
        }
        cout << endl;
    }
    
    void checkTwoDerivative() {
        double derivation;
        double h = 0.1;
        for (int i = 0; i < 20; i++) {
            derivation = (pow((1+h),2) - pow((1-h),2))/(2 * h);
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 2 << endl;
            h /= 10;
        }
        cout << endl;
    }
    
    void checkTwoDerivativeWithLowPrecision() {
        double derivation;
        double h = 0.1;
        for (int i = 0; i < 20; i++) {
            derivation = (pow((1+h),2) + pow(10,8)- pow((1-h),2) - pow(10,8))/(2 * h);
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 2 << endl;
            h /= 10;
        }
        cout << endl;
    }
};

// Change to main function when implementing this program
int callingFunction1(){
    // Create the first object
    Hacker_Practice_1 *first = new Hacker_Practice_1();
    first->checkOneDerivative();
    first->checkOneDerivativeWithLowPrecision();
    first->checkTwoDerivative();
    first->checkTwoDerivativeWithLowPrecision();
    
    return 0;
}