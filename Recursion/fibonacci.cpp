#include<iostream>
using namespace std ;

//12/06/2022

int fib(int n)
{
    if(n==0)
    {
      return 0 ;
    }
    if(n==1)
    {
      return 1 ;
    }

  int ans = fib(n-1) + fib(n-2) ;
      return ans ;

}


int main()
{ 
  fib(5);
 

  return 0 ;
}