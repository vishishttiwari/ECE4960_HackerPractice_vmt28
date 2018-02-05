/* 
 * File:   Hacker_Practice_5.cpp
 * Author: Vishisht
 *
 * Created on February 4, 2018, 9:22 PM
 */
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Hacker_Practice_5{
private:
    
public:
    // denormal function
    void denormals() {
        double x = 1.234567890123456;
        x *= pow(10,-307);
        cout.precision(15);
        for (int i = 0; i < 20; i++) {
            x /= 10.0;
            cout << "The value of x at iteration " << i+1 << " is:" << x << endl;
        }
    }
};

// Change to main function when implementing this program
int callingFunction5(){
    // Object of class
    Hacker_Practice_5 *fifth = new Hacker_Practice_5();
    
    fifth->denormals();
    
    return 0;
}