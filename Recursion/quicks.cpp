#include<iostream>
using namespace std ;
//quick sort 21/04/2022 O(nlogn)

int Partition(int arr[] ,int lb , int ub)
{
  int pivot = arr[lb];
  int start = lb ;
  int end = ub ;
      
  while(start<end)
  {
    while(arr[start]<= pivot)
    {
      start++ ;
    }
    while(arr[end]>pivot)
    {
      end--;
    }
    if(arr[start]<arr[end])
    {
        swap(arr[start],arr[end]);
    }
  }

  swap(arr[lb], arr[end]);
  return end ; 
}


void Qsort(int arr[], int lb ,int ub)
{
  if (lb>= ub)
  {
    return ;
  }
  
    int loc = Partition(arr, lb , ub);
    Qsort(arr, lb , loc-1);
    Qsort(arr ,loc+1 ,ub );
 
}

void print(int arr[] ,int n)
{
  for(int i = 0 ;i<n ; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int arr[9]= {7 , 6 ,10 ,5 ,9 ,2 ,1 ,15 ,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sort"<<endl;
    print(arr, n);

    Qsort(arr , 0 , n-1);
    
     cout<<"After sort"<<endl;
    print(arr , n);

    

  return 0 ;
}