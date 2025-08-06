// LOOPS (repetition).
//WAP to print "Hello World" 4 times.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=4; i++){
//         cout<<"hello World"<<endl;
//     }
//     return 0;
// }

//Take n as input from user.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for( int i=1; i<=n; i++){
//         cout<<"NAMAN SHARMA"<<endl;
//     }
//     return 0;
// }

//Print all even numbers from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if(i%2==0){
//             cout<<i<<" "<<endl;
//         }
//     }
//     return 0;
// }

//Print all odd numbers from 1 to 100.
// #include<iostream>
// using namespace std;
// int main(){
//     // for(int i=1; i<=100; i++){
//     //     if(i%2!=0){
//     //         cout<<i<<" "<<endl;
//     //     }
//     // }
//     for(int i=1; i<=100; i=i+2){
//         cout<<i<<" "<<endl;
//     }
//     return 0;
// }

//WAP to print table take input from user.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the value of x : ";
//     cin>>x;
//     for(int i=1; i<=10; i++){
//         cout<<x<<"*"<<i<<"="<<i*x<<endl;
//     } // x(number) 
//     return 0;
// }

//Display this AP- 1,3,5,7,9....n.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of x : ";// how many no. printed.
//     cin>>n;
//     for(int i=1; i<=2*n-1; i+=2){
//             cout<<i<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,x;
//     cout<<"Enter the number of terms : ";// how many no. printed.
//     cin>>n;
//     cout<<"Enter the no. of gaps : ";
//     cin>>x;
//     for(int i=1; i<=n*x-1; i+=x){
//             cout<<i<<" ";
//     }
// }

// Display this GP(geomwtric progression) - 1,2,4,8,16,32,64..n.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout << "Enter the value of x: ";
//     cin >> x;

//     int a = 4;
//     for(int i = 1; i <= x; i++){
//         cout << a << " ";
//         a = a * 3;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout << "Enter the value of x: ";
//     cin >> x;

//     int a = 3;
//     for(int i = 1; i <= x; i++){
//         cout << a << " ";
//         a = a * 4;
//     }
//     return 0;
// }

// #include <iostream>
// #include <memory>
// using namespace std;
// int main() {
//     std::unique_ptr<int> p1(new int(42));
//     std::cout << "Number : " << *p1 << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <memory>
// using namespace std;

// int main() {
//     shared_ptr<int> p1 = make_shared<int>(42);
//     shared_ptr<int> p2 = p1;
//     cout << "Value from p1: " << *p1 << endl;
//     cout << "Value from p2: " << *p2 << endl;
//     cout << "Use count (shared owners): " << p1.use_count() << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int x) {
//      cout << "int: " << x <<endl;
// }
// void print(float x) {
//      cout << "float: " << x <<endl;
// }
// int main(){
//     print(10);
//     print(65.232f);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void change(int x) {
//     x = 10;  // Modifies local copy
// }
// int main() {
//     int num = 5;
//     change(num);  // Still 5 after function call
//     cout << "Value of num after calling change: " << num << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void change(int &x) {
//     x = 10;  // Directly modifies the original variable
// }
// int main() {
//     int num = 5;
//     change(num);  // num is now updated
//     cout << "Value of num after calling change: " << num << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int& getfirst(int arr[], int size) {
//     return arr[0];  // Return reference to first element
// }
// int main() {
//     int data[3] = {1, 2, 3};  // Use curly braces for array initialization
//     getfirst(data, 3) = 99;   // Modify data[0] directly
//     cout << data[0] << endl;  // Will print 99
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Function returns reference to the largest element
// int& getLargest(int arr[], int size) {
//     int maxIndex = 0;
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//     }
//     return arr[maxIndex];  // Return by reference
// }
// int main() {
//     int data[] = {12, 45, 32, 67, 28};
//     int size = sizeof(data) / sizeof(data[0]);
//     // Print before modification
//     cout << "Before: ";
//     for (int i = 0; i < size; ++i) {
//         cout << data[i] << " ";
//     }
//     cout << endl;
//     // Modify the largest value
//     getLargest(data, size) = 0;
//     // Print after modification
//     cout << "After: ";
//     for (int i = 0; i < size; ++i) {
//         cout << data[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Before swap: a = " << a << ", b = " << b << endl;
//     int c = a;
//     a = b;
//     b = c;
//     cout << "After swap:  a = " << a << ", b = " << b << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void doubleValue(int* ptr) {
//     *ptr = (*ptr) * 2;
// }
// int main() {
//     int num ;
//     cout << "Before: num = " << num << endl;
//     cin>>num;
//     doubleValue(&num); 
//     cout << "After:  num = " << num << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     // for (int i=19;i<=190;i++){
//     //     if(i%19==0)
//     //     cout<<i<<" "<<endl;
//     // }
//       for (int i=19;i<=190;i+=19){
//         cout<<i<<" "<<endl;
//     }
//     return 0;
// }

//Print the table of 'n'. Here 'n' is a integer take input.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//       for (int i=1;i<=10;i++){
//         cout<<n<<"x"<<i<<"="<<n*i<<endl;
//     }
//     return 0;
// }

//Display this AP - 1,3,5,,7,9.. upto 'n' terms .
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the starting digit : ";
//     cin>>n;
//     // for (int i=1;i<=10*n-1;i+=10){
//     //     cout<<i<<" "<<endl;
//     // }
//     int a =4;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ";
//         a = a+5;
//     }
// }

//Display this GP - 1,2,4,8,16,32,64.....n terms.
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     int a = n; // You can change this to any starting value
//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         a = a * 2;
//     }
//     return 0;
// }

//WAP to find the highest factor of a number "n" 
//(other than n itself).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;

}