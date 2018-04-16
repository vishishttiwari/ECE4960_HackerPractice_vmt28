/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_6_1.cpp
 * Author: Vishisht
 *
 * Created on April 15, 2018, 6:52 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

using namespace std;

double f(double t) {
    return exp(-t);
}

void euler(double dt) {
    double currentBack = 1;
    double previousBack = 1;
    double currentTrap = 1;
    double previousTrap = 1;
    cout << "Delta t:  " << dt << endl;
    for (double t = 0; t <= 20; t += dt) {
        currentBack = (1/(1 + dt)) * previousBack;
        currentTrap = ((2 - dt)/(2 + dt)) * previousTrap;
        cout << "t: " << t << " Backward Euler Error: " << abs(currentBack - f(t))
                           << " Trapezoidal Euler Error: " << abs(currentTrap - f(t)) << endl;
        previousBack = currentBack;
        previousTrap = currentTrap;
    }
}

int main(int argc, char** argv) {

    euler(0.5);
    euler(0.1);
    
    return 0;
}

