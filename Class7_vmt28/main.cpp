/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Vishisht
 *
 * Created on March 27, 2018, 1:55 PM
 */

#include "header.h"

double func(double x) {
    return (exp(100*x) - 1);
}

double derivFunc(double x) {
    return 100*exp(100*x);
}
   
double func1(double x) {
    return (exp(x) - 1);
}

double func2(double x, double y) {
    return ((((3 * x * x) + y - 4) * ((3 * x * x) + y - 4)) + 
            (((x * x) + (-3 * y) + 2) * ((x * x) + (-3 * y) + 2)));
}

int main(int argc, char** argv) {
    
    cout << "***************Hacker_Practice_5_1***************" << endl;
    
    Hacker_Practice_5_1 *first = new Hacker_Practice_5_1();
    first->bisection(-5, 10, func1);
    
    cout << "*************************************************" << endl;
    cout << "***************Hacker_Practice_5_2***************" << endl;
    
    Hacker_Practice_5_2 *second = new Hacker_Practice_5_2();
    cout << "***************x(0) = 1***************" << endl;
    second->newtonRaphson(1, func, derivFunc);
    cout << "***************x(0) = 10***************" << endl;
    second->newtonRaphson(10, func, derivFunc);
    
    cout << "*************************************************" << endl;
    cout << "***************Hacker_Practice_5_3***************" << endl;
    
    Hacker_Practice_5_3 *third = new Hacker_Practice_5_3();
    third->newtonRaphsonLineSearch(1, func, derivFunc);
    
    cout << "*************************************************" << endl;
    cout << "***************Hacker_Practice_5_4***************" << endl;
    
    Hacker_Practice_5_4 *fourth = new Hacker_Practice_5_4();
    fourth->quasiNewtonRaphson(1, func);
    
    cout << "*************************************************" << endl;
    
    cout << "***************Hacker_Practice_5_6***************" << endl;
    
    Hacker_Practice_5_6 *sixth = new Hacker_Practice_5_6();
    cout << "***************(1,1)***************" << endl;
    sixth->steepestDescent(1, 1, func2);
    cout << "***************(-1,1)***************" << endl;
    sixth->steepestDescent(-1, 1, func2);
    
    cout << "*************************************************" << endl;
    
    return 0;
}

