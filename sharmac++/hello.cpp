// #include<iostream>
// using namespace std;
// int main(){
//     cout << "Hello Naman" << endl;
//     cout << "hello Sharma" << endl;
//     cout << "hello Sharma" << endl;
//     cout << "Hello naman sharma" << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//    cout<<"YAAR HARYANE TTE!!"<<endl;
//    return 0;
// }

// Write a program to create a simple calculator that performs basic arthmetic operations
// using a switch statement.
// take two number as input from the user.
// show a menu with 4 choices:
// press 1 for addition.
// press 2 for subtraction.
// press 3 for multiplication.
// press 4 for division.
// use a switch statement to perform the selected operation.
// display the reslut
// if the user enters an invalid choice , display an error message.

// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2, result;
//     int choice;

//     // Taking two numbers as input
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter second number: ";
//     cin >> num2;

//     // Showing the menu
//     cout << "\n===== MENU =====\n";
//     cout << "Press 1 for Addition\n";
//     cout << "Press 2 for Subtraction\n";
//     cout << "Press 3 for Multiplication\n";
//     cout << "Press 4 for Division\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     // Switch statement to perform operation
//     switch (choice) {
//         case 1:
//             result = num1 + num2;
//             cout << "Result: " << result << endl;
//             break;
//         case 2:
//             result = num1 - num2;
//             cout << "Result: " << result << endl;
//             break;
//         case 3:
//             result = num1 * num2;
//             cout << "Result: " << result << endl;
//             break;
//         case 4:
//             if (num2 != 0)
                
//                 result = num1 / num2;
//             else {
//                 cout << "Error: Cannot divide by zero." << endl;
//                 return 1; // Exit with error
//             }
//             cout << "Result: " << result << endl;
//             break;
//         default:
//             cout << "Invalid choice. Please try again." << endl;
//     }

//     return 0;
// }