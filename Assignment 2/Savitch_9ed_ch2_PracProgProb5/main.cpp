/* 
 * File:   main.cpp
 * Author:Joshua Shin
 *
 * Created on March 16, 2015, 10:18 AM
 * Purpose: Sphere Volume
 */

#include <iostream>

using namespace std;

//Global Constants

 //Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float radius, vm;
    cout<<"Enter the radius of a sphere."<<endl;
    cin>>radius;
    vm=(4.0/3.0)*3.1415*pow(radius, 3.0);
    cout<<"The volume is "<<vm<<endl;
    return 0;
}

