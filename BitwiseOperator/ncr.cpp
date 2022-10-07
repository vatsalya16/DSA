#include<iostream>
using namespace std ;

int fact(int num)
{
  int ans = 1 ;
  while(num!=0)
  {
    ans = num*ans;
    num-- ;
  }
  return ans ;
}

int main()
{

  int a , b , c  ;
  cin>>a>>b ;

  c= a -b ;

  int ans = fact(a)/(fact(c)*fact(b));

  cout<<ans;

  return 0;
}