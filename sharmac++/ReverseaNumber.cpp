//Take an integer and use a for loop to reverse the number.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int reversed = 0;
    for (int i = n; i > 0; i = i/10) {
        int digit = i % 10;
        reversed = reversed * 10 + digit;
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}