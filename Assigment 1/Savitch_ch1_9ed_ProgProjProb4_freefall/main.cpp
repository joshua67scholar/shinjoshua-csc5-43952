/* 
 * File:   main.cpp
 * Author: Joshua, Shin
 * Created on March 2, 2015, 9:13 AM
 *  Purpose: Free fall problem from Savitch
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
 
//Global Constants
const float G=3.2174e1;//Acceleration in ft/sec^2 on 
const float CNVFTMT=3.048e-1;//Conversion from feet to meters

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float time, dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx(seconds)"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=1/2*G*time*time;//Does not work!!!!!
    //dstnce=static cast<float>(1)/2*G*time*time
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2.0f*G*time*time;
    //dstnce=G*1/2*time*time;
    dstnce=0.5f*G*time*time;
    //Output the results
    cout<<"Distance fallen="<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen="<<dstnce*CNVFTMT<<"(meters)"<<endl;
    //Exit stage right!
    return 0;
}

