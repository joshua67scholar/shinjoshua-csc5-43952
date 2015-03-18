/* 
 * File:   main.cpp
 * Author: Joshua Shin
 *
 * Created on March 16, 2015, 7:55 AM
 * Purpose:paycheck problem 1 independent if statement version 2
 */

#include <iostream>//i/o standard
#include <iomanip>//Formatting
#include<fstream>//Writing to a file
using namespace std;

//User Libraries 

 //Global Constants
 
 //Execution Starts Here!

int main(int argc, char** argv) {
  //Declare Variables
    ofstream output;//Output the results in a file
    float hrsWrkd;// Hours Worked(hrs)
    float payRate;//PayRate($'s/hr)
    float oRate=1.5f;//Multiplicative factor of payRate
    float oTime=40.0f;//Where overtime begins(hr)
    float payChk;// Gross Pay ($'s)
    //Open the file
    output.open("Payroll.dat");
    //Prompt the user for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWrkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the paycheck
 
        payChk=payRate*hrsWrkd;
    if(hrsWrkd>=oTime){
        payChk+=payRate*(oRate-1)*(hrsWrkd-oTime);
    }
    //Output the results tot he keyboard
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked="<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate=$"<<payRate<<"(hr)"<<endl;
    cout<<"Overtime rate="<<oRate<<endl;
    cout<<"Overtime begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay=$"<<payChk<<endl;
    
    //Close the file
    output.close();
    return 0;
}
