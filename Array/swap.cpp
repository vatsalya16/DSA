#include<iostream>
using namespace std ;
//swap alternatives

void swape(int arr[] , int n)
{
  int start = 0 ;
  int end = 1;

  while(start<=n-1)
  {
    swap(arr[start], arr[end]);
    start= start +2 ;
    end = end +2;

  }
}

void print(int arr[] , int n)
{
  for(int i =0 ; i<n ; i++)
  {
    cout<<arr[i]<<" ";
  }
    cout<<endl;
}

int main()
{
  int arr[6]= {1, 2, 3, 4, 5, 6, } ;

  swape(arr , 6 );

  print(arr , 6 );




  return 0;
}