     /*
               *********** Second Largest Element In The Array ***********
     */
// 1. BRUTE APPROACH
#include <iostream>
#include <algorithm>

int main()
{
      int arr1[1000];
    int n;
    std::cout << "Enter The Number Of ELement int THe Array:";
    std::cin >> n;
    std::cout << "Enter The Elements:";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
   std::sort(arr1, arr1 + n);
   // std::sort(arr1.begin(), arr1.end());
    int SecondLargest = -1;
    int Largest_element = arr1[n - 1];
    for(int i = n-2 ; i>=0 ;i-- ){
        if (Largest_element !=arr1[i]) {
            SecondLargest = arr1[i];
            break;
        }
    }
    std::cout << "Second Largest :" << SecondLargest <<std::endl;

        // 2. Approach Better Solution For Second Largest Element

    int arr1[1000];
    int n; 
    std::cout << "ENter The Number Of Element in THe Given Array:";
    std::cin >> n;
    int Largest_element = arr1[0];
    std::cout << "ENter The Element :";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {

        if (arr1[i] > Largest_element) {
            Largest_element = arr1[i];
        }
    }
    int Second_Largest_Element = -1;
    for (int i = 0; i < n; i++) {
        if (arr1[i] > Second_Largest_Element && arr1[i] != Largest_element) {
            Second_Largest_Element = arr1[i];
            
        }
    }
    std::cout << "Second Largest Element is " << Second_Largest_Element << std::endl;

      // ************ Optimal Approach ***********

     
    int arr1[1000];
    int n;
    std::cout << "ENter The Number Of Element in the array:";
    std::cin >> n;
    std::cout << "Enter The ELement :";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    int largest_Element = arr1[0];
    int Second_Largest = -1;//If Negative Element is Present use INT_MIN
    for (int i = 0; i < n; i++) {
        if (arr1[i] > largest_Element) {
            Second_Largest = largest_Element;
            largest_Element = arr1[i];
            
        }
        /*
        This else if condition is inside a loop iterating over the 
        elements of the array arr1. It's designed to update the Second_Largest 
        variable 
        if the current element (arr1[i]) is less than the largest_Element 
        but greater than the current Second_Largest element found so far.
        */
        else if (arr1[i]<largest_Element && arr1[i] > Second_Largest) {
            Second_Largest = arr1[i];
        }
    }
    std::cout << "largest_Element :" << largest_Element << std::endl;
    std::cout << "Second_Largest :" << Second_Largest << std::endl;

    return 0;
}
