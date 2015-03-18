/* 
 * File:   main.cpp
 * Author: Joshua Shin
 *
 * Created on March 17, 2015, 1:01 PM
 * Purpose: Stereo System Payment
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
        
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    short stereo=1000;
    float intrs=.18/12.0f;
    unsigned short Mntpaym=50;
    short count=0;
    float totalin=0;
    //Input variables
    while(stereo>=0)
    {
        float interest = intrs*stereo;
        totalin+=interest;
        cout<<"Total Interest over payment plan."<<totalin<<endl;
    stereo=stereo+intrs*stereo -Mntpaym;
    count++;
    cout << "Month " << count << " : " << stereo << " interest=" << interest <<endl;
    }
    cout<<"After"<<count<<"months";
 
    
  
    return 0;
}
