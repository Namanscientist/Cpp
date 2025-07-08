// Calculating the Area of a Circle
// #include<iostream>
// using namespace std;
// int main(){
//     float pi = 3.14, radius , Area;
//     cout<<"Enter the radius of circle :";
//     cin>>radius;
//     Area = pi * radius *radius;
//     cout<<"Area of cirlce is :"<<Area<<endl;
//     return 0;
// }

// Find SIMPLE INTEREST.
// #include<iostream>
// using namespace std;

// int main(){
//     float principal, rate, time, interest;
//     cout << "Enter Principal amount: ";
//     cin >> principal;
//     cout << "Enter Rate of Interest (per annum): ";
//     cin >> rate;
//     time = 4.0 / 365.0;
//     interest = (principal * rate * time) / 100;
//     cout << "Simple Interest for 4 days is: " << interest << endl;
//     return 0;
// }

// Calculate the Colume of a Sphere
// #include<iostream>
// using namespace std;
// int main(){
//     float pi = 3.14, radius , Volume;
//     cout<<"Enter the radius of Sphere :";
//     cin>>radius;
//     Volume = (4.0/3.0)*pi * radius *radius * radius;
//     cout<<"VOlume of Shpeher is :"<<Volume<<endl;
//     return 0;
// }

// WAP to print square of any number.
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number :";
//     cin>>x;
//     cout<<"Square of the number :";
//     cout<<x*x;
//     return 0;

// }

//WAP to take integer 'x' as inputand print
//half of the number.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the integer :";
    cin>>x;
    float y = (float)x;  //type casting.
    cout<<y/2;
    return 0;
}