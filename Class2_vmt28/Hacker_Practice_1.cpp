/* 
 * File:   Hacker_Practice_4.cpp
 * Author: Vishisht
 *
 * Created on February 4, 2018, 7:09 PM
 */
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Hacker_Practice_1{
private:
    double a;
    double b;
    double c;
    
public:
    // Solve the roots using double
    void solveDouble() {
        cout << "The size of double is:" << sizeof(double) << endl;
                
        double first_first = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
        double first_second = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
        double second_first = 2*c/(-b + sqrt(pow(b, 2) - 4*a*c));
        double second_second = 2*c/(-b - sqrt(pow(b, 2) - 4*a*c));
        
        cout << "The result of first root using double from first method is:" << first_first << endl;
        cout << "The result of second root using double from first method is:" << first_second << endl;
        cout << "The result of first root using double from second method is:" << second_first << endl;
        cout << "The result of second root using double from second method is:" << second_second << endl;
    }
    
    // Solve the roots using long double
    void solveLongDouble() {
        cout << "The size of long double is:" << sizeof(long double) << endl;
                
        long double first_first = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
        long double first_second = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
        long double second_first = 2*c/(-b + sqrt(pow(b, 2) - 4*a*c));
        long double second_second = 2*c/(-b - sqrt(pow(b, 2) - 4*a*c));
        
        cout << "The result of first root using long double from first method is:" << first_first << endl;
        cout << "The result of second root using long double from first method is:" << first_second << endl;
        cout << "The result of first root using long double from second method is:" << second_first << endl;
        cout << "The result of second root using long double from second method is:" << second_second << endl;
    }
    
    // constructor
    Hacker_Practice_1(double a, double b, double c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

// Change to main function when implementing this program
int callingFunction1(){
    // Create the first object with very small coefficients
    Hacker_Practice_1 *first1 = new Hacker_Practice_1(pow(10,-20),pow(10,3),pow(10,3));
    first1->solveDouble();
    first1->solveLongDouble();
    
    // Create the first object with little bigger small coefficients
    Hacker_Practice_1 *first2 = new Hacker_Practice_1(pow(10,-5),pow(10,3),pow(10,3));
    first2->solveDouble();
    first2->solveLongDouble();
    
    return 0;
}