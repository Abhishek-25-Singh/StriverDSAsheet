#include <iostream>

int main()
{

    //           ********* Rotate an Array By 1 Position in Left   *********
    int arr1[1000];
    int n;
    std::cout << "Enter The Number Of element in the array :";
    std::cin >> n;
    std::cout << "Enter The Elements :";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    int temp = arr1[0];
    for (int i = 1; i < n; i++) {
        arr1[i - 1] = arr1[i];
    }
    arr1[n - 1] = temp;
    for (int i = 0; i < n; i++) {
        std::cout<< arr1[i]<< " ";
    }

    return 0;
}
