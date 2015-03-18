

/* 
 * File:   main.cpp
 * Author: Joshua Shin
 * Created on March 4, 2015, 10:06 AM
 * Purpose:Savitch_Ch1_PracProgProb6
 */

//System Libraries
#include <iostream>
//space between < and iostream
//< was omitted in the include directive

using namespace std;

int main (int argc, char** argv) {
//Omitted the int in int main
//Omitted the main in int main
//Omitted () in (int argc..argv)
    
 int number_of_pods, peas_per_pod, total_peas;
 
    cout<<"Press return after entering a number. /n";
    //Misspelled cout
    //Deleted one < after cout
    
    cout<<"Enter the number of pods:/n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:/n";
    cin>>peas_per_pod;
    //Left out ; after peas_per_pod
    //Misspelled peas_per_pod
    total_peas=number_of_pods/peas_per_pod;
    //Missing / math sign of division
    cout<<"If you have";
    cout<<number_of_pods;
    cout<<"pea pods/n";
    cout<<"and";
    cout<<peas_per_pod;
    cout<<"peas in each pod, then/n";
    cout<<"you have";
    cout<<total_peas;
    cout<<"peas in all the pods./n";
    return 0;
}