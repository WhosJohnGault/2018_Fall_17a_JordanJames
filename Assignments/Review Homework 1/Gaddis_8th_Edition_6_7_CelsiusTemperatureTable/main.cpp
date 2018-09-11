/*
 *
 */

/* 
 * File:   main.cpp
 * Author: James Jordan
 *
 * Created on August 15, 2018, 8:35 PM
 */
#include <iostream>
#include <iomanip>

using namespace std;


 // Name global Constants here Pi

//function names go here 
float celsius(int, float,float);

int main(int argc, char** argv) {
   
 //initialize variables
    int fahr; //fahrenheit
    float ratio; //ratio of 9/5 for conversion
   float cels; //celsius value
   float diff; //the difference of fahr-32
//assign values to variables
    ratio=1.8; //to eliminate need for truncated float
    
//calculations go here
   
for(int fahr=0;fahr<21;){ //for loop which will repeat 20 times

 diff=fahr-32;
 cels=diff/ratio; //its the formula for conversion
 
 celsius(fahr,ratio,cels); //this will pass values and formulas into a float type function
 
  fahr++; //this will increment after each calculation
}
//output here    
    
    return 0;
}
float celsius(int fahr, float ratio,float cels)
{
    
     cout<<"The temperature is "<<setprecision(4)<<fixed<<fahr<<" Fahrenheit ";
    cout<<" The temperature is "<<cels<<" Celsius"<<endl;
     
     return cels;
}
