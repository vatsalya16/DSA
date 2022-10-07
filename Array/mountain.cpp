#include<iostream>
using namespace std ;

int function(int arr[] , int n)
{
 /* int ans  = 0 ;
  for(int i =0 ; i<n ; i++)
  {
   
    if (arr[i-1]<arr[i] && arr[i]>arr[i+1])
    {
        ans = arr[i];
    }
  }

  return ans ; */

  //optimized case

  int start = 0 ;
  int end = n-1 ;
  int mid = start +  (end- start) / 2 ;

  while(start<end)
  {

    if(arr[mid]<arr[mid+1])
    {
      start = mid +1 ;    //  4

    }
    else
    {
      end = mid ;
    }

    mid = start +  (end- start) / 2 ;
  }

  return start ;


}

//mountain array 
int main()
{
    int arr[7] = {1 , 2 , 5 , 4 , 3 , 3 , 2 } ;


    cout<<"Peak value is "<<function(arr, 7)<<endl;

  return 0 ;
}