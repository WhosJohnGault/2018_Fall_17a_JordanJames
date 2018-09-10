/*
 *This progrma converts from dollars to Yen and Euros by using a user input and using set precision and show point
 * as the book asked
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
    float dollar;
    
    
//assign values to variables
    cout<<"This program will calculate the conversion from US dollars to the Japanese Yen and European Euro"<<endl;
    cout<<"Please enter a dollar amount"<<endl;
    cin>>dollar;
//calculations go here
  const float yen=dollar*111.005; //a declared constant to convert from dollars to yen
   const float euros=dollar*0.86419; //declared constant to convert from dollars to Euros
//output here    
    cout<<setprecision(2)<<fixed<<"You entered "<<dollar<<" the equivalent yen is "<<yen
            <<" and the equivalent amount in Euros is "<<euros<<endl;
    return 0;
}

