/*
 *It occured to me after i wrote this that it would have been easier to set up a nested if statement to determine if the year was a leap year
 * then prompted the user for a month
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
    char month;
    int year;
//assign values to variables
    cout<<"This program will show the number of days in a month for a year"<<endl;
    cout<<"Please enter a month using a number"<<endl;
      cin>>month;
      if(month<1||month>12){ //this will filter out invalid inputs for months
         
    cout<<"Please enter a year"<<endl;
    
            cin>>year; //user will input a 4 digit year 
            
            if (year%100==0&&year%400==0){ //if the user inputs a year that is divisible by 100 and also 400 it is a leap year
                switch (month){
         case '1':cout<<"31 days";break;   //January
        case '2':cout<<"29 days";break;        //February
        case '3':cout<<"31 days";break;        //March
        case '4':cout<<"30 days";break;        //April
        case '5':cout<<"31 days";break;        //May
        case '6':cout<<"30 days";break;        //June
        case '7':cout<<"31 days";break;        //July 
        case '8':cout<<"31 days";break;        //August
        case '9':cout<<"30 days";break;        //September 
        case '10':cout<<"31 days";break;      //October
        case '11':cout<<"30 days";break;      //November
        case '12':cout<<"31 days";break;      //December 
            }
            }
        if (year%100==0&&year%400!=0){
                switch (month){
         case '1':cout<<"31 days";break;   //January
        case '2':cout<<"28 days";break;     //February   
        case '3':cout<<"31 days";break;     //March
        case '4':cout<<"30 days";break;     //April   
        case '5':cout<<"31 days";break;     //May 
        case '6':cout<<"30 days";break;     //June
        case '7':cout<<"31 days";break;      //July     
        case '8':cout<<"31 days";break;      //August
        case '9':cout<<"30 days";break;      //September   
        case '10':cout<<"31 days";break;    //October
        case '11':cout<<"30 days";break;     //November
        case '12':cout<<"31 days";break;     //December    
            }
            }
    if (year%100!=0&&year%4==0){
                switch (month){
         case '1':cout<<"31 days";break;   //January
        case '2':cout<<"29 days";break;    //February    
        case '3':cout<<"31 days";break;     //March
        case '4':cout<<"30 days";break;     //April   
        case '5':cout<<"31 days";break;     //May 
        case '6':cout<<"30 days";break;    //June
        case '7':cout<<"31 days";break;      //July        
        case '8':cout<<"31 days";break;        //August
        case '9':cout<<"30 days";break;        //September    
        case '10':cout<<"31 days";break;      //October
        case '11':cout<<"30 days";break;      //November 
        case '12':cout<<"31 days";break;      //December     
            }
      }
       if (year%100!=0&&year%4!=0){
                switch (month){
         case '1':cout<<"31 days";break;   //January
        case '2':cout<<"28 days";break;   //February     
        case '3':cout<<"31 days";break;     //March
        case '4':cout<<"30 days";break;       //April    
        case '5':cout<<"31 days";break;       //May 
        case '6':cout<<"30 days";break;       //June
        case '7':cout<<"31 days";break;        //July        
        case '8':cout<<"31 days";break;         //August
        case '9':cout<<"30 days";break;        //September    
        case '10':cout<<"31 days";break;      //October
        case '11':cout<<"30 days";break;      //November 
        case '12':cout<<"31 days";break;     //December         
            }
              
      }
      }
      else{
          cout<<"Who invents a new month?"<<endl;
      }
//calculations go here

//output here    

    return 0;
}

