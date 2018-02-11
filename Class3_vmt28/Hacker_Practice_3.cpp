/* 
 * File:   Hacker_Practice_3.cpp
 * Author: Vishisht
 *
 * Created on February 10, 2018, 11:00 PM
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
    void firstO() {
        double derivation;
        double h = pow(2,-4);
        for (int i = 0; i < 7; i++) {
            derivation = ((pow((1+h),3) - 1)/h);
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 3 << endl;
            h /= 10;
        }
        cout << endl;
    }
    
    void secondO() {
        double derivation;
        double h = pow(2,-4);
        for (int i = 0; i < 7; i++) {
            derivation = (pow(1+(2*h),3) - 1)/(2*h);
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 3 << endl;
            h /= 10;
        }
        cout << endl;
    }
    
    void thirdO() {
        double derivation;
        double h = pow(2,-4);
        for (int i = 0; i < 7; i++) {
            derivation = -pow((1+(2*h)),3)/(2*h) + -3/(2*h) + (2*pow((1+h),3))/h;
            cout << "With h:" << h << " The derivative is: " << derivation << " and the error is: " << derivation - 3 << endl;
            h /= 10;
        }
        cout << endl;
    }
};

// Change to main function when implementing this program
int callingFunction3(){
    // Create the first object
    Hacker_Practice_3 *third = new Hacker_Practice_3();
    third->firstO();
    third->secondO();
    third->thirdO();
    
    return 0;
}