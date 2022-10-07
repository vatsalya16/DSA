#include<iostream>
using namespace std ;

int unique(int arr[] , int n)
{
  int ans = 0;
  for(int i =0 ;i<n ; i++)
  {
      ans = arr[i]^ans ;
  }
  return ans ;
}



int main()
{
    int arr[7] = { 1 , 1 , 2, 3, 2 ,3, 5} ;

    

    int value =unique(arr, 7);

      cout<<"answer is "<<value;



  return 0 ;
}