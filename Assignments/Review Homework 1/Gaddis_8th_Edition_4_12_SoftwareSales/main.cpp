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

int main(int argc, char** argv) {
    
 //initialize variables
    int quntity; //quantity of software
   float price; //default price of software
   float discount; //discount to applied 
   float dprice;//price after discount
   float nprice;  //equation for price after discount
   float ttlprice; //quantity*discounted price
//assign values to variables
   price=99;
   cout<<"This program will calculate the price of software bundle based on the quantitity bought"<<endl
           <<"It offers discounts ranging from 20% for quantities of 10-19 software bundles"<<endl
           <<"Quantities of 20-49 will offer discounts of 30%"<<endl
           <<"Quantities of 50-99 will offer discounts of 40%"<<endl
           <<"Quantities of 100 of more will offer a 50% discount"<<endl
           <<"How many bundles of software would you like to buy?"<<endl;
           cin>>quntity;
           if(quntity>0&&quntity<10)
           {
               cout<<"You purchased "<<quntity<<" units of software"<<endl;
               nprice=price*quntity;
               
           }
           else if(quntity>9&&quntity<20)
           {
               cout<<"You purchased "<<quntity<<" units of software"<<endl;
               discount=0.20;
               dprice=price*discount;
               nprice=price-dprice;
               ttlprice=nprice*quntity;
           }
           else if(quntity>19&&quntity<50)
           {
               cout<<"You purchased "<<quntity<<" units of software"<<endl;
               discount=0.30;
               dprice=price*discount;
               nprice=price-dprice;
               ttlprice=nprice*quntity;
           }
            else if(quntity>50&&quntity<100)
           {
               cout<<"You purchased "<<quntity<<" units of software"<<endl;
               discount=0.40;
               dprice=price*discount;
               nprice=price-dprice;
               ttlprice=nprice*quntity;
           }
            else if(quntity>99)
           {
               cout<<"You purchased "<<quntity<<" units of software"<<endl;
               discount=0.50;
               dprice=price*discount;
               nprice=price-dprice;
               ttlprice=nprice*quntity;
           }
            else
           {
                cout<<"You really cannot buy negative amounts of goods I have tried"<<endl;
           }
//calculations go here

//output here    
           cout<<"You bought "<<quntity<<" units of software the price will be "<<setprecision(2)<<fixed<<ttlprice<<" dollars"<<endl;
    return 0;
}

