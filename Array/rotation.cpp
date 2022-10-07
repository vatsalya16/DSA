#include<iostream>
using namespace std ;
//rotation of an array

int leftrotation(int arr[] , int n)
{
  int temp = arr[0] ;
  for(int i = 0 ; i< n -1 ; i ++)
  {
    arr[i] = arr[i+1];

  }
  arr[n-1] = temp ;
}

int rotation(int arr[] , int n , int d )
{
  for(int i = 0 ; i<d ; i++)
      leftrotation(arr ,n);


}

void print(int arr[] , int n )
{
  for(int i = 0 ; i<n ; i++)
  {
    cout<<arr[i]<<" ";
  }
}
    

int main()
{
  int arr[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7} ;

  int n = sizeof(arr) /sizeof(arr[0]);
  
  int d ;
  cin>>d ;

  rotation(arr , n , d);
  print(arr , n);
 

  return 0 ;
}