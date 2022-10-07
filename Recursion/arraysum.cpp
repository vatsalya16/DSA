#include<iostream>
using namespace std ;
 int ans  = 0 ;

int sum(int n , int arr[])
{
    if(n<0)
    {
      return 0  ;
    }
 
    ans =  ans +  arr[n]  ;
      sum(n-1 , arr);


     return ans ;
    
}

int main()
{
  int arr[5] = {1 ,2 ,3 ,4, 5} ;  
  int size = 4;

  cout<<sum(size , arr) ;

   
  return 0 ;
}