#include<iostream>
using namespace std;

class emp {
private:
    int id;

public:
    int salary;

    // Setter method to input id and salary
    void input(int i, int s) {
        id = i;
        salary = s;
    }

    // Display method to show employee details
    void display() {
        cout << "ID: " << id << ", Salary: " << salary << endl;
    }
};

int main() {
    emp e1, e2, e3;

    e1.input(101, 100000);
    e2.input(102, 200000);
    e3.input(103, 300000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}