/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_6_2.cpp
 * Author: Vishisht
 *
 * Created on April 15, 2018, 8:32 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

using namespace std;

double h = 1;

double xt(double t) {
    return ((4/1.3) * (exp(0.8*t) - exp(-0.5*t))) + (2 * exp(-0.5*t));
}

double fxt(double x, double t) {
    return (4 * exp(0.8 * t)) - (0.5 * x);
}

double predictor(double x, double t) {
    return (x + (fxt(x,t) * h));
}

double corrector(double x, double t, double x_1) {
    double t_1 = t + h;
    return x + (fxt(x,t) + fxt(x_1, t_1))*0.5*h;
}

double stopCriteria(double currX, double prevX) {
    return abs((currX - prevX)/currX);
}

double error(double a, double b) {
    return 100 * abs((a - b)/a);
}

double huenIterator(double x, double t) {
    double prevX = 0;
    double currX = predictor(x,t);
    do {
        prevX = currX;
        currX = corrector(x, t, prevX);
    } while (stopCriteria(currX, prevX) > 1e-7);
    return currX;
}

int main(int argc, char** argv) {

    double forEuler = 2;
    double huenOneStep = 2;
    double huenIterative = 2;
    
    for (double t = 0; t <= 4; t++) {
        cout << "t: " << t << "\txTrue: " << xt(t) << endl;
        cout << "Forward Euler X: " << forEuler << "\tError: " << error(xt(t), forEuler) << "%" << endl;
        cout << "Huen No Iteration X: " << huenOneStep << "\tError: " << error(xt(t), huenOneStep) << "%" << endl;
        cout << "Huen Iterative X: " << huenIterative << "\tError: " << error(xt(t), huenIterative) << "%" << endl;
        
        forEuler = predictor(forEuler, t);
        huenOneStep = corrector(huenOneStep, predictor(huenOneStep, t), t);
        huenIterative = huenIterator(huenIterative, t);
    }
    
    return 0;
}

