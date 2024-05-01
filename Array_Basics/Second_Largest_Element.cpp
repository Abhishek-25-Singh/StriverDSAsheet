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

    return 0;
}
