/* 
 * File:   Hacker_Practice_2.cpp
 * Author: Vishisht
 *
 * Created on February 4, 2018, 11:53 PM
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
    
public:
    // Sizes of data types
    void checkDataTypeSizes() {
        cout << "The size of short int is:" << sizeof(short int) << endl;
        cout << "The size of unsigned short int is:" << sizeof(unsigned short int) << endl;
        cout << "The size of unsigned int is:" << sizeof(unsigned int) << endl;
        cout << "The size of int is:" << sizeof(int) << endl;
        cout << "The size of long int is:" << sizeof(long int) << endl;
        cout << "The size of unsigned long int is:" << sizeof(unsigned long int) << endl;
        cout << "The size of long long int is:" << sizeof(long long int) << endl;
        cout << "The size of unsigned long long int is:" << sizeof(unsigned long long int) << endl;
        cout << "The size of signed char is:" << sizeof(signed char) << endl;
        cout << "The size of unsigned char is:" << sizeof(unsigned char) << endl;
        cout << "The size of float is:" << sizeof(float) << endl;
        cout << "The size of double is:" << sizeof(double) << endl;
        cout << "The size of long double is:" << sizeof(long double) << endl;
    }
};

// Change to main function when implementing this program
int callingFunction1(){
    // Create the first object
    Hacker_Practice_1 *first = new Hacker_Practice_1();
    first->checkDataTypeSizes();
    
    return 0;
}
