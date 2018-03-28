/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_5_1.cpp
 * Author: Vishisht
 *
 * Created on March 27, 2018, 11:56 AM
 */

#include "header.h"

void Hacker_Practice_5_1::bisection(double a, double b, double (*func)(double)) {
    double c = 0;
    while ((b - a) >= EPSILON)
    {
        c = (a+b)/2;

        if (func(c) == 0.0) break;
        else if (func(c) * func(a) < 0) b = c;
        else a = c;
    }
    cout << "The value of root is : " << c << endl;
}