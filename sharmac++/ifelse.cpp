//Take positive integer input and tell if it is even or odd.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number : ";
//     cin>>x;
//     if(x%2==0){
//         cout<<"It is even number";
//     }
//     else
//     cout<<"It is od number";
//         return 0;  
// }

//Take positive integer input and tell if it is divisible
//by 5 or not.
// #include<iostream> 
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number : ";
//     cin>>x;
//     if(x<0){
//         cout<<"INVALID NUMBER";
//     }
//     else if(x%5==0){
//         cout<<"Divisior of 5";
//     }
//     else
//     cout<<"Not divisior of 5";
//     return 0;
// }

//Take integer inout and print the absolute
//value of that integer.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;    //absolute means (modulus)
//     cout<<"Enter the number : ";
//     cin>>x;
    // if(x>=0){
    //     cout<<x;
    // }  //absolute means "return always +ve no. "
    // else{
    //     cout<<-x;
    //     return 0;
    // }
    // if(x<0) x=-x;
    // cout<<x;
// }

//If cost price and seling price of an item
//is inout through the keyboard , WAP to 
//determine whether the seller has made 
//profit or incrussed loss or no profit
//no loss. Also determine how much profit
//he made or loss he incurred.
// #include<iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"Enter cost price : ";
//     cin>>cp;
//     int sp;
//     cout<<"Enter selling price : ";
//     cin>>sp;
//     if(sp>cp){
//         cout<<"PROFIT "<<sp-cp;//to check how much profit made.
//     }
//     if(sp<cp){
//         cout<<"LOSS " <<cp-sp;//to check how much loss made.
//     }
//     if(cp==sp){
//         cout<<"No Profit No Loss";
//     }
//     return 0;
// }

//Given the length and breadth of a rectangle, WAP to 
//find whether the area of the rectanglee is greater
//its perimeter.
// #include<iostream>
// using namespace std;
// int main(){
//     int l , b , area , perimeter;
//     cout<<"Enter the length : ";
//     cin>>l;
//     cout<<"Enter the breadth : ";
//     cin>>b;
//     area = l*b;
//     cout<<area<<endl;
//     perimeter = 2*(l+b);
//     if(area>perimeter){
//         cout<<"Area is greater than perimeter"<<endl;
//     }
//     else{
//         cout<<"Perimeter is greater than area";
//     }
//     return 0;
// }

//Topic : "multiple conditions using && and ||".
//Take positive integer input and tell if it is a 
// three digit number or not.
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     // Check if n is a three-digit number
//     if (n>99 && n<1000) { // also use "and".
//         cout << "It's a three-digit number." << endl;
//     } else{
//         cout << "It's NOT a three-digit number." << endl;
//     }
//     return 0;
// }

//Take positive integer input and tell if it is 
//divisible by 5 and 3.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number : ";
//     cin>>x;
//     if(x<0){
//         cout<<"INVALID NUMBER";
//     }
//     else if(x%5==0 && x%3==0){
//         cout<<"Divisible by both 3 and 5";
//     }
//     else{
//         cout<<"NOT Divisible by both 3 and 5";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number : ";
//     cin>>x;
//     if(x<0){
//         cout<<"INVALID NUMBER";
//     }
//     else if(x%5==0 || x%3==0){
//         cout<<"Divisible by  3 or 5";
//     }
//     else{
//         cout<<"NOT Divisible by 3 or 5";
//     }
//     return 0;
// }

//Take 3 numbers input and tell type of the triangle.
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cout << "Enter the side of A: ";
//     cin >> a;
//     cout << "Enter the side of B: ";
//     cin >> b;
//     cout << "Enter the side of C: ";
//     cin >> c;

//     // Check for triangle type
//     if (a == b && b == c) {
//         cout << "Equilateral Triangle" << endl;
//     } else if (a == b || b == c || a == c) {
//         cout << "Isosceles Triangle" << endl;
//     } else {
//         cout << "Scalene Triangle" << endl;
//     }

//     return 0;
// }

//Take 3 number input and tell if they can be sides of 
// a triangle.
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b , c;
//       cout << "Enter the side of A: ";
//     cin >> a;
//     cout << "Enter the side of B: ";
//     cin >> b;
//     cout << "Enter the side of C: ";
//     cin >> c; //sum of 2 sides should greater than 3rd side.
//     if((a+b)>c && (c+a)>a && (c+a)>b){
//         cout<<"VALID TRIANGLE";
//     }
//     else{
//         cout<<"INVALID TRIANGLE";
//     }
// }

// Take 3 positive integers input and print the
// greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"Enter the value of A : ";
    cin>>a;
     cout<<"Enter the value of B : ";
    cin>>b;
     cout<<"Enter the value of C : ";
    cin>>c;
    if(a>b){
        cout<<"A is greatest number.";
    }
    else if(b>c){
        cout<<"B is greatest number.";
    }
    else{
        cout<<"C is greatest number.";
    }
}