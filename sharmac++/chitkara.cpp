// #include<iostream>
// using namespace std;
// int main(){
//     double d = 6+7*4/3-6*4;
//     cout<<d;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int m=6;
//     int n=7;
//     m+= m++ + n++ + ++n + m+n -n-- +m--;
//     cout<<m<<","<<n;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x =5;
//     bool res = (x==5) || (x++);
//     cout<<res<<" "<<x;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10,b=20,c=30;
//     if(c>b>a)
//     cout<<"yes";
//     else;
//     cout<<"no";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 7;
//     if(x>10)
//     cout<<"GREATER THAN 10";
//     else
//     if(x>5)
//     cout<<"GREATER THAN 5";
//     else
//     cout<<"SMALLEST THAN OR EQUAL TO 5";
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     char g;
//     cout<<"Enter the age :";
//     cin>>a;
//     cout<<"Enter the gender :";
//     cin>>g;
//     if(g=='m')
//     if(0<a<18)
//     cout<<"MALE KID";
//     else
//     cout<<"MALE ADULT";
//     if(g=='f')
//     if(0<a<18)
//     cout<<"FEMALE KID";
//     else
//     cout<<"FEMALE ADULT";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter a number";
//     int x;
//     cin>>x;
//     case1:
//     cout<<"Amir khan";
//     case2:
//     cout<<"naman";
//     default:
//     cout<<"akhsay";
//     case3:
//     cout<<"sharma";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "enter a number: ";
//     int x;
//     cin >> x;

//     switch(x) {
//         case 1:
//             cout << "Amir khan";
            
//         case 2:
//             cout << "naman";
            
//         case 3:
//             cout << "sharma";
            
//         default:
//             cout << "akhsay";
//     }

//     return 0;
// }

//Find largest of three numbers.
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << "A is the greatest number";
    } 
    else 
    if (b >= a && b >= c) {
        cout << "B is the greatest number";
    } 
    else {
        cout << "C is the greatest number";
    }
    return 0;
}