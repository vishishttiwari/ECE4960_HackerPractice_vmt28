/* 
 * File:   Hacker_Practice_1.cpp
 * Author: Vishisht
 * 
 * Created on March 3, 2018, 10:03 PM
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
    void Solve_Matrix() {
        
        double x = 0;
        double y = 0;
        double e = pow(10,-2);
        
        for (int i = 0; i < 8; i++) {
            x = 199/(100 + 99);
            y = 197/(99 + 98.01 - (e));
            cout << "For " << e << " value of x is:" << x << " and y is:" << y << endl;
            cout << "Norm is:" << sqrt(pow(((100 + 99)*x) - 199,2) + pow(((99 + (98.01 - e))*y) - 197,2)) << endl;
            e /= 10;
        }
    }
    
};

// Change to main function when implementing this program
int calling_Function_1(){
    // Create the first object
    Hacker_Practice_1 *first = new Hacker_Practice_1();
    first->Solve_Matrix();
    
    return 0;
}