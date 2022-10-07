#include<iostream>
using namespace std ;

//pivot element in an sorted and rotated array 

int pivot(int arr[] , int n )
{
  int start = 0 ;
  int end = n-1 ;
  int mid = (start + end) / 2 ;

  while(start<end)
  {
    if (arr[mid]>=arr[0])
    {
      start = mid +1 ;
     
    }
    else
    {
       end = mid ;
    }

     mid = (start + end) / 2 ;
  }

  return start ;
}

int main()
{
  int arr[5] = { 5 , 6, 7 , 1 , 2} ;

  cout<<"Pivot element is "<<pivot(arr, 5)<<endl;

  return 0 ;
}