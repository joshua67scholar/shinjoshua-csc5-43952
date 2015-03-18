/* 
 * File:   main.cpp
 * Author:Joshua Shin
 *
 * Created on March 16, 2015, 9:46 AM
 * Purpose:Savitch ch2 PRacProgProb2
 */

#include <iostream>


using namespace std;



int main(int argc, char** argv) {
//Declare Variables
    float n,r,guess,l;
  
    cout<<"Prompt user for input.";
	cin>>l;
	guess=l/2;
        n=0;
        while(n<100){
            
	//Calculate the guess and r

	r=l/guess;
	guess=(guess+r)/2;
	n++;
               }
        cout<<"final guess"<<guess<<endl;
        
	//Exit stage right
	

	return 0;
}
