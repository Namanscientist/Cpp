// Take student marks as input (0 to 100) and print the grade using.
// If-else: A(90-100) , B(80-89) , C(70-79) , D(60-69) , F(<60).
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    if(marks>100){
        cout<<"INVALID MARKS";
    }
    else if(marks>=90){
        cout<<"A Grade";
    }
    else if(marks>=80){
        cout<<"B Grade";
    }
    else if(marks>=70){
        cout<<"C Grade";
    }
    else if(marks>=60){
        cout<<"D Grade";
    }
    else if(marks<60){
        cout<<"FAIL";
    }
}