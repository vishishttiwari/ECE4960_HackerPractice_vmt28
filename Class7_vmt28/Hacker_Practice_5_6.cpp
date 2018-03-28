/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_5_6.cpp
 * Author: Vishisht
 *
 * Created on March 27, 2018, 6:47 PM
 */

#include "header.h"

double Hacker_Practice_5_6::norm(double a, double b) {
    return sqrt(pow(a,2) + pow(b,2));
}

void Hacker_Practice_5_6::steepestDescent(double x1, double x2, double (*func)(double,double)) {
    double h = (func(x1 + 0.0001, x2 + 0.0001)  -  func(x1, x2))/0.0001;
    int counter = 0;
    double x11 = 0, x21 = 0, x12 = 0, x22 = 0, x13 = 0, x23 = 0;
    while (abs(h) >= EPSILON) {
        counter++;
        h =  (func(x1 + 0.0001, x2 + 0.0001)  -  func(x1, x2))/0.0001;
        x11 = x1 - (10 * h);
        x21 = x2 - (10 * h);
        x12 = x1 - (1 * h);
        x22 = x2 - (1 * h);
        x13 = x1 - (0.001 * h);
        x23 = x2 - (0.001 * h);

        if (Hacker_Practice_5_6::norm(x11, x21) < Hacker_Practice_5_6::norm(x12, x22) && Hacker_Practice_5_6::norm(x11, x21) < Hacker_Practice_5_6::norm(x13, x23)) {
            x1 = x11;
            x2 = x21;
            cout << "Iteration : " << counter << " t : " << 10 << " x1 : " << x11 << " x2 : " << x21 << " delta x : " << h << " f(x) : " << func(x11, x21) << endl;
        }
        else if (Hacker_Practice_5_6::norm(x12, x22) < Hacker_Practice_5_6::norm(x11, x21) && Hacker_Practice_5_6::norm(x12, x22) < Hacker_Practice_5_6::norm(x13, x23)) {
            x1 = x11;
            x2 = x21;
            cout << "Iteration : " << counter << " t : " << 1 << " x1 : " << x12 << " x2 : " << x22 << " delta x : " << h << " f(x) : " << func(x12, x22) << endl;
        }
        else if (Hacker_Practice_5_6::norm(x13, x23) < Hacker_Practice_5_6::norm(x11, x21) && Hacker_Practice_5_6::norm(x13, x23) < Hacker_Practice_5_6::norm(x12, x22)) {
            x1 = x13;
            x2 = x23;
            cout << "Iteration : " << counter << " t : " << 0.001 << " x1 : " << x13 << " x2 : " << x23 << " delta x : " << h << " f(x) : " << func(x13, x23) << endl;
        }
    }
    cout << "The value of x1 is : " << x1 << " and x2 is : " <<  x2 << endl;
    cout << "The value of delta x is : " << h << endl;
    cout << "The value of f(x1,x2) is : " << func(x1,x2) << endl;
}
