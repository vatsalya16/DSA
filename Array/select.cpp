#include<iostream>
using namespace std ;
//selection sort

int main()
{

  int arr[5] =  { 7 , 10 , 1 , 2 , 3};

  int n = sizeof(arr)/sizeof(arr[0]) ;

  for(int i = 0 ; i<n ; i++)
  {
      int min = i ;

      for(int j = i+1 ; j< n ; j++)
      {
        if(arr[j]< arr[min])
        {
          min = j ;
        }
      }

      swap(arr[i], arr[min]) ;




  }

    for(int i = 0 ; i<n ; i++)
    {
      cout<<arr[i]<<" " ;
    }


  return 0 ;
}