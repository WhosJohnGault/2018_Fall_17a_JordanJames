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

using namespace std;


 // Name global Constants here Pi

//function names go here 

int main(int argc, char** argv) {
    
 //initialize variables
    float quarter,dime,nickel,penny;
    int numq,numd,numn,nump; //the user input amount for the number of quarters,dimes,nickels, and pennnies
//assign values to variables
    quarter=0.25; //the value of a quarter
    dime=0.10;     //value of a dime
    nickel=0.05;    //value of a nickel
    penny=0.01;   //value of a penny
    cout<<"This program is used to determine what change is equal to one dollar"<<endl;
    cout<<"Please enter the amount of quarters"<<endl;
    cin>>numq;
    cout<<"you entered "<<numq<<" Quarters"<<endl;
    cout<<"Please enter the amount of Dimes"<<endl;
    cin>>numd;
    cout<<"you entered "<<numd<<" Dimes"<<endl;
    cout<<"Please enter the amount of Nickels"<<endl;
    cin>>numn;
        cout<<"you entered "<<numn<<"  Nickles"<<endl;
    cout<<"Please enter the amount of Pennies"<<endl;
    cin>>nump;
    cout<<"you entered "<<nump<<" Pennies"<<endl;
    cout<<"Lets see if the amount you entered is equal to one dollar"<<endl;
    
//calculations go here
    if(((numq*quarter)+(numd*dime)+(numn*nickel)+(nump*penny))==1)
        cout<<"You change is equal to one dollar congratulations!"<<endl;
     if(((numq*quarter)+(numd*dime)+(numn*nickel)+(nump*penny))<1)
          cout<<"You change is less than one dollar!"<<endl;
     if(((numq*quarter)+(numd*dime)+(numn*nickel)+(nump*penny))>1)
         cout<<"You change is greater than one dollar!"<<endl;
//output here    
    cout<<"Thanks for playing!"<<endl;
    return 0;
}

