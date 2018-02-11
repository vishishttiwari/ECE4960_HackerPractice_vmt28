/* 
 * File:   Hacker_Practice_2.cpp
 * Author: Vishisht
 *
 * Created on February 10, 2018, 10:30 PM
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
    
public:
    void firstMethod() {
        double y;
        for (int t = 0; t <= 20; t++) {
            y = exp(-t);
            cout << "With t: " << t << " y is: " << y << endl;
        }
    }
    
    void secondMethod() {
        double y;
        for (int t = 0; t <= 20; t++) {
            for (double delt = 0.5; delt <= 2; delt *= 2) {
                y = (1-delt) * exp(t-delt);
                cout << "With delt: " << delt << " and t: " << t << " y is: " << y << " and error is: " << y-exp(-t) << endl;
            }
        }
    }
    
    void thirdMethod() {
        double y;
        for (int t = 0; t <= 20; t++) {
            for (double delt = 0.5; delt <= 2; delt *= 2) {
                y = exp(t-delt)/(1+delt);
                cout << "With delt: " << delt << " and t: " << t << " y is: " << y << " and error is: " << y-exp(-t) << endl;
            }
        }
    }
};

// Change to main function when implementing this program
int callingFunction2(){
    // Create the first object
    Hacker_Practice_2 *second = new Hacker_Practice_2();
    second->firstMethod();
    second->secondMethod();
    second->thirdMethod();
    
    return 0;
}

