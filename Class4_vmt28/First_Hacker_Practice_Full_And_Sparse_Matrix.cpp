/* 
 * File:   First_Hacker_Practice_Full_And_Sparse_Matrix.cpp
 * Author: Vishisht
 * 
 * Created on February 18, 2018, 8:21 PM
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class First_Hacker_Practice_Full_And_Sparse_Matrix{
private:
    
    int value[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int rowPtr[6] = {0,3,6,9,10,12};
    int colInd[12] = {0,1,4,0,1,2,1,2,4,3,0,4};
    
public:
    void retrieveElement() {
        int counter1 = 0;
        int previous = 0;
        for (int i = 1; i < sizeof(rowPtr)/sizeof(int); i++) {
            int counter = 0;
            for (int j = 0; j < 5; j++) {
                if (counter == colInd[counter1]) {
                    cout << value[counter1];
                    counter1++;
                }
                else {
                    cout << 0;
                }
                counter++;
                cout << " | ";
            }
            cout << "\n";
        }
    }
};

// Change to main function when implementing this program
int callingFunction2(){
    // Create the first object
    First_Hacker_Practice_Full_And_Sparse_Matrix *second = new First_Hacker_Practice_Full_And_Sparse_Matrix();
    second->retrieveElement();
    
    return 0;
}