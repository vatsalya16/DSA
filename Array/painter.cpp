#include<iostream>
using namespace std ;
//painter's partition problem

bool possible(int arr[] , int n , int k , int mid)
{
  int painter = 1;
  int sum = 0 ;

  
  for(int i = 0 ; i<n ; i++)
  {

    if(arr[i]>mid)
    {
      return false ;
    }

    if(sum + arr[i] > mid)
    {
      painter++ ;

     sum = arr[i];

      if(painter> k)
      {
        return false ;
      }
    }

    else
    {
       sum = sum +arr[i];
    }
  }

  return true ;

  

}

int findpainter(int arr[] , int n , int k)
{
  int sum = 0 ;

  if(n<k)
  {
    return -1;
  }

  for(int i =0 ; i<n ; i++)
  {
    sum+= arr[i] ;
  }

  int start = 0 ;
  int end = sum ;
  int result = -1 ;


  while(start<=end )
  {
    int mid = (start+end )/2 ;
    if(possible(arr , n , k , mid))
    {
      result = mid ;

      end = mid-1 ;
    }

    else
    {
      start = mid +1 ;
    }
  }

  return result ;
}

int main()
{

  int arr[4] = {10 , 10 , 10 ,10} ; 
  int n = sizeof(arr)/sizeof(arr[0]) ;//no. of boards
  //painter takes 1 unit of time to paint 1 unit of length 

  int k = 2 ;

  cout<<"Minimum time taken by painter = " ;
  cout<<findpainter(arr , n , k)<<endl ;


  return 0 ;
}