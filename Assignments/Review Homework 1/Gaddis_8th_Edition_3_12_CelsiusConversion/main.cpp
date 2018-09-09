/*
 * Problem 3.12
 *This program converts Celsius Temperatures to Fahrenheit.  
 */

/* 
 * File:   main.cpp
 * Author: James Jordan
 *
 * Created on August 15, 2018, 8:35 PM
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


 // Name global Constants here Pi

//function names go here 

int main(int argc, char** argv) {
    
 //initialize variables
   float celsius; // variable for Celsius
   float fahr;    //variable for Fahrenheit
//assign values to variables
cout<<"This program converts Celsius inputs to Fahrenheit please enter a temperature"<<endl;
cin>>celsius;        //user inputs temperature to be converted to fahrenheit
//calculations go here
fahr=1.8*celsius+32; //conversion for celsius to fahrenheit

//output here    
        cout<<endl<<setprecision(4)<<showpoint<<"you entered "<<celsius<<" degrees Celsius which is "<<fahr<<" degrees Fahrenheit"<<endl;
    return 0;
}

