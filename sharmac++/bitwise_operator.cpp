// Bitwise operator practice: WAP.
// Takes a number as input.
// Display its biary represtation.
// Perform all bitwise operations with other number.
// Shows practical uses like checking even/odd, multiplying
// by powers of 2.

//#include<iostream>
// using namespace std;
// int main(){
//     int a , b ;
//     cout<<"Enter the value of A : ";
//     cin>>a;
//     cout<<"Enter the value of B : ";
//     cin>>b;
    #include<iostream>
#include<bitset>  // for binary representation
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    //  Binary representation
    cout << "\nBinary of a: " << bitset<8>(a) << endl;
    cout << "Binary of b: " << bitset<8>(b) << endl;

    //  Bitwise Operations
    cout << "\na & b = " << (a & b) << " --> " << bitset<8>(a & b) << endl;
    cout << "a | b = " << (a | b) << " --> " << bitset<8>(a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << " --> " << bitset<8>(a ^ b) << endl;
    cout << "~a = " << (~a) << " --> " << bitset<8>(~a) << endl;
    cout << "a << 1 = " << (a << 1) << " --> " << bitset<8>(a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << " --> " << bitset<8>(a >> 1) << endl;

    //  Practical Uses
    cout << "\nPractical Use Cases:\n";
    cout << "- Check if a is even or odd: " << ((a & 1) ? "Odd" : "Even") << endl;
    cout << "- a multiplied by 2 using left shift: " << (a << 1) << endl;
    cout << "- a divided by 2 using right shift: " << (a >> 1) << endl;

    return 0;
}
