/* 
 * File:   Second_Hacker_Practice_Full_And_Sparse_Matrix.cpp
 * Author: Vishisht
 * 
 * Created on February 18, 2018, 8:57 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Second_Hacker_Practice_Full_And_Sparse_Matrix{
private:
    
    int Avalue[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int ArowPtr[6] = {0,3,6,9,10,12};
    int AcolInd[12] = {0,1,4,0,1,2,1,2,4,3,0,4};
    
    int Xvalue[5] = {5,4,3,2,1};
    int XrowPtr[6] = {0,1,2,3,4,5};
    int XcolInd[5] = {0,0,0,0,0};
    
    int Bvalue[5] = {0,0,0,0,0};
    int BrowPtr[6] = {0,1,2,3,4,5};
    int BcolInd[5] = {0,0,0,0,0};
    
    int A[5][5] = {{1,2,0,0,3},
                    {4,5,6,0,0},
                    {0,7,8,0,9},
                    {0,0,0,10,0},
                    {11,0,0,0,12}};
    
    int X[5] = {5,4,3,2,1};
    
    int B[5];
    
public:
    int productAx() {
        int BValueFromRowCompression[5] = {0,0,0,0,0};
        int counter =0;
        for (int i = 1; i <= 5; i++) {
            for (int j = 0; j < BrowPtr[i]-counter; j++) {
                BValueFromRowCompression[i-1] += Bvalue[counter+j];
            }
            counter = BrowPtr[i];
        }
        
        bool repeat = true;
        for (int i = 0; i < 5; i++) {
            if (BValueFromRowCompression[i] != B[i]) repeat &= false;
        }
        if (repeat) return 0;
        else return 1;
    }
    
    void rowCompressedProduct() {
        int counter =0;
        int counter1 = 0;
        for (int i = 1; i <= 5; i++) {
            for (int j = 0; j < ArowPtr[i]-counter; j++) {
                Bvalue[i-1] += (Avalue[counter1] * Xvalue[AcolInd[counter + j]]);
                counter1++;
            }
            counter = ArowPtr[i];
        }
    }
    
    void fullMatrixProduct() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                B[i] += A[i][j] * X[j];
            }
        }
    }
};

// Change to main function when implementing this program
int callingFunction3(){
    // Create the first object
    Second_Hacker_Practice_Full_And_Sparse_Matrix *second = new Second_Hacker_Practice_Full_And_Sparse_Matrix();
    second->rowCompressedProduct();
    second->fullMatrixProduct();
    second->productAx();
    
    return 0;
}