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
#include <cmath>
#include <iomanip>
using namespace std;


 // Name global Constants here Pi

//function names go here 

int main(int argc, char** argv) {
    
 //initialize variables
    float p; //number of organisms
    float r; //average increase in the number of organisms
    int t; //number of days organisms spent multiplying
    int i=1; //starting increment
    float y; //y is a place holder in the exponent
    float e=2.71828183;//eulurs number
//assign values to variables
cout<<"This program will predict the population changes in a species of organisms"<<endl;    
cout<<"Please enter the number of starting organisms"<<endl;
cin>>p;
while(p<2){ //this loop mill ensure a valid population is entered
    cout<<"Please enter a number equal or greater to 2"<<endl;
    cin>>p;
}
cout<<"Please enter the average daily increase as a percentage"<<endl;
cin>>r;
while(r<0){ //this loop will terminate once a positive number is entered
    cout<<"Please enter a number equal to or greater than 0"<<endl;
    cin>>r;
}
cout<<"How many days should the organisms be allowed to multiply?"<<endl;
cin>>t;
while(t<1){ //this loop will terminate once  t is equal to or greater than 1
    cout<<"Cmon man stop wasting my time put in a number greater than 1 atleast"<<endl;
    cin>>t;
}
y=r*i; //this will simply the exponent for easier computation

//calculations go here
while(i<=t){ //this loop will calculate the daily population of some organisms and will loop until the user inputed number of 
                        //days has passed
    p=p*pow(e,y); //equation for exponential population increase
    cout<<setprecision(0)<<fixed<<p<<endl; //this will ensure population estimate is accurate
    i++; //increment for the counter
}
    return 0;
}

