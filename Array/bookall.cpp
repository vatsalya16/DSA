#include<iostream>
using namespace std ;
//book allocation problem

bool isPossible(int arr[] , int n , int m , int mid)
{
  int studentRequired = 1 ;
  int pagesum = 0 ;

  for(int i = 0 ; i<n ; i++)
  {

    if(arr[i]>mid)
    {
      return false ;
    }

    if(pagesum + arr[i] > mid)
    {
      studentRequired++ ;

     pagesum = arr[i];

      if(studentRequired> m)
      {
        return false ;
      }
    }

    else
    {
       pagesum = pagesum +arr[i];
    }
  }

  return true ;

}

int findpages(int arr[] , int n , int m)
{
  int sum  = 0 ;

  if(n<m)
  {
  return -1 ;
  }

  for(int i = 0 ; i<n ; i++)
  {
    sum = sum + arr[i];
  }

  int start = 0 ;
  int end = sum;
  int result = -1;

  while(start<=end)
  {
    int mid = (start+end)/2 ;

    if(isPossible(arr ,n , m ,mid ))
    {

      result = mid ;

      end = mid -1;

    }
    else
    {
      start = mid +1 ;
    }
  }

  return result ;
}

int main()
{
    int arr[5] = {5 , 10 , 15, 20 , 25 } ; //book pages 
    int n = sizeof(arr)/sizeof(arr[0]) ; // total books 
    int m =  2 ; //no. of students 

    cout<<"Minimum number of pages = " ;
    cout<<findpages(arr , n , m )<<endl;



  return 0 ;
}