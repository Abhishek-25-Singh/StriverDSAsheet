#include <iostream>

void LeftRotate(int arr[], int n, int d) {
    d = d % n; // Number of positions to rotate
    int Temp[d]; // Temporary array to store rotated elements

    for(int i = 0; i < d; i++) {
        Temp[i] = arr[i]; // Store elements to rotate
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i]; // Shift elements to the left
    }

    for(int i = n - d, j = 0; i < n; i++, j++) {
        arr[i] = Temp[j]; // Copy rotated elements to the end
    }
}

int main() {
    int n;
    std::cout << "Enter The Number Of Elements in The Array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter The Elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int d;
    std::cout << "Enter The Number Of Rotations (d): ";
    std::cin >> d;
    LeftRotate(arr, n, d);

    std::cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
