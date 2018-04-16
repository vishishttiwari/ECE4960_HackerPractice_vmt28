/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_6_3.cpp
 * Author: Vishisht
 *
 * Created on April 15, 2018, 9:13 PM
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

double fxt(double t, double x) {
    return (4 * exp(0.8 * t)) - (0.5 * x);
}

double error(double a, double b) {
    return 100 * abs((a - b)/a);
}

double rangeKutta(double t, double x) {
    double k1 = fxt(t,x);
    double k2 = fxt(t + (h/2),x + ((k1 * h)/2));
    double k3 = fxt(t + (h/2),x + ((k2 * h)/2));
    double k4 = fxt(t + h,x + (k3 * h));
    double xRK4 =  x + (h * (k1 + 2 * k2 + 2 * k3 + k4)/6);
    cout << "t:" << t + 1 << "\txTrue: " << xt(t + 1) << "\tk1: " << k1 << "\tk2: " << k2 << "\tk3: " 
            << k3 << "\tk4: " << k4 << "\txRK4: " << xRK4 << "\tError: " << error(xt(t + 1), xRK4) << "%" << endl;
    return xRK4;
}

int main(int argc, char** argv) {
    double x = 2;
    for (double t = 0; t <= 3; t++) {
        x = rangeKutta(t, x);
    }
    return 0;
}

