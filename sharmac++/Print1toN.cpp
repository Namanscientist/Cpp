// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the numbers : ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<i+1<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <typename T>
// class SmartPtr {
//     T* ptr;
//     int* refCount;

// public:
//     SmartPtr(T* p = nullptr) : ptr(p), refCount(new int(1)) {}

//     SmartPtr(const SmartPtr& sp) {
//         ptr = sp.ptr;
//         refCount = sp.refCount;
//         ++(*refCount);
//     }

//     SmartPtr& operator=(const SmartPtr& sp) {
//         if (this != &sp) {
//             release();
//             ptr = sp.ptr;
//             refCount = sp.refCount;
//             ++(*refCount);
//         }
//         return *this;
//     }

//     ~SmartPtr() {
//         release();
//     }

//     void release() {
//         if (--(*refCount) == 0) {
//             delete ptr;
//             delete refCount;
//         }
//     }

//     T* get() const { return ptr; }
//     void reset(T* p = nullptr) {
//         release();
//         ptr = p;
//         refCount = new int(1);
//     }
//     int use_count() const { return *refCount; }

//     T& operator*() const { return *ptr; }
//     T* operator->() const { return ptr; }
// };

// // Test program
// class Data {
// public:
//     int value;
//     Data(int v) : value(v) {}
//     void show() { cout << "Data: " << value << endl; }
// };

// int main() {
//     SmartPtr<Data> sp1(new Data(42));
//     cout << "sp1 count: " << sp1.use_count() << endl;

//     {
//         SmartPtr<Data> sp2 = sp1;
//         cout << "sp1 count after sp2: " << sp1.use_count() << endl;
//         sp2->show();
//     } // sp2 goes out of scope

//     cout << "sp1 count after sp2 destroyed: " << sp1.use_count() << endl;

//     sp1->value = 99;
//     sp1->show();

//     sp1.reset();
//     cout << "sp1 reset done." << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int calculate(int a, int b) {
//     return a + b;
// }
// float calculate(float a, float b) {
//     return a * b;
// }
// float calculate(int a, int b, int c) {
//     return (a + b + c) / 3.0;
// }
// int main() {
//     cout << "Sum of 3 and 4: " << calculate(3, 4) << endl;
//     cout << "Product of 2.5 and 4.0: " << calculate(2.5f, 4.0f) << endl;
//     cout << "Average of 3, 4, 5: " << calculate(3, 4, 5) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct point{
//     int x;
//     int y;
// };

// int main(){
//     point p;
//     p.x =8;
//     p.y =7;
//     std::cout<<p.x<<" , "<<std::endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct point{
//     int x;
//     int y;
// };
// int main(){
//     point p1,p2;
//     p1.x = 3;
//     p2.x = 6;
//     p1.y = 5;
//     p2.y = 4;
//     cout<<"Addition : ("<<p1.x + p2.y<<","<<p2.x + p1.y<<")"<<endl;
//     cout<<"Subtraction : ("<<p1.x - p2.y<<","<<p2.x - p1.y<<")"<<endl;
//     cout<<"Subtraction : ("<<p1.x * p2.y<<","<<p2.x * p1.y<<")"<<endl;

//     if(p2.y !=0 && p2.x !=0){
//     cout<<"Division : ("<<p1.x / p2.y<<","<<p2.x / p1.y<<")"<<endl;
//    }
//    else{
//     cout<<"Cannot be divided by zero."<<endl;
//    }
//    return 0;
// }

// define a struct called book with 2 members int paper; and int price;
// create a variable of type book (on the stack), assign values and print them in cpp.
// #include <iostream>
// using namespace std;
// struct point{
// int paper;
// double price;
// };
// int main(){
//     int pages;
//     double price;
//     point myBook;
//     cout<<"Enter thr number of pages in a book : ";
//     cin>>pages;
//     cout<<"Price of the book : ";
//     cin>>price;
//     myBook.paper = pages;
//     myBook.price = price;
//     cout<<"\n Book Details :";
//     cout<<"pages : "<<myBook.paper<<endl;
//     cout<<"price : "<<myBook.price<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
class Rectangle {
    public:
    int width;
    int height;
};
int main() {
    int width , height;
    cout<<"Enter the width : ";
    cin>>width;
    cout<<"Enter the height : ";
    cin>>height;
Rectangle box;
box.width = width;
box.height = height;
cout << box.width * box.height <<endl;
return 0;
}