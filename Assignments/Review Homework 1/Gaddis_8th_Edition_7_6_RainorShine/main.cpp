/*
 * *write a program that stores the weather conditions during a three month period which will be stored in a 3x30
 * array of characters where the row indicates the month and the column indicates the day as either rainy ('R')
 * ,cloudy ('C'), or sunny ('S'). Write a program that stores this information in a 3x30 array of characters, where
 * the row indicates the month (0=June, 1=July, 2=August) and the column indicates the day of the month
 * the program should begin by reading the weather data in from a file. Then it should create a report that displays, 
 * for each month and for the whole three-month period how many days were rainy, how many were cloudy, and
 * how many were sunny. It should also report which of the three months had the largest number of rainy days
 * still need to work on finding which month had the most rainy days
 */

/* 
 * File:   main.cpp
 * Author: James Jordan
 *
 * Created on August 15, 2018, 8:35 PM
 */
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


 // Name global Constants here Pi

int main(int argc, char** argv) {

 //initialize variables
   int row; // rows
   int col; // colums
   
   ifstream inputFile; //input file object
  
//assign values to variables
  
   char weather [30][3];
  
//calculations go here

//output here    
   cout<<"This program reads the numbers of rows and colums in your data file "<<endl;
   cout<<"As well as inputing the data file into  an array"<<endl;
   
   inputFile.open ("RainorShine.txt");
   
   //error check
    if  (!inputFile)
   {
       cout<<"The file failed to open"<<endl;
   }
      //Reading the data file
    
       for(int x=0;x<3; x++) //loop through the first dimension
           for(int y=0; y<30;y++)//loop through the second dimension

           inputFile>>weather[y][x];

    inputFile.close(); //close the file
cout<<"June July August"<<endl;    
    //display the array
      for(int y=0; y<30; y++) //will create a colum 30 elements long
  {  
    for(int x=0; x<3;x++) //will create a row 3 elements wide
        {
            cout<<setw(4)<<weather[y][x]<<" "; 
    }
        cout<<endl;
    }
 
    return 0;
}

