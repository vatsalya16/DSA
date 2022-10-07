#include<iostream>
using namespace std ;
//binary search using recursion

void print(int arr[] , int s , int e)
{
  for(int i =s ; i<e ; i++)
  {
    cout<<arr[i]<<" ";
  }cout<<endl;
}

bool BinaryS(int arr[] , int s , int e , int k)
{

  print(arr , s , e) ;
  if(s>e)
  {
    return false ;
  }

  int mid = s + (e-s)/2 ;
  cout<<"Value of array mid "<<arr[mid]<<endl;

  if(arr[mid]== k)
  {
    return true ;
  }
  if(arr[mid]< k)
  {
    return BinaryS(arr , mid+1 , e, k) ;
  }
  else
  {
    return BinaryS(arr , s , mid-1 , k) ;
  }
}

int main()
{
    int arr[8] = { 1,2,4,5,6 ,7 , 8 ,9};
    int size =  8 ;
    int key = 9 ;

    bool ans = BinaryS(arr , 0 , size , key) ;

      if(ans)
      {
        cout<<"Key found"<<endl;

      }
      else
      {
        cout<<"Not found"<<endl;
      }

  return 0 ;
}