#include<iostream>
using namespace std ;
//sum of n natural numbers
int sum (int n )
{
    if(n==0)
    {
      return 0 ;
    }
    

    return sum(n-1)+n  ;

}

int main()
{
  int ans =sum(5) ;
  cout<<ans ;

  return 0 ;
}