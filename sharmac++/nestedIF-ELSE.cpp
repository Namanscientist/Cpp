// NESTED if-else
// greatest of three using nested loop.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if(a>b){  // b can never be greater.
        if(a>c){
            cout<<a<<"Is greater number";
        }
        else{
            cout<<c<<"Is greater number";
        }
    }
    else{
        if(b>c){
            cout<<b<<"Is greater number";
        }
        else{
            cout<<c<<"Is greater number";
        }
    }
    return 0;
}

