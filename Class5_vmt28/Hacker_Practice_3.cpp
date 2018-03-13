/* 
 * File:   Hacker_Practice_3.cpp
 * Author: Vishisht
 *
 * Created on March 4, 2018, 9:28 PM
 */
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Hacker_Practice_3{
private:
    int rank;
    
    double *A;
    
    long nZA;
    double *AValue;
    int *ARowPtr;
    int *AColInd;
    
public:
    int Create_Row_Compressed_Matrix(double *matrix, double **value, int **rowPtr, int **colInd, int rank, bool vector = false) {
        int row;
        int col;
        if (vector) {
            row = rank;
            col = 1;
        }
        else {
            row = rank;
            col = rank;
        }
        
        int nZ = 0;
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                if (matrix[(i * row) + j] != 0) nZ++;
            }
        }
        
        *value = (double *)malloc(nZ * sizeof(double));
        *rowPtr = (int *)malloc((col) * sizeof(int));
        *colInd = (int *)malloc(nZ * sizeof(int));

        double *temp1 = *value;
        int *temp2 = *colInd;
        int *temp3 = *rowPtr;
        
        temp3[0] = 0;
        
        int countNZRow = 0;
        
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                if (matrix[i * row + j] != 0) {
                    temp1[countNZRow] = matrix[i * col + j];
                    temp2[countNZRow] = j;
                    countNZRow++;
                }
            }
            temp3[i+1] = countNZRow;
        }
        return nZ;
    }
    
    void Norm_1_Full_Matrix() {
        int sum[5] = {0,0,0,0,0};
        int maximum = 0;
        for (int i = 0; i < rank; i++) {
            for (int j = 0; j < rank; j++) sum[i] += abs(A[(j * rank) + i]);
            maximum = max(maximum, sum[i]);
        }
        cout << maximum << endl;
    }
    
    void Norm_Infinity_Full_Matrix() {
        int sum[5] = {0,0,0,0,0};
        int maximum = 0;
        for (int i = 0; i < rank; i++) {
            for (int j = 0; j < rank; j++) {
                sum[i] += abs(A[(i * rank) + j]);
            }
            maximum = max(maximum, sum[i]);
        }
        cout << maximum << endl;
    }
    
    void Norm_1_Sparse_Matrix() {
        int sum[5] = {0,0,0,0,0};
        int maximum = 0;
        for (int i = 0; i < rank; i++) {
            for (int j = 0; j < nZA; j++) if (AColInd[j] == i) sum[i] += AValue[j];
            maximum = max(maximum, sum[i]);
        }
        cout << maximum << endl;
    }
    
    void Norm_Infinity_Sparse_Matrix() {
        
        int sum[5] = {0,0,0,0,0};
        int maximum = 0;
        for (int i = 1; i < rank + 1; i++) {
            for (int j = ARowPtr[i-1]; j < ARowPtr[i]; j++) sum[i-1] += AValue[j];
            maximum = max(maximum, sum[i - 1]);
        }
        cout << maximum << endl;
    }
    
    void Initializing_Matrix(double Atemp[5][5]) {
        rank = 5;

        A = (double *)malloc(rank * rank * sizeof(double));
        
        for (int i = 0; i < rank; i++) {
            for (int j = 0; j < rank; j ++) {
                A[(i * rank) + j] = Atemp[i][j];
            }
        }
        
        nZA = Create_Row_Compressed_Matrix(A, &AValue, &ARowPtr, &AColInd, rank);
    }
};

// Change to main function when implementing this program
int calling_Function_3(){
    // Create the first object
    double Atemp[5][5] = {{1.0,2.0,0,0,3.0},{4.0,5.0,6.0,0,0},{0,7.0,8.0,0,9.0},{0,0,0,10.0,0},{11.0,0,0,0,12.0}};
    
    Hacker_Practice_3 *third = new Hacker_Practice_3();
    third->Initializing_Matrix(Atemp);
    third->Norm_1_Full_Matrix();
    third->Norm_Infinity_Full_Matrix();
    third->Norm_1_Sparse_Matrix();
    third->Norm_Infinity_Sparse_Matrix();
    
    return 0;
}
