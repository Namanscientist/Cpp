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

// Write a C++ program that:
// Declares variables for employee ID (int), employee name (string), basic salary (double), and years
// of experience (int)
// Takes input from user for all values
// Calculates bonus based on experience: 5% for <2 years, 10% for 2-5 years, 15% for >5 years
// Calculates total salary (basic + bonus)
// Uses appropriate data types and displays formatted output

// Enter Employee ID: 1001
// Enter Employee Name: John Smith
// Enter Basic Salary: 50000
// Enter Years of Experience: 3

// === EMPLOYEE DETAILS ===
// ID: 1001
// Name: John Smith
// Basic Salary: $50000.00
// Experience: 3 years
// Bonus Rate: 10%
// Bonus Amount: $5000.00
// Total Salary: $55000.00

// #include <iostream>
// using namespace std;

// int main() {
//     int empID, yearsOfExp;
//     string empName;
//     double basicSalary, bonusRate, bonusAmount, totalSalary;

//     cout << "Enter Employee ID: ";
//     cin >> empID;
//     cout << "Enter Employee Name: ";
//     cin>>empName;
//     cout << "Enter Basic Salary: ";
//     cin >> basicSalary;
//     cout << "Enter Years of Experience: ";
//     cin >> yearsOfExp;

//     if (yearsOfExp < 2)
//         bonusRate = 0.05;
//     else if (yearsOfExp <= 5)
//         bonusRate = 0.10;
//     else
//         bonusRate = 0.15;
//     bonusAmount = basicSalary * bonusRate;
//     totalSalary = basicSalary + bonusAmount;
//     cout << "=== EMPLOYEE DETAILS ===" << endl;
//     cout << "ID: " << empID << endl;
//     cout << "Name: " << empName << endl;
//     cout << "Basic Salary: $" << basicSalary << endl;
//     cout << "Experience: " << yearsOfExp << " years" << endl;
//     cout << "Bonus Rate: " << (bonusRate * 100) << "%" << endl;
//     cout << "Bonus Amount: $" << bonusAmount << endl;
//     cout << "Total Salary: $" << totalSalary << endl;

//     return 0;
// }

// Write a C++ program that:
// Takes a temperature value and unit (C/F/K) as input
// Uses arithmetic operators to convert between Celsius, Fahrenheit, and Kelvin
// Displays the temperature in all three units
// Use appropriate variable types (float/double for precision)
// Conversion Formulas:
// C to F: F = (C × 9/5) + 32
// C to K: K = C + 273.15
// F to C: C = (F - 32) × 5/9

// Sample Input:
// Enter temperature: 25
// Enter unit (C/F/K): C
// Expected Output:
// Original: 25.00°C
// Fahrenheit: 77.00°F
// Kelvin: 298.15K

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double temperature, celsius, fahrenheit, kelvin;
//     char unit;

//     // Input
//     cout << "Enter temperature: ";
//     cin >> temperature;
//     cout << "Enter unit (C/F/K): ";
//     cin >> unit;

//     // Conversion logic
//     switch(toupper(unit)) {
//         case 'C':
//             celsius = temperature;
//             fahrenheit = (celsius * 9/5) + 32;
//             kelvin = celsius + 273.15;
//             break;
//         case 'F':
//             fahrenheit = temperature;
//             celsius = (fahrenheit - 32) * 5/9;
//             kelvin = celsius + 273.15;
//             break;
//         case 'K':
//             kelvin = temperature;
//             celsius = kelvin - 273.15;
//             fahrenheit = (celsius * 9/5) + 32;
//             break;
//         default:
//             cout << "Invalid unit entered!" << endl;
//             return 1;
//     }

//     // Output
//     cout << fixed << setprecision(2);
//     cout << "\nOriginal: " << temperature;
//     if (unit == 'C' || unit == 'c') cout << "°C";
//     else if (unit == 'F' || unit == 'f') cout << "°F";
//     else if (unit == 'K' || unit == 'k') cout << "K";
//     cout << endl;

//     cout << "Celsius: " << celsius << "°C" << endl;
//     cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
//     cout << "Kelvin: " << kelvin << "K" << endl;

//     return 0;
// }

// Write a C++ program that:
// Takes an integer as input
// Uses logical operators to check multiple properties:
// Is it even or odd?
// Is it positive, negative, or zero?
// Is it divisible by both 3 and 5?
// Is it a single digit number?
// Display all results using boolean logic and conditional output

#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    if(x % 2 == 0)
        cout << "Even Number." << endl;
    else
        cout << "Odd Number." << endl;
    if(x > 0)
        cout << "Positive Number." << endl;
    else if(x < 0)
        cout << "Negative Number." << endl;
    else
        cout << "Zero." << endl;
    if(x % 3 == 0 && x % 5 == 0)
        cout << "Divisible by both 3 and 5." << endl;
    else
        cout << "Not Divisible by both 3 and 5." << endl;
    return 0;
}