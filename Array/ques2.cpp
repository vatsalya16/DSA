#include<iostream>
using namespace std ;

//search in a rotated sorted array
int pivot(int arr[] , int n)
{
  int start =0;
  int end = n -1 ;
  int mid= (start+end)/2 ;

  while(start<end)
  {
    if(arr[mid]>=arr[0])
    {
      start = mid +1 ;
    }
    else
    {
      end = mid ;
    }

    mid= (start+end)/2 ;

  }

    return start ;


}

int condition(int arr[] , int ans , int n, int key)
{
  if(arr[ans]<=key && key<=arr[n-1] )
  {//second line
      binary(arr, ans , n-1 ,key) ;
  }
  else
  {//fist line
    binary(arr, 0 , ans-1 ,key);
  } 

}

int binary(int arr[] , int s , int e  , int key)
{
  int start = s ;
  int end = e ;

  int mid =start+ (end-start)/ 2 ;  // 2^31(start) + 2^31(end) ---> this value is out of int range then error occurs
  

  while(start<=end)
  {
      
      if(arr[mid]==key)
      {
        cout<<mid;

      }
      if(arr[mid]<key)
      {
          start = mid +1;
      }
      else
      {
        end = mid -1 ;
      }
      
      mid =start+ (end-start)/ 2 ;
  
  }
        return -1 ;

}



int main()
{
  int arr[5] = { 7 , 9 , 10 , 1 , 3};
  int n = sizeof(arr)/sizeof(arr[0]);

  int key ;
  cin>>key ;
  

  int ans =pivot(arr, n );
  condition(arr , ans , n , key) ;

     
 

  return  0 ;
}
