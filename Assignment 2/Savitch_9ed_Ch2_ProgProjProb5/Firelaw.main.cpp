/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 16, 2015, 9:30 AM
 * Purpose:Savitch Chap 2 Prob 5
 */

#include <iostream>
using namespace std;

//Global Constants

 //Function Prototypes
        
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float Numoppl;//Number of people attending meeting
    float MaxRcap;//Maximum room capacity according to fire law regulation
    float Addppl, Exclppl;
    //Prompt user for inputs
    cout<<"What is the number of people attending a meeting?";
    cin>>Numoppl;
    cout<<"What is the maximum room capacity according to fire law regulations?";
    cin>>MaxRcap;
    //Calculate if meeting is able to start
    if(Numoppl<MaxRcap){
        cout<<"Meeting can take place and additional people may attend.";
        MaxRcap=Numoppl+Addppl
        cout<<"How many additional people may attend?";
        cout<<Addppl;
       }else(Numoppl>MaxRcap){
        cout<<"Meeting can not take place and people must be excluded until \n";
        cout<<"maximum room capacity is reached.";
        MaxRcap=Numoppl-Exclppl;
        cout<<"How many people are to be excluded?";
        cout<<Exclppl;
       }
    return 0;
}

