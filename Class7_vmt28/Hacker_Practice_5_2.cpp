/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_5_2.cpp
 * Author: Vishisht
 *
 * Created on March 27, 2018, 1:46 PM
 */

#include "header.h"

void Hacker_Practice_5_2::newtonRaphson(double x, double (*func)(double), double (*derivFunc)(double)) {
    double h = func(x) / derivFunc(x);
    int counter = 0;
    while (abs(h) >= EPSILON) {
        counter++;
        h = func(x) / derivFunc(x);
        x = x - h;
        cout << "Iteration : " << counter << " x : " << x << " delta x : " << h << " f(x) : " << func(x) << endl;
    }
    cout << "The value of x is : " << x << endl;
    cout << "The value of delta x is : " << h << endl;
    cout << "The value of f(x) is : " << func(x) << endl;
}