#include <iostream>
#include <bits/stdc++.h>


int main()
{
  int arr[]= {1,2,3,4,5,6,7};
   int n = sizeof(arr)/sizeof(arr[0]);
  std::cout<<"Size Of The Array : "<< n <<std::endl;
    int d=3;
  for(int i  = 0 ; i<n ; i++){
      std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
 
  int Temp[]={1,2,3};
  for(int i = d ; i<n ; i++){
      arr[i-d]=arr[i];
  }
  for (int i = n - d ; i <n ; i++){
      arr[i] = Temp[i-(n-d)];
  }
  for(int i  = 0 ; i<n ; i++){
      std::cout<<arr[i]<<" ";
  }


    return 0;
}
