/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Robert McQueen
 */
#include "std_lib_facilities.h"
int main(){
int a =1;
int b=2;

int &num = a;
int &num2 = b;
   addition(num,num2);
}

void addition(int& a, int& b){

    int add = a + b;
    cout<<"Answer is "<<&add<<endl;
}