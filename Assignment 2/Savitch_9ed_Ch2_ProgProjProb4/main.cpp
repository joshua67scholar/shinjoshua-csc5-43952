/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 16, 2015, 9:30 AM
 * Purpose:Savitch_Ch2_ProgProjProb 4
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
        
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float customer;
    unsigned short intrst,LnDrtn;
    //Input variables
    cout<<"Loan amount desired $"<<endl;
    cin>>customer;
    cout<<"Interest Rate in %/year"<<endl;
    cin>>intrst;
    cout<<"Duration of Loan in months"<<endl;
    cin>>LnDrtn;
    //Calculate the Loan Amount and Payment
    float loanAmt=customer/(1-LnDrtn/12.0f*intrst/100.0f);
    float payment=loanAmt/LnDrtn;
    //Output the result
    cout<<"Loan Amount = $"<<loanAmt<<endl;
    cout<<"Payment = $"<<payment<<"/month"<<endl;
    return 0;
}

