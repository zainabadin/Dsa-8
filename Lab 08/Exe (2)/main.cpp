#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    if (size == 0) {
        return 0; 
    }
    return arr[size - 1] + sum(arr, size - 1); 
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sum(arr, size);
    cout << "Sum of array elements = " << result << endl;
    return 0;
}
