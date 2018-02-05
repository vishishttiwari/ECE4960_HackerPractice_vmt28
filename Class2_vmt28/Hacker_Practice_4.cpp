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

class Hacker_Practice_4{
private:
    
public:
    // check if number is positive zero
    bool isPositiveZero(double x) {
        if (x == 0.0 && !signbit(x)) return true;
        else return false;
    }
    // check if number is negative zero
    bool isNegativeZero(double x) {
        if (x == 0.0 && signbit(x)) return true;
        else return false;
    }
    // check if number is infinity
    bool isInfinity(double x) {
        if (isinf(x) && !signbit(x)) return true;
        else return false;
    }
    // check if number is negative infinity
    bool isNegativeInifinity(double x) {
        if (isinf(x) && signbit(x)) return true;
        else return false;
    }
    // check if number is NAN
    bool isNotANumber(double x) {
        if (isnan(x) && signbit(x)) return true;
        else return false;
    }
};

// Change to main function when implementing this program
int callingFunction4(){
    
    // Object of class
    Hacker_Practice_4 *fourth = new Hacker_Practice_4();
    
    // Initializing the values
    double INF = numeric_limits<double>::infinity();
    double DBL_MAX = numeric_limits<double>::max();
    double DBL_MIN = -numeric_limits<double>::max();
    double NINF = -INF;
    double POSONE = 1.0;
    double NEGONE = -1.0;
    double POSZERO = 1/INF;
    double NEGZERO = 1/-INF;
    
    // Creating the array of the value
    double trialValues[9] = {INF, NINF, POSONE, NEGONE, POSZERO, NEGZERO, DBL_MAX, DBL_MIN, NAN};
    
    // Checking the value with the functions in the class
    for (int i = 0; i < 9; i++) {
        if (fourth->isPositiveZero(trialValues[i])) cout << trialValues[i] << " is Positive Zero" << endl;
        else cout << trialValues[i] << " is not Positive Zero" << endl;
        if (fourth->isNegativeZero(trialValues[i])) cout << trialValues[i] << " is Negative Zero" << endl;
        else cout << trialValues[i] << " is not Negative Zero" << endl;
        if (fourth->isInfinity(trialValues[i])) cout << trialValues[i] << " is Infinity" << endl;
        else cout << trialValues[i] << " is not Infinity" << endl;
        if (fourth->isNegativeInifinity(trialValues[i])) cout << trialValues[i] << " is Negative Infinity" << endl;
        else cout << trialValues[i] << " is not Negative Infinity" << endl;
        if (fourth->isNotANumber(trialValues[i])) cout << trialValues[i] << " is NaN" << endl;
        else cout << trialValues[i] << " is not NaN" << endl;
    }
    return 0;
}

