#include<iostream>
using namespace std;

void printEvenSubarrays(int arr[], int size) {
    for(int start = 0; start < size; start++) {
        if(arr[start] % 2 != 0) continue;

        for(int end = start; end < size; end++) {
            if(arr[end] % 2 != 0) break; // stop if an odd number is found

            // Print this even subarray
            for(int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {2, 4, 6, 1, 8, 10};
    int size = sizeof(arr) / sizeof(int);
    printEvenSubarrays(arr, size);
    return 0;
}
