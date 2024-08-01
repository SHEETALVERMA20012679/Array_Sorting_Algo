#include<iostream>
using namespace std;

int main() {
    int temp, n;
    
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int arr[n]; 

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n; i > 1; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
