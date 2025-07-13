// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxVal = arr[0], minVal = arr[0];

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxVal) maxVal = arr[i];
//         if(arr[i] < minVal) minVal = arr[i];
//     }

//     cout << "Maximum value: " << maxVal << endl;
//     cout << "Minimum value: " << minVal << endl;

//     return 0;
// }

// Reverse the array.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing the array
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}