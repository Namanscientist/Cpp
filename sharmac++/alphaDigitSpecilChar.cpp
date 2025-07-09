//Take a character input and use if-else to
//check whether it is an alphabet, digit,
//or special symbol.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        cout<<"Character";
    }
    else if(ch>=48 && ch<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Special character";
    }
    return 0;
}