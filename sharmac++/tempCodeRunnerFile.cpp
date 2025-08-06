#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int a = n; // You can change this to any starting value
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        a = a * 2;
    }
    return 0;
}