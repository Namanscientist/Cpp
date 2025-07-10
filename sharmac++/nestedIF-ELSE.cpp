// NESTED if-else
// greatest of three using nested loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter the first number : ";
//     cin>>a;
//     cout<<"Enter the second number : ";
//     cin>>b;
//     cout<<"Enter the third number : ";
//     cin>>c;
//     if(a>b){  // b can never be greater.
//         if(a>c){
//             cout<<a<<"Is greater number";
//         }
//         else{
//             cout<<c<<"Is greater number";
//         }
//     }
//     else{
//         if(b>c){
//             cout<<b<<"Is greater number";
//         }
//         else{
//             cout<<c<<"Is greater number";
//         }
//     }
//     return 0;
// }

//If the age of Ram , Shyam , Ajay are input through the
//Keybiard. WAP to determinr youngest of the three.
#include<iostream>
using namespace std;
int main(){
 int  Ram , Shyam , Ajay ;
 cout<<"Enter the age of Ram : ";
 cin>>Ram;

  cout<<"Enter the age of Shyam : ";
  cin>>Shyam;
  
   cout<<"Enter the age of Ajay : ";
   cin>>Ajay;
  
 if(Ram<Shyam){
    if(Ram<Ajay){
        cout<<Ram<<" Is youngest";
    }
    else{
       cout<<Ajay<<" Is youngest";
    }
 }
 else{
    if(Shyam<Ajay){
        cout<<Shyam<<" Is youngest";
    }
    else{
        cout<<Ajay<<"Is youngest";
    }
 }
 return 0;
}