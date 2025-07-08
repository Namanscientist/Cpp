// Given a year , write a program to check whether it is a leap year usinf if-else.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year :";
    cin>>year;
    if (year%100 == 4 ||  year%100!=0 && year%4==0) cout<<"LEAP YEAR";
    else cout<<"NOT a LEAP YEAR";
}