#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
//power using recursion

int ans(int n , int p)
{
  if(p<1)
  {
    return 1;
  }
  
  return ans(n , p-1) * n ;
}

int main()
{
  int num = 3 ;
  int power = 65 ;

 int cake=  ans(num , power) ;

 cout<<cake ;

  return 0 ;
}