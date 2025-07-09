// NESTED if-else
// greatest of three using nested loop.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    if(a>b){  // b can never be greatest.
        if(a>c){
            cout<<a<< "Is greatest number.";
        }
        else{
            cout<<c<< "Is greatest number.";
    }
}
else{
    cout<<b<< "Is greatest.";
}
return 0;
}