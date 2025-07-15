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

#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int a = 3;
    for(int i = 1; i <= x; i++){
        cout << a << " ";
        a = a * 4;
    }
    return 0;
}