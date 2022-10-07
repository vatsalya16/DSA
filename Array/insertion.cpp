#include<iostream>
using namespace std ;
//insertion


int insert(int arr[] , int n)
{
  for(int i = 0 ; i<n-1 ; i++)
  {
    int temp = arr[i] ;
    int j = i-1 ;
    
    while( j>=0 )
    {


    if(arr[j]>temp)
     {
        arr[j+1] = arr[j] ;

     }
  
   else
     {
        break ;
     }
     j--;

  }
  

  arr[j+1] = temp ;
  }


}


void print(int arr[] ,int n)
{
  for(int i = 0 ; i<n ; i++)
  {
    cout<<arr[i]<<" " ;
  }
}

int main()
{

    int arr[7] = {0 , 5 , 7 , 4, 8 , 2 , 11};
    int n = sizeof(arr)/sizeof(arr[0]) ;

    insert(arr , n) ;
    print(arr , n) ;


  return 0 ;
}