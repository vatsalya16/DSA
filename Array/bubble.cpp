#include<iostream>
using namespace std ;
//bubble search

int binary(int arr[] ,int n)
{
    for(int i =0 ;i<n-1 ; i++)
    {
      int count = 0 ;
      bool swape = false ;

      for(int j = 1 ; j<n-i; j++)
       {
        if(arr[j]<arr[count])
        {

        swap(arr[count] ,arr[j]) ;
        swape = true ;

        }
        count++ ;
       
      }
       
      if(swape == false)
      {
        //optimized 
        break ;
      }

    }

}

void print(int arr[] , int n)
{

  for(int i =0 ;i<n ; i++)
  {
    cout<<arr[i]<<" " ;

  }
}

int main()
{
  int arr[6] ={10 , 7 , 1 , 6 , 14, 9 };
  int n = sizeof(arr)/sizeof(arr[0]) ;

  binary(arr , n) ;
  print(arr , n) ;


  return 0 ;
}