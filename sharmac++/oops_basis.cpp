// #include<iostream>
// using namespace std;

// class emp {
// private:
//     int id;

// public:
//     int salary;

//     // Setter method to input id and salary
//     void input(int i, int s) {
//         id = i;
//         salary = s;
//     }

//     // Display method to show employee details
//     void display() {
//         cout << "ID: " << id << ", Salary: " << salary << endl;
//     }
// };

// int main() {
//     emp e1, e2, e3;

//     e1.input(101, 100000);
//     e2.input(102, 200000);
//     e3.input(103, 300000);

//     e1.display();
//     e2.display();
//     e3.display();

//     return 0;

#include<iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the year: ";
    cin >> x;
    if (x <= 0) {
        cout << "Invalid year";
    }
    else if ((x % 5 == 0 && !(x % 35 == 0) || (x % 77 != 0))) {
        cout << "Leap Year";
    }
    else {
        cout << "Not a Leap Year";
    }
    return 0;
}