#include<iostream>
using namespace std ;
//works on bit level

int duplicate(int arr[] , int n)
{
  int ans = 0;
  
  for(int i = 0 ;i<n ; i++)
  {
    
    ans = ans^arr[i];
    
  }
   
  for(int i = 1 ; i<n ; i++)
  {
    ans = ans ^i;
   
  }
  return ans ;

}


int main()
{
    int arr[7]={1 ,2 ,2 ,3 ,4 ,5,6};

    int ans =duplicate(arr , 7);

   cout<<ans<<endl;


    




  return 0 ;
}