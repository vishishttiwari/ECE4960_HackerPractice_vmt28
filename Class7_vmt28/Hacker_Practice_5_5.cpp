/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_5_5.cpp
 * Author: Vishisht
 *
 * Created on March 27, 2018, 4:50 PM
 */

#include "header.h"

double Hacker_Practice_5_5::f(double x, double y) {
    return ((((3 * x * x) + y - 4) * ((3 * x * x) + y - 4)) + 
            (((x * x) + (-3 * y) + 2) * ((x * x) + (-3 * y) + 2)));
}

double Hacker_Practice_5_5::fx(double x, double y) {
    return (f((x + h),y) - f((x - h),y)) / (2 * h);
}

double Hacker_Practice_5_5::fy(double x, double y) {
    return (f(x,(y + h)) - f(x,(y - h))) / (2 * h);
}

double Hacker_Practice_5_5::fxx(double x, double y) {
    return (fx((x + h),y) - fx((x - h),y)) / (2 * h);
}

double Hacker_Practice_5_5::fxy(double x, double y) {
    return (fx(x,(y + h)) - fx(x,(y - h))) / (2 * h);
}

double Hacker_Practice_5_5::fyx(double x, double y) {
    return (fy((x + h),y) - fy((x - h),y)) / (2 * h);
}

double Hacker_Practice_5_5::fyy(double x, double y) {
    return (fy(x,(y + h)) - fy(x,(y - h))) / (2 * h);
}

Hacker_Practice_5_5::Hacker_Practice_5_5() {
    h = 0.00000001;
}