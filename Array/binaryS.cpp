#include<iostream>

using namespace std ;

int binary(int arr[] , int n  , int key)
{
  int start = 0 ;
  int end = n-1 ;

  int mid =start+ (end-start)/ 2 ;  // 2^31(start) + 2^31(end) ---> this value is out of int range then error occurs
  

  while(start<=end)
  {
      
      if(arr[mid]==key)
      {
        return mid ;

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
    int arr[6]= {1 , 11 , 12 , 15 , 18 , 19};
    
   int key  ;
    cin>>key;

  int ans1=  binary(arr , 6 , key);
  cout<<"Answer is "<<ans1<<endl;


  return 0 ;
}