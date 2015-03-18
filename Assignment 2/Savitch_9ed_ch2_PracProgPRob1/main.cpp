/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 16, 2015, 9:30 AM
 * Purpose: Metric ton breakfast cereal problem
 */

#include <iostream>
using namespace std;

//Global Constants

 //Function Prototypes
        
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    float cWght;//weight of cereal box in ounces
    float Ncbox;//number of cereal boxes
            
  //Input variables
            cout<<"Enter the weight of cereal box in ounces.";
            cin>>cWght;
            
  //Calculate          
cWght/=35273.92f;
Ncbox=1.0f/cWght;
cout<<"We need";
cout<<Ncbox;
cout<<"boxes to yield 1 metric con of cereal.";
cout<<"The weight of the package of breakfast cereal is";
cout<<cWght;
cout<<"tons.";
    return 0;
}

