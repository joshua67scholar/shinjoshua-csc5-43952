/* 
 * File:   main.cpp
 * Author: Joshua Shin
 *
 * Created on March 16, 2015, 9:52 AM
 * Purpose:Treadmills
 */

#include <iostream>

using namespace std;

//Global Constants

 //Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables

   float TdSpd;//speed of treadmill
    int minutes;
    int seconds;
//Input values
    cout<<"Speed of treadmill in mph";
    cin>>TdSpd;
 //Calculate TdSpd in minutes and seconds per mile
    float minpmil=60/TdSpd;
   minutes=minpmil;
    cout<<"The speed of the treadmill is ";
    cout<<minutes;
    cout<<"minutes and ";
    seconds=(minpmil-minutes)*60.0;
    cout<<seconds<<"seconds per mile.";
    return 0;
}

