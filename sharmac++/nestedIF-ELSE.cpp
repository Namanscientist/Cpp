// NESTED if-else
// greatest of three using nested loop.
//#include<iostream>
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
// #include<iostream>
// using namespace std;
// int main(){
//  int  Ram , Shyam , Ajay ;
//  cout<<"Enter the age of Ram : ";
//  cin>>Ram;

//   cout<<"Enter the age of Shyam : ";
//   cin>>Shyam;
  
//    cout<<"Enter the age of Ajay : ";
//    cin>>Ajay;
  
//  if(Ram<Shyam){
//     if(Ram<Ajay){
//         cout<<Ram<<" Is youngest";
//     }
//     else{
//        cout<<Ajay<<" Is youngest";
//     }
//  }
//  else{
//     if(Shyam<Ajay){
//         cout<<Shyam<<" Is youngest";
//     }
//     else{
//         cout<<Ajay<<"Is youngest";
//     }
//  }
//  return 0;
// }

// Take input percentage of a student and print the GRADE
// according to the marks.

// #include<iostream>
// using namespace std;
// int main(){
//     float percentage;
//     cout << "Enter the percentage: ";
//     cin >> percentage;
// if(percentage >= 80 && percentage<=100){
//         cout << "Grade A";
//     }
//     else if(percentage >= 70){
//         cout << "Grade B";
//     }
//     else if(percentage >= 60){
//         cout << "Grade C";
//     }
//     else if(percentage >= 50){
//         cout << "Grade D";
//     }
//     else if(percentage >= 40){
//         cout << "Grade E";
//     }
//     else if(percentage >= 0 && percentage < 40){
//         cout << "FAIL!";
//     }
//     else {
//         cout << "Invalid percentage entered.";
//     }
//     return 0;
// }

// Givwn a point (x,y) , WAP to find out if it lies in the
// 1st Quadrant, 2nd Quadrant, 3rd Quadrant, $th Quadrant
// on the x-axis, y-axis or at origin viz.(0,0);

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     int y;
//     cout<<"Enter the value of x : ";
//     cin>>x;
//     cout<<"Enter the value of y : ";
//     cin>>y;
//     if(x>0 && y>0){
//         cout<<"x and y both lies in 1st quadrant";
//     }
//     else if(x<0 && y>0){
//         cout<<"x and y both lies in 2nd quadrant";
//     }
//     else if(x<0 && y<0){
//         cout<<"x and y both lies in 3rd quadrant";
//     }
//     else if(x>0 && y<0){
//         cout<<"x and y both lies in 4th quadrant";
//     }
//     else{
//         cout<<"x and y lies on origin";
//     }
//     return 0;
// }