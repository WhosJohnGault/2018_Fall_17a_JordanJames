/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 29, 2018, 1:01 PM
 */
//system libraries

#include <iostream>
#include <cstdlib>
//user libraries

//global constants

//Function Prototypes

//Execution begins here
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    unsigned char cx=0xDB;  //wd 8 bp 4 13.7 shifted binary
    unsigned char cy=0b00100000; //wd 7 bp 0 32
    unsigned short cRes;
    //Process/Map inputs to outputs
    cRes=cx*cy; //wd 14 bp 4
    cRes>>=4; //wd10 bp 0
    
    //output data
    cout<<static_cast<int>(cx)<<" Shifted Binary= 13.7 = /16"<<endl;
    cout<<static_cast<int>(cy)<<" Regular integer"<<endl;
    cout<<cRes<<endl;
    cout<<13.7*32<<endl;
    
    return 0;
}

