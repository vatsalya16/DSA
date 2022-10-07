#include<iostream>
#include <bits/stdc++.h>
using namespace std ;

//program----------2

int getMax(int num[] , int n)
{
  int ma = INT_MIN ;

  for(int i =0 ;i<n ;i++)
  { 
    if(num[i]>ma)
    {
      ma = num[i];
    }

    //alternative
    //ma = max(ma , num[i]);
    


  }
    return ma ;


}



int main()
{
  int size;
  cin>>size;

    int flight[100];

    for(int i =0 ; i<size ; i++)
    {
      cin>>flight[i];
    }

    cout<<"Max number "<<getMax(flight , size)<<endl;

  return 0 ;
}