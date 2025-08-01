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

// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout << "Enter the value of x : ";
//     cin >> x;
//     if(x % 2 == 0)
//         cout << "Even Number." << endl;
//     else
//         cout << "Odd Number." << endl;
//     if(x > 0)
//         cout << "Positive Number." << endl;
//     else if(x < 0)
//         cout << "Negative Number." << endl;
//     else
//         cout << "Zero." << endl;
//     if(x % 3 == 0 && x % 5 == 0)
//         cout << "Divisible by both 3 and 5." << endl;
//     else
//         cout << "Not Divisible by both 3 and 5." << endl;
//     if(x>-10 && x<9){
//         cout<<"Single digit number.";
//     }
//     else{
//         cout<<"Not single digit number.";
//     }
//     return 0;
// }

// Question 4: BankingSystem withLocal/Global Variables
// Write a C++ program that simulates a simple banking system:
// Use a global variable totalBankBalance to track overall bank money
// Create functions:
// depositMoney(double amount) - adds to both account and total bank balance
// withdrawMoney(double amount) - deducts if sufficient balance exists
// displayBalances() - shows both account and total bank balance
// In main(), demonstrate how local account balance and global bank balance work differently
// Use static local variable inside functions to count total transactions

#include <iostream>
using namespace std;

// 🌐 Global variables to track shared balances
double totalBankBalance = 0.0;
double accountBalance = 0.0;  // Shared across all functions

// 💰 Function to deposit money
void depositMoney(double amount) {
    static int depositCount = 0;
    depositCount++;

    accountBalance += amount;
    totalBankBalance += amount;

    cout << "[Deposit #" << depositCount << "] Amount: ₹" << amount << endl;
    cout << " -> Account Balance: ₹" << accountBalance << endl;
    cout << " -> Total Bank Balance: ₹" << totalBankBalance << endl << endl;
}

// 💸 Function to withdraw money
void withdrawMoney(double amount) {
    static int withdrawCount = 0;
    withdrawCount++;

    if (amount <= accountBalance) {
        accountBalance -= amount;
        totalBankBalance -= amount;
        cout << "[Withdrawal #" << withdrawCount << "] Amount: ₹" << amount << endl;
    } else {
        cout << "[Withdrawal #" << withdrawCount << "] ❌ Insufficient funds! Attempted ₹" << amount << endl;
    }

    cout << " -> Account Balance: ₹" << accountBalance << endl;
    cout << " -> Total Bank Balance: ₹" << totalBankBalance << endl << endl;
}

// 📊 Function to display both balances
void displayBalances() {
    cout << "[Display] Account Balance: ₹" << accountBalance << endl;
    cout << "[Display] Total Bank Balance: ₹" << totalBankBalance << endl << endl;
}

// 🚀 Main simulation loop
int main() {
    cout << "📌 Banking System Simulation Started\n" << endl;

    int choice;
    double amount;

    do {
        cout << "Choose an option:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Balances\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ₹";
                cin >> amount;
                depositMoney(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;
                withdrawMoney(amount);
                break;
            case 3:
                displayBalances();
                break;
            case 4:
                cout << "🔚 Exiting Simulation.\n";
                break;
            default:
                cout << "❌ Invalid choice. Try again.\n\n";
        }
    } while(choice != 4);

    return 0;
}