// #include<iostream>
// using namespace std;

// class marks {
// private:
//     int marks_1;
//     int marks_2;
// public:
//     void getMarks() {
//         marks_1 = 90;
//         marks_2 = 95;
//     }

//     int pass_marks() {
//         return marks_1 + marks_2;
//     }

//     void showMarks() {
//         cout << "marks_1: " << marks_1 << endl;
//         cout << "marks_2: " << marks_2 << endl;
//     }
// };

// class grade : public marks {
// private:
//     int grade;
// public:
//     void getGrade() {
//         grade = 12;
//     }

//     int gradepass() {
//         return grade;
//     }
// };

// class result : public grade {
// private:
//     int total;
// public:
//     void getTotal() {
//         total = pass_marks() + gradepass();
//     }

//     void showTotal() {
//         showMarks(); // Use base class function to show marks
//         cout << "Grade: " << gradepass() << endl;
//         cout << "Total: " << total << endl;
//     }
// };

// int main() {
//     result obj;
//     obj.getMarks();
//     obj.getGrade();
//     obj.getTotal();
//     obj.showTotal();
//     return 0;
// }

#include<iostream>
using namespace std;

class base
{
    private:
        int a , b;
    public:
    void get()
    {
    a = 40;
    b = 50;
    }
};
class drive
{
    private:
        int c ,d;
    public:
    void put()
    {
        c = 60;
        d = 70;
    }
}
int main (){

}