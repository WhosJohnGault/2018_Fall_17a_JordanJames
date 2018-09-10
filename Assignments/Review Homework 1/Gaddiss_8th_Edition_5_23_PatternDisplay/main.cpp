/*
 *Write a program that uses a loop to display Patter A below followed by another loop that displays pattern B.
 */

/* 
 * File:   main.cpp
 * Author: James Jordan
 *
 * Created on August 15, 2018, 8:35 PM
 */
#include <iostream>
#include <string>
using namespace std;


 // Name global Constants here Pi

//function names go here 

int main(int argc, char** argv) {
    
 //initialize variables
   
    int i,k;// variables to allow for patterns
//assign values to variables
    cout<<"Pattern A"<<endl;
    for(i=1;i<=10;i++){ //this for loop will create a right triangle that increases its width by 1 up to 9 times for a total of 10 + signs
      for(k=1;k<=i;k++){  //this loop starts with one plus sign and increments per line
           cout<<"+"; //this is a symbol while will be used to verify the pattern is correct
       } 
       cout<<"\n"; //ends a line for the loop to continue incrementing
    }
    
    cout<<"Pattern B"<<endl; //pattern B starts with ten + signs that decrease by 1 per row and is left justified
    for(i=1;i<=10;i++)  //this loop is used to create the number of rows
    {
        
        for(k=10;k>=i;k--) //this loop is used for the number of + signs in a row
        {
            cout<<"+";
        }
        cout<<"\n"; //skips a line in order to start the loop on a new line
    }
//calculations go here

//output here    

    return 0;
}

