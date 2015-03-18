/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 4, 2015, 5:30 PM
 *      Purpose:Savitch_Ch1_ProgProjProb3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

int main(int argc, char** argv) {
    //Declare Variables
    int numoqrt, numodim, numonck, valocns;
    cout<<"Press return after entering a number./n";
    cout<<"Enter the number of quarters:/n";
    cin>>numoqrt;
    cout<<"Enter the number of dimes:/n";
    cin>>numodim;
    cout<<"Enter the number of nickels:/n";
    cin>>numonck;
    valocns=(25*numoqrt)+(10*numodim)+(5*numonck);
    cout<<"Value_of_coins_is";
    cout<<valocns;
    cout<<"cents";
    
    return 0;
}
