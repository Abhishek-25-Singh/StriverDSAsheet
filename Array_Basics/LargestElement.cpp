#include <iostream>
/*

Largest Element in The Given Array 

*/
int LargestElement (int arr1[], int n) {
    int largest = arr1[0];
    for (int i = 0; i < n; i++) {
        if (arr1[i] > largest) {
            largest = arr1[i];
        }
    }
    return largest;
}

/*
              ******* Largest Element in The Given Array ********
     */
int main(){
    int arr1[1000];
    int n;
    std::cout << "ENter The Number Of Element In The Array :";
    std::cin >> n;
    std::cout << "Enter The Elements :";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    int Largest_Element = LargestElement(arr1, n);
    std::cout << "Largest Element in the array is " << Largest_Element;
    return 0 ;
}
