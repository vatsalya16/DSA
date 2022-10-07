#include<iostream>
using namespace std ;
//merge sort 22/04/2022

void merge(int arr[] , int s, int mid , int e)
{

  int len1 = mid -s +1 ;
  int len2 = e-mid ;

  int *first = new int[len1] ;
  int *second = new int[len2] ;

  //copy values
  int mainArrayIndex = s ;

  for(int i =0 ;i<len1 ; i++)
  {
    first[i]=arr[mainArrayIndex++];
  }

  mainArrayIndex = mid+1 ;

  for(int i =0 ;i<len2 ; i++)
  {
    second[i]=arr[mainArrayIndex++] ;
  }

  //merge 2 sorted arrays

   int index1 =0;
   int index2 =0 ;
   mainArrayIndex =s ;

   while(index1< len1 && index2<len2)
   {
     if(first[index1]<second[index2])
     {
       arr[mainArrayIndex++]= first[index1++] ;
     }

     else
      {
        arr[mainArrayIndex++]= second[index2++];

      }
   }
   //if length of array are not same
   
   while (index1<len1)
   {
    arr[mainArrayIndex++]= first[index1++] ;
   }

   while(index2<len2)
   {
     arr[mainArrayIndex++]= second[index2++] ;

   }
   


}

void mergesorted(int arr[] , int s , int e)
{
  if(s>=e)
  {
    return ; 
  }

  int mid = (s+e)/2;

    //left part sorted
  mergesorted(arr , s, mid); //only breaking of array 

  //right part sorted
  mergesorted(arr , mid+1 , e);

  merge(arr , s, mid, e) ;

}

void print(int arr[] , int n)
{
  for(int i =0 ;i<n ; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{

  int arr[6] ={2, 7, 5, 6,1,3} ;
  int n = sizeof(arr)/sizeof(arr[0]) ;

  cout<<"Unsorted array"<<endl;
  print(arr , n) ;

  mergesorted(arr , 0 , n-1 ) ;

    cout<<endl;

  cout<<"Sorted array"<<endl;
  print(arr , n) ;


  return 0 ;
}