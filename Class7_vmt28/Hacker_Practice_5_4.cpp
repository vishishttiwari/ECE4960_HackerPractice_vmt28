/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_5_4.cpp
 * Author: Vishisht
 *
 * Created on March 27, 2018, 4:42 PM
 */

#include "header.h"

void Hacker_Practice_5_4::quasiNewtonRaphson(double x, double (*func)(double)) {
    double h = func(x)/((func(1.0001 * x) - func(x))/(0.0001 * x));
    int counter = 0;
    double x1 = 0, x2 = 0, x3 = 0;
    while (abs(h) >= EPSILON) {
        counter++;
        h = func(x)/((func(1.0001 * x) - func(x))/(0.0001 * x));
        x1 = x - (10 * h);
        x2 = x - (1 * h);
        x3 = x - (0.1 * h);
        if (x1 < x2 && x1 < x3) {
            x = x1;
            cout << "Iteration : " << counter << " t : " << 10 << " x : " << x << " delta x : " << h << " f(x) : " << func(x) << endl;
        }
        else if (x2 < x1 && x2 < x3) {
            x = x2;
            cout << "Iteration : " << counter << " t : " << 1 << " x : " << x << " delta x : " << h << " f(x) : " << func(x) << endl;
        }
        else if (x3 < x1 && x3 < x2) {
            x = x3;
            cout << "Iteration : " << counter << " t : " << 0.1 << " x : " << x << " delta x : " << h << " f(x) : " << func(x) << endl;
        }
    }
    cout << "The value of x is : " << x << endl;
    cout << "The value of delta x is : " << h << endl;
    cout << "The value of f(x) is : " << func(x) << endl;
}
