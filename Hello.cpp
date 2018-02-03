// First C++ program to say Hello
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
using namespace std;

class Assignment1{

public:
    bool floatFloatingPointOverflows(int n);
    bool doubleFloatingPointOverflows(int n);

    // Declare the constructor
	Assignment1();

	// Declare the destructor
	~Assignment1();
};

bool Assignment1::floatFloatingPointOverflows(int n) {
    float floatCheckFloatOverflow = 1;
    for (int i = 0; i < n; i++) {
        floatCheckFloatOverflow *= 10;
    }
    if (isinf(floatCheckFloatOverflow)) return true;
    else return false;
}

bool Assignment1::doubleFloatingPointOverflows(int n) {
    double doubleCheckFloatOverflow = 1;
    for (int i = 0; i < n; i++) {
        doubleCheckFloatOverflow *= 10;
    }
    if (isinf(doubleCheckFloatOverflow)) return true;
    else return false;
}

Assignment1::Assignment1(){}

Assignment1::~Assignment1(){}

int main(){
    bool exceptionFloat = false;
    bool exceptionDouble = false;
    int floatCounter = 0;
    int doubleCounter = 0;
    Assignment1 *overflowTesting = new Assignment1();

    while (true) {
        floatCounter+=1;
        if (overflowTesting->floatFloatingPointOverflows(floatCounter)) {
            cout << "The total number of iteration it took float to overflow is:" << floatCounter << endl;
            break;
        }
    }
    while (true) {
        doubleCounter+=1;
        if (overflowTesting->doubleFloatingPointOverflows(doubleCounter)) {
            cout << "The total number of iteration it took float to overflow is:" << doubleCounter << endl;
            break;
        }
    }
}
