#include<iostream>
using namespace std;

void insertionsort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];           // Store value to insert
        int previous = i - 1;

        // Shift all larger elements to the right
        while (previous >= 0 && arr[previous] > current) {
            arr[previous + 1] = arr[previous];
            previous--;
        }

        // Insert current value at correct position
        arr[previous + 1] = current;
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {8, 6, 5, 8, 3, 2, 1, 4};
    int size = sizeof(arr) / sizeof(int);
    insertionsort(arr, size);
    print(arr, size);
}
