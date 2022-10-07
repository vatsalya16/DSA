#include<iostream>
using namespace std ;

int call(int arr[] , int arr2[] , int n  )
{ 
  int ans = 0 ;
  for (int i =0 ;i<n ; i++)
  {
    for(int j =0 ;j<n ; j++)
    {
      if(arr[i]==arr2[j])
      {
       cout<<arr2[j]<<" ";
      }
    }
  }
}
/*void print(int arr[] , int k)
{
  cout<<arr[k]<<" ";
}
*/
int main()
{
  
  int first[4] = {1 , 2 , 3 , 4} ;
  int second[4]= {2 , 4 , 6 , 8} ;

  call(first , second , 4);






  return 0 ;
}