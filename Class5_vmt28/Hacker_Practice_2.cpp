/* 
 * File:   Hacker_Practice_2.cpp
 * Author: Vishisht
 *
 * Created on March 4, 2018, 9:00 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Hacker_Practice_2{
private:
    int rank = 5;
    double A[5][5] = {{1.0,2.0,0,0,3.0},{4.0,5.0,6.0,0,0},{0,7.0,8.0,0,0},{0,0,0,10.0,0},{11.0,0,0,0,12.0}};
    double b[5] = {5,4,3,2,1};
    
public:
    void Print_Matrix() {
        for (int i = 0; i < rank; i++) {
            for (int j = 0; j < rank; j++) {
                cout << A[i][j] << "\t";
            }
            cout << "\t\t" << b[i] << endl;
        }
        cout << endl;
    }
    
    void Minimal_Fill() {
        Print_Matrix();
        
        for (int i = 0; i < rank; i++) {
            A[1][i] -= 4 * A[0][i];
        }
        b[1] -= 4 * b[0];
        Print_Matrix();
        
        for (int i = 0; i < rank; i++) {
            A[2][i] += 7*A[1][i]/3;
        }
        b[2] += 7*b[1]/3;
        Print_Matrix();
        
        for (int i = 0; i < rank; i++) {
            A[0][i] += 2*A[1][i]/3;
        }
        b[0] += 2*b[1]/3;
        Print_Matrix();
        
        for (int i = 0; i < rank; i++) {
            A[0][i] -= 4*A[2][i]/22;
        }
        b[0] -= 4*b[1]/22;
        Print_Matrix();
        
        for (int i = 0; i < rank; i++) {
            A[4][i] -= 11*A[0][i];
        }
        b[4] -= 11*b[0];
        Print_Matrix();
    }
};

// Change to main function when implementing this program
int calling_Function_2(){
    // Create the first object
    Hacker_Practice_2 *second = new Hacker_Practice_2();
    second->Minimal_Fill();
    
    return 0;
}