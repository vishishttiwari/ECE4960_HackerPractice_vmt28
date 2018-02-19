/* 
 * File:   Last_Hacker_Practice_Local_Analysis.cpp
 * Author: Vishisht
 * 
 * Created on February 18, 2018, 7:17 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Last_Hacker_Practice_Local_Analysis{
private:
    
public:
    void Rectangle() {
        double x = -1;
        double h = 0.1;
        double sum = 0;
        while (x < 0.9) {
            double value = h*(exp(x));
            sum += value;
            x += h;
        }
        cout << sum << "\t" << sum - 2.3504 << endl;
    }
    
    void Trapezoid() {
        double x = -1;
        double h = 0.1;
        double sum = 0;
        while (x < 0.9) {
            double value = h*(exp(x)/2 + exp(x+h)/2);
            sum += value;
            x += h;
        }
        cout << sum << "\t" << sum - 2.3504 << endl;
    }
    
    void Midpoint() {
        double x = -1;
        double h = 0.1;
        double sum = 0;
        while (x < 0.9) {
            double value = h*exp(x+(h/2));
            sum += value;
            x += h;
        }
        cout << sum << "\t" << sum - 2.3504 << endl;
    }
    
    void Simpson() {
        double x = -1;
        double h = 0.1;
        double sum = 0;
        while (x < 0.9) {
            double first = exp(x)/6;
            double second = 4*exp(x+(h/2))/6;
            double third = exp(x+h)/6;
            double value = h*(first + second + third);
            sum += value;
            x += h;
        }
        cout << sum << "\t" << sum - 2.3504 << endl;
    }
    
    void Gaussian() {
        double x = -1;
        double h = 0.1;
        double sum = 0;
        while (x < 0.9) {
            double first = exp((x+(h/2)) - ((1/(2*sqrt(3)))*h));
            double second = exp((x+(h/2)) + ((1/(2*sqrt(3)))*h));
            double value = h*(first/2 + second/2);
            sum += value;
            x += h;
        }
        cout << sum << "\t" << sum - 2.3504 << endl;
    }
    
};

// Change to main function when implementing this program
int main(){
    // Create the first object
    Last_Hacker_Practice_Local_Analysis *first = new Last_Hacker_Practice_Local_Analysis();
    first->Rectangle();
    first->Trapezoid();
    first->Midpoint();
    first->Simpson();
    first->Gaussian();
    
    return 0;
}