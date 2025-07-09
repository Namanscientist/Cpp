//Accept a number and use a for loop to find the 
//sum of its digit.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = n; i > 0; i = i / 10) {
        sum += i % 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}