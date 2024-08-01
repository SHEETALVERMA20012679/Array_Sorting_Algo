#include<iostream>
using namespace std;

int main() {
    int temp, n;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];

    int m = 0, loc = 0; 
    cout << "Enter the array elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection sort algorithm
    for (int i = 0; i < n - 1; i++) {
        m = arr[i];
        loc = i;
        for (int j = i + 1; j < n; j++) {
            if (m > arr[j]) {
                m = arr[j];
                loc = j;
            }
        }
        if (arr[loc] < arr[i]) {
            temp = arr[loc];
            arr[loc] = arr[i];
            arr[i] = temp;
        }
    }

    cout << "Sorted array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
