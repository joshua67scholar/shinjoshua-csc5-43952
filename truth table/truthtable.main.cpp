/* 
 * File:   main.cpp
 * Author: Joshua Shin
 *
 * Created on March 18, 2015, 9:38 AM
 *Purpose:Determine if 
 */

#include <iostream>
using namespace std;

// User Libraries

//Global Constants

 //Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    bool x,y;
    //Heading
    cout<<"X Y !X !Y X&&Y XllY X^Y X^Y^Y X^Y^X"
            <<"!(X&&Y) !Xll!Y !(XllY) !X&&!Y"<<endl;
    //Output the first row of the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y^y)?'T':'F')<<"      ";
    cout<<((x^y^x)?'T':'F')<<"      ";
    cout<<((!(x&&y))?'T':'F')<<"      ";
    cout<<((!x||!y)?'T':'F')<<"      ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<"     ";
    cout<<endl;
    
    //Output the second row of the table
    y=false;
        cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<((x^y)?'T':'F')<<"    ";
    cout<<((x^y^y)?'T':'F')<<"      ";
    cout<<((x^y^x)?'T':'F')<<"      ";
    cout<<((!(x&&y))?'T':'F')<<"      ";
    cout<<((!x||!y)?'T':'F')<<"      ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<"    ";
    cout<<endl;
    
    //Output the third row of the table
    x=false;y=true;
        cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<((x^y)?'T':'F')<<"    ";
    cout<<((x^y^y)?'T':'F')<<"      ";
    cout<<((x^y^x)?'T':'F')<<"      ";
    cout<<((!(x&&y))?'T':'F')<<"      ";
    cout<<((!x||!y)?'T':'F')<<"      ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<"    ";
    cout<<endl;
    
    //Output the fourth row of the table
    x=false;
        cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<((x^y)?'T':'F')<<"    ";
    cout<<((x^y^y)?'T':'F')<<"      ";
    cout<<((x^y^x)?'T':'F')<<"      ";
    cout<<((!(x&&y))?'T':'F')<<"      ";
    cout<<((!x||!y)?'T':'F')<<"      ";
    cout<<((!(x||y))?'T':'F')<<"      ";
    cout<<((!x&&!y)?'T':'F')<<"     ";
    cout<<endl;
    
    //Exit stage right!
    
    return 0;
}

