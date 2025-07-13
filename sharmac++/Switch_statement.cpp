// Switch Statement.(Another replacement for if-else)
//WAP to create a calculator that performs basic airthmetic 
//operations (add , subtract , multiply , divide) using
//switch case and functions . The calculator should input
//two numbers and an operator from user.

#include<iostream>
using namespace std;

int main(){
    int x, y;
    char cal;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
    cout << "Enter the operator (+, -, *, /) : ";
    cin >> cal;

    if(cal == '+') cout << x + y;
    else if(cal == '-') cout << x - y;
    else if(cal == '*') cout << x * y;
    else if(cal == '/') {
        if (y != 0) cout << x / y;
        else cout << "Error: Division by zero!";
    }
    else cout << "Invalid operator.";

    return 0;
}