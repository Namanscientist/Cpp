// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Data Type Size Explorer in C++\n\n";

//     // Integer types
//     cout << "int: " << sizeof(int) << " bytes\n";
//     cout << "short: " << sizeof(short) << " bytes\n";
//     cout << "long: " << sizeof(long) << " bytes\n";
//     cout << "long long: " << sizeof(long long) << " bytes\n";

//     // Unsigned integer types
//     cout << "unsigned int: " << sizeof(unsigned int) << " bytes\n";
//     cout << "unsigned short: " << sizeof(unsigned short) << " bytes\n";
//     cout << "unsigned long: " << sizeof(unsigned long) << " bytes\n";
//     cout << "unsigned long long: " << sizeof(unsigned long long) << " bytes\n";

//     // Character types
//     cout << "char: " << sizeof(char) << " bytes\n";
//     cout << "unsigned char: " << sizeof(unsigned char) << " bytes\n";
//     cout << "signed char: " << sizeof(signed char) << " bytes\n";
//     cout << "wchar_t: " << sizeof(wchar_t) << " bytes\n";
//     cout << "char16_t: " << sizeof(char16_t) << " bytes\n";
//     cout << "char32_t: " << sizeof(char32_t) << " bytes\n";

//     // Floating-point types
//     cout << "float: " << sizeof(float) << " bytes\n";
//     cout << "double: " << sizeof(double) << " bytes\n";
//     cout << "long double: " << sizeof(long double) << " bytes\n";

//     // Boolean type
//     cout << "bool: " << sizeof(bool) << " bytes\n";

//     // Pointer type
//     cout << "int*: " << sizeof(int*) << " bytes\n";
//     cout << "char*: " << sizeof(char*) << " bytes\n";
//     cout << "void*: " << sizeof(void*) << " bytes\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Global variable (Global Scope)
// int globalVar = 10;

// void functionScopeDemo() {
//     // Function-scope variable
//     int functionVar = 20;
//     cout << "Inside functionScopeDemo - globalVar: " << globalVar << endl;
//     cout << "Inside functionScopeDemo - functionVar: " << functionVar << endl;

//     {
//         // Block scope (inside function)
//         int blockVar = 30;
//         cout << "Inside inner block - blockVar: " << blockVar << endl;
//     }

//     // Uncommenting the next line will cause an error:
//     // cout << blockVar; // ❌ blockVar is not visible here (block scope)
// }

// int main() {
//     cout << "In main - globalVar: " << globalVar << endl;

//     // Function-scope variable
//     int functionMainVar = 40;
//     cout << "In main - functionMainVar: " << functionMainVar << endl;

//     {
//         // Block scope inside main
//         int blockMainVar = 50;
//         cout << "Inside block in main - blockMainVar: " << blockMainVar << endl;
//     }

//     // Uncommenting the next line will cause an error:
//     // cout << blockMainVar; // ❌ blockMainVar not accessible here

//     functionScopeDemo(); // Call another function to see scope differences

//     return 0;
// }

//Conversion integer to float.
#include <iostream>
#include<cstdio>
using namespace std;
int main() {
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    float result = x;
    printf("%.2f",result);
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cout<<"Enter the value of x : ";
//     cin>>x;
