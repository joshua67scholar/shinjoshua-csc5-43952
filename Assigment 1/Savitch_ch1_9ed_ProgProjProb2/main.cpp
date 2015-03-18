/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 4, 2015, 5:55 PM]
 * Purpose: Savitch_Ch1_ProgProjProb2
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int number;
    number=0;
    char c;//Character to be used to display C
    char s;//Character to be used to display S
    char l='!';
    //Prompt user for the letter C, S, l to be user
    cout<<"What letter would you like to use for Big C?"<<endl;
    cin>>c;
    cout<<"What letter would you like to use for Big S?"<<endl;
    cin>>s;
    cout<<"What letter would you like to use for '!'?"<<endl;
    cin>>l;
    cout<<"***************************************************"<<endl;
    //Output Big C!!
    //Output Big S!!
    //Output ! !!
    cout<<"   "<<c<<c<<c<<c<<"      "<<s<<s<<s<<s<<"           "<<l<<l<<endl;
    cout<<"  "<<c<<"    "<<c<<"    "<<s<<"    "<<s<<"          "<<l<<l<<endl;
    cout<<" "<<c<<"         "<<s<<"                "<<l<<l<<endl;
    cout<<c<<"           "<<s<<"               "<<l<<l<<endl;
    cout<<c<<"             "<<s<<s<<s<<s<<"          "<<l<<l<<endl;
    cout<<c<<"                 "<<s<<"         "<<l<<l<<endl;
    cout<<" "<<c<<"                 "<<s<<"        "<<l<<l<<endl;
    cout<<"  "<<c<<"     "<<c<<"    "<<s<<"    "<<s<<"        "<<endl;
    cout<<"   "<<c<<c<<c<<c<<"       "<<s<<s<<s<<s<<"          "<<number<<number<<endl;
    cout<<"***************************************************"<<endl;        
    cout<<"Computer Science is Cool Stuff!!!";
    //Exit stage right
    return 0;
}