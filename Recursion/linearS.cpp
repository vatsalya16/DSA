#include<iostream>
using namespace std ;
//linear search using recursion 19/04/2022

bool found(int arr[] , int key , int n)
{
    if(n==0)
    {
      return false ;
    }
    if(arr[0]==key)
    {
      return true ;
    }
    else
    {
      return found(arr+1 , key , n-1) ;
     
    }
    



}

int main()
{
  int arr[5] = {1 , 2, 4, 5 ,6} ;
  int size =  5 ;
  int key = 50 ;

 bool ans = found(arr , key , size) ;

  if(ans)
  {
    cout<<"Present" ;
  }
  else
  {
    cout<<"Absent";
  }



  return 0 ;
}