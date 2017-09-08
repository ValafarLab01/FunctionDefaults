/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 8, 2017, 10:00 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Function arguments may have default values. Default values start from right
// and must be contiguous (not skip an argument)
double myPower(double a, double b=1, double c=0); 

/*
 * 
 */
int main(int argc, char** argv) {
    
    double a(0), b(0), c(0);
    
    cout << "Enter a, b and c to calculate (a+b)^c: ";
    cin >> a >> b >> c;
    
    cout << "(" << a << " + " << b << ")^" << c << " = ";
    cout << myPower(a, b, c) << endl;
    
    cout << "(1+5)^0 = " << myPower(1, 5) << endl;
    
    cout << "(2+0)^0 = " << myPower(2) << endl;

    return 0;
}

double myPower(double a, double b, double c){
    double sum(a+b);
    double product(1);
    
    for(int i=0; i < c; i++) {
        product *= sum;
    }
    return product;
}