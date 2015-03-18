/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 4, 2015, 10:05 AM
 * Purpose:Savitch_Ch1_PracProgProb5
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

 int hgt_lgh, wid_lgh, totLngh, Area;
    cout<<"Press return after entering a number./n";
    cout<<"Enter the height_length:/n";
    cin>>hgt_lgh;
    cout<<"Enter the width_length:/n";
    cin>>wid_lgh;
    Area=wid_lgh*hgt_lgh;
    cout<<wid_lgh;
    cout<<"Rectangular_Area_is";
    cout<<Area;
    cout<<"Press return after entering a number./n";
    cout<<"Enter the height_length:/n";
    cin>>hgt_lgh;
    cout<<"Enter the wid_lgh:/n";
    cin>>wid_lgh;
    totLngh=2*hgt_lgh+2*wid_lgh;
    cout<<"total_Length_is";
    cout<<totLngh;
    
    
    return 0;
}