#include<iostream>
#include<vector>
using namespace std ;
//merge sorted array

int merge(int arr1[] ,int n , int arr2[] , int m , int arr3[])
{
    int i = 0 ;
    int j = 0 ;
    int k =0 ;

    while(i<n && j<m)
    {
      if(arr1[i]<arr2[j])
      {
        arr3[k++] = arr1[i++] ;

      }

      else
      {
        arr3[k++] = arr2[j++] ;


      }
    }

    //copy the remaining elements of arr1
      while(i<n)
      {
        arr3[k++] = arr1[i++] ;

      }

      while(j<m)
      {
        arr3[k++] = arr2[j++] ;
      }
 


}

void print(int arr3[] , int n)
{
  for(int i = 0 ; i<n ; i++)
  {
    cout<<arr3[i]<<" " ;
  }
}

int main()
{
    int arr1[5] = {1 ,2 , 4 ,6 , 8} ;
    int arr2[4] = { 3 ,5 ,7 ,9} ;

    int arr3[9] = {0} ;

    merge(arr1 , 5 , arr2 , 6 , arr3) ;
    print(arr3 , 9 ) ;


  return 0 ;
}