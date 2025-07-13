// Switch Statement.(Another replacement for if-else)
//WAP to create a calculator that performs basic airthmetic 
//operations (add , subtract , multiply , divide) using
//switch case and functions . The calculator should input
//two numbers and an operator from user.

// #include<iostream>
// using namespace std;

// int main(){
//     int x, y;
//     char cal;
//     cout << "Enter the value of x : ";
//     cin >> x;
//     cout << "Enter the value of y : ";
//     cin >> y;
//     cout << "Enter the operator (+, -, *, /) : ";
//     cin >> cal;

//     if(cal == '+') cout << x + y;
//     else if(cal == '-') cout << x - y;
//     else if(cal == '*') cout << x * y;
//     else if(cal == '/') {
//         if (y != 0) cout << x / y;
//         else cout << "Error: Division by zero!";
//     }
//     else cout << "Invalid operator.";

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select a programming language:\n";
    cout << "1. Python\n";
    cout << "2. C++\n";
    cout << "3. Java\n";
    cout << "4. JavaScript\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Python is great for beginners and AI development!";
            break;
        case 2:
            cout << "C++ is powerful for system-level programming.";
            break;
        case 3:
            cout << "Java is widely used in enterprise applications.";
            break;
        case 4:
            cout << "JavaScript brings life to webpages!";
            break;
        default:
            cout << "Invalid choice. Try again!";
    }

    return 0;
}