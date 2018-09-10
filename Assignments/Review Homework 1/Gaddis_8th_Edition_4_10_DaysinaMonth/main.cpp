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
using namespace std;


 // Name global Constants here Pi

//function names go here 

int main(int argc, char** argv) {
    
 //initialize variables
int year; //this will be input to determine if the year is a leep year
int month;  // number of a month
bool leap;
bool nleap;
//assign values to variables
cout<<"enter the year to find out the number of days in a month"<<endl;
cin>>year;

if (year%100==0&&year%400==0)
{
cout<<"This is a leap year"<<endl;
leap=true;
}
else if (year%100!=0&&year%4==0)
{
    cout<<"This is a leap year"<<endl;
leap=true;
}
else if (year%100==0&&year%400!=0 )    
{
    cout<<"This is not a leap year"<<endl;
nleap=true;
}
else
{    
    cout<<"This is not a leap year"<<endl;
nleap=true;
}
cout<<"Please enter a month"<<endl;
cin>>month;
if (leap){
    switch (month){
         case 1:  cout<<"31 days";
         break;   //January
        case 2:   cout<<"29 days";
        break;        //February
        case 3:   cout<<"31 days";
        break;        //March
        case 4:   cout<<"30 days";
        break;        //April
        case 5:   cout<<"31 days";
        break;        //May
        case 6:   cout<<"30 days";
        break;        //June
        case 7:   cout<<"31 days";
        break;        //July 
        case 8:   cout<<"31 days";
        break;        //August
        case 9:   cout<<"30 days";
        break;        //September 
        case 10: cout<<"31 days";
        break;      //October
        case 11: cout<<"30 days";
        break;      //November
        case 12: cout<<"31 days";
        break;      //December 
        default: cout<<"Congratulations on inventing a new month";
        break;
    }
}

         if(nleap){  
        switch (month){
         case 1:   cout<<"31 days";
         break;   //January
         case 2:   cout<<"28 days";
         break;        //February
         case 3:   cout<<"31 days";
         break;        //March
         case 4:   cout<<"30 days";
         break;        //April
         case 5:   cout<<"31 days";
         break;        //May
         case 6:   cout<<"30 days";
         break;        //June
         case 7:   cout<<"31 days";
         break;        //July 
         case 8:   cout<<"31 days";
         break;        //August
         case 9:   cout<<"30 days";
         break;        //September 
         case 10: cout<<"31 days";
         break;      //October
         case 11: cout<<"30 days";
         break;      //November
         case 12: cout<<"31 days";
         break;      //December 
          default: cout<<"Congratulations on inventing a new month";
          break;
        }
         }
//calculations go here

//output here    

    return 0;
}

