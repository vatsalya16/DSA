#include<iostream>
using namespace std ;
//bubble sort using recursion 

void bubblesort(int arr[] , int n)
{
    if(n==0 || n==1)
    {
      return ;
    }

    for(int i =0 ;i<n-1 ; i++)
    {
      if(arr[i]>arr[i+1])
      {
        swap(arr[i] ,arr[i+1]) ;
      }
    }

    bubblesort(arr , n-1) ;
}

int main()
{

  int arr[6] = { 12 , 3, 4, 40 , 5 , 1} ;
  int size = 6 ;

  bubblesort(arr ,size) ;

  for(int i =0 ;i<size ; i++)
  {
    cout<<arr[i]<<" " ;
  }


  return 0 ;
}