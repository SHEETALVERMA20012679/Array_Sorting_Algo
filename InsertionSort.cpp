#include<iostream>
using namespace std;

int main() {
    int n, temp;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int a[n];

    cout << "Enter the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Insertion sort algorithm
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        
     
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
