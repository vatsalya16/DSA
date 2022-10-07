#include<iostream>

using namespace std ;

int firsts(int arr[] , int n , int k)
{
  int s = 0 ;
  int e = n-1 ;
  int ans =0 ;

  int mid = s + (e-s)/2 ;

  while(s<=e)
  {
    if(arr[mid]> k)
    {
         e= mid-1 ;
    }
    else if (arr[mid]<k)
    {
      s = mid+1 ;   
    }
    else
    {
      ans = mid ;
      e = mid-1 ;
    }
    mid = s+ (e-s)/2 ;
  }

  return ans ; 
}

int last(int arr[] , int n , int k)
{

  int s = 0 ;
  int e = n-1 ;
  int ans= 0 ;

  int mid = s + (e-s)/2 ;

  while(s<=e)
  {
    if(arr[mid]> k)
    {
         e= mid-1 ;
    }
    else if (arr[mid]<k)
    {
      s = mid+1 ;   
    }
    else
    {
      ans = mid ;
      s = mid+1 ;
    }
    mid = s+ (e-s)/2 ;
  }

  return ans ; 

}


int main()
{


    int arr[] = {0,1,1,2,2,2,2};

    int n  = sizeof(arr)/sizeof(arr[0]);
    int key = 2 ;


    int ans1=  firsts(arr , n , key);
    int ans2 = last(arr ,n , key);
    
    cout<<ans1 <<endl;
    cout<<ans2 ;
    
    
    
      return 0 ;
}