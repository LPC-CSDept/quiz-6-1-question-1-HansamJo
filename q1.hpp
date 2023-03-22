#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
void getinput(int num1, int num2);
void getinput(float fnum1, float fnum2);
void swapTwoValues(int num1, int num2);
void swapTwoValues(float num1, float num2);
//********************

// ******************************
// Implement all your functions here
void getinput(int num1, int num2){
    cout << "Enter Input of two ints: " << "\n";
    cin >> num1 >> num2;
}

void getinput(float fnum1, float fnum2){
    cout << "Enter Input of two floats: " << "\n";
    cin >> fnum1 >> fnum2;

}

void swapTwoValues(int num1, int num2){
    int temp;
    num1 = num2;
    num2 = temp;
}

void swapTwoValues(float fnum1, float fnum2){
    float temp;
    fnum1 = fnum2;
    fnum2 = temp;


}
// ******************************