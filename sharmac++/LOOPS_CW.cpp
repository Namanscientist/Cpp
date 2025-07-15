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
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    for(int i=1; i<=10; i++){
        cout<<x<<"*"<<i<<"="<<i*x<<endl;
    } // x(number) 
    return 0;
}