/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hacker_Practice_1.cpp
 * Author: Vishisht
 *
 * Created on March 10, 2018, 11:13 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

double tolerance = pow(10,-7);

typedef struct {
    double *arr;
    int rank;
}full_Matrix;

typedef struct {
    double *value;
    int *rowPtr;
    int *colInd;
    int rank;
    int nZ;
}sparse_Matrix;

typedef struct {
    double *arr;
    int rank;
}full_Vector;

class Hacker_Practice_1{
private:
    
public:
    void Row_Compressed_Jacobi_Implementation(full_Matrix *A, full_Vector *b, full_Vector *x)
{
        
    x->arr = (double *)malloc(b->rank * sizeof(double));
    x->rank = b->rank;

    for (int i = 0; i < b->rank; i++) {
        x->arr[i] = 0;
    }
    
    for (int i = 0; i < ASparse->rank; i++) {
        x->arr[i] = 0;
    }

    double *T = (double *)malloc(A->rank * A->rank * sizeof(double));
    
    for (int i = 0; i < A->rank; i++) {
        x->arr[i] = 0;
    }
    for (int i = 0; i < A->rank; i++) {
        for (int j = 0; j < A->rank; j ++) {
            T[(i * A->rank) + j] = A->arr[(i * A->rank) + j];
        }
    }
    
    for (int i = 0; i < A->rank; i++){
        for (int j = 0; j < A->rank; j++) {
            T[(i * A->rank) + j] /= -A->arr[(i * A->rank) + i];
        }
        T[(i * A->rank) + i] = 0;
    }

    double *xtemp = (double *)malloc(A->rank * sizeof(double));

    long double converged= 0;
    int counter = 0;
    do {
        converged = 0;
        counter++;
        for (int i = 0; i < A->rank; i++) {
            xtemp[i] = x->arr[i];
            x->arr[i] = 0;
        }
        for (int i = 0; i < A->rank; i++) {
            for (int j = 0; j < A->rank; j++) {
                x->arr[i] += T[(i * A->rank) + j] * xtemp[j];
            }
            x->arr[i] += b->arr[i]/A->arr[(i * A->rank) + i];
        }
        for (int i = 0; i < A->rank; i++) {
            if ((xtemp[i] - x->arr[i]) < 0) converged += -(xtemp[i] - x->arr[i]);
            else converged += (xtemp[i] - x->arr[i]);
        }
    } while (converged > tolerance);   
};

// Change to main function when implementing this program
int main(){
    // Create the first object
    Hacker_Practice_1 *first = new Hacker_Practice_1();
    
    
    double *matrix = (double *)malloc(5 * 5 * sizeof(double));
    matrix = {{-4,1,0,0,1},{4,-4,1,0,0},{0,1,-4,1,0},{0,0,1,-4,1},{1,0,0,1,-4}};
    full_Matrix A = new full_Matrix();
    A.arr = matrix;
    A.rank = 5;
    
    double *vector = (double *)malloc(5 * sizeof(double));
    vector = {1,0,0,0,0};
    full_Vector b = new full_Vector();
    b.arr = vector;
    b.rank = 5;
    
    full_Vector x = new full_Vector();
    
    first->Row_Compressed_Jacobi_Implementation(A, b, x)
    
    return 0;
}