#include<iostream>
using namespace std ;
//check weather array is sorted or not using recursion

bool sorted(int n , int arr[])
{
  if(n==0 || n==1)
  {
    return true ;
  }
  if(arr[0]>arr[1])
  {
    return false ;
  }
  else
  {
    bool ans = sorted(n-1 , arr+1) ;
     return ans ; 
  
  }
   
}

int main()
{
  int arr[6] ={2 , 5 , 1 , 10, 3 , 4 } ;

 bool ans = sorted(6 , arr) ;
    
    if(ans)
    {
      cout<<"Array is sorted" ;
    }
    else
    {
      cout<<"Nor sorted";
    }


  return 0 ;
}