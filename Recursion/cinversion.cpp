#include<iostream>
using namespace std ;
//count inversion in an array (merge sort) TC-> O(nlogn)

int merge(int arr[], int temp[] , int s , int mid , int e)
{
  int  i = s ;
  int  j = mid ;
  int  k = e ;
  
  int count = 0 ;

  while((i<=mid-1) && (j<=e))
  {
    if(arr[i]<= arr[j])
    {
        temp[k++]= arr[i++];
    } 
    else
    {
      temp[k++]= arr[j++];

      count = count + (mid-i) ;
    }
  }

  while(i<mid-1)
  {
    temp[k++]=arr[i++];
  }
  while(j<= e)
  {
    temp[k++]=arr[j++] ;
  }
  for(i = s ; i<=e ; i++)
  {
    arr[i]=temp[i] ;
  }
    return count ; 
}

int mergesort(int arr[] , int temp[] ,int s , int e)
{
  int mid ;
  int count = 0;

  if(s<e)
  {
    mid = (s+e)/2 ;

    count = count + mergesort(arr , temp , s , mid) ;
    count = count + mergesort(arr , temp , mid+1 ,e) ;

    count = count+ merge(arr , temp , s , mid+1 ,e);
  }

  return count ;
}

int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int temp[n] ;

    int ans = mergesort(arr , temp , 0, n-1);

    cout<<"Number of inversion :"<<ans<<endl;

  

  return 0 ;
}