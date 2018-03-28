/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   header.h
 * Author: Vishisht
 *
 * Created on March 27, 2018, 2:33 PM
 */

// Including all classes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <cfenv>
#include <string.h>
#include <fstream>

#ifndef HEADER_H
#define HEADER_H

#define EPSILON 0.0001

using namespace std;

class Hacker_Practice_5_1 {
private:
public:
    void bisection(double a, double b, double (*func)(double));
};

class Hacker_Practice_5_2 {
private:
public:
    void newtonRaphson(double x, double (*func)(double), double (*derivFunc)(double));
};

class Hacker_Practice_5_3 {
private:
public:
    void newtonRaphsonLineSearch(double x, double (*func)(double), double (*derivFunc)(double));
};

class Hacker_Practice_5_4 {
private:
public:
    void quasiNewtonRaphson(double x, double (*func)(double));
};

class Hacker_Practice_5_5 {
private:
    double h;
public:
    double f(double x, double y);
    double fx(double x, double y);
    double fy(double x, double y);
    double fxx(double x, double y);
    double fxy(double x, double y);
    double fyx(double x, double y);
    double fyy(double x, double y);
    Hacker_Practice_5_5();
};

class Hacker_Practice_5_6 {
private:
public:
    double norm(double a, double b);
    void steepestDescent(double x1, double x2, double (*func)(double,double));
};
#endif /* HEADER_H */