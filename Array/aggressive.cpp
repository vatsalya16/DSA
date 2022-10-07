#include<iostream>
using namespace std ;
//agressive cows 

bool possible(int arr[] , int n , int c , int mid)
{
    int count =  1 ;
    int lastP = arr[0] ;

    for(int i = 0 ; i<n ; i ++)
    {
      if(arr[i]-lastP >= mid )
      {
        count++ ;
        if(count == c)
        {
          return true ;
        }
        lastP = arr[i] ;
      }
    }

    return false ;


}

int search(int arr[] , int n , int c )
{

    //sort it
   // sort(arr[0].begin() , arr[n-1].end()) ; 
  int sum = 0 ;
  int result = 0 ;

      for(int  i =0 ; i<n ; i++)
      {
          sum += arr[i] ;
      }
      int start = 0;
      int maxi = -1 ;

      for(int i  =0 ; i < n ; i++)
      {
        maxi = max(maxi , arr[i]) ;
      }

      int end = maxi ;

      while(start<=end)
      {
        int mid = (end+start)/2 ;

        if(possible(arr, n ,c , mid))
        {
          result = mid ;

          start = mid + 1 ;

          
        }
        else
        {
          end = mid - 1 ;
        }

      }

    return result ; 

}

int main()
{
  int arr[5] ={1 ,2 ,3 ,4 , 6} ;
  int n = sizeof(arr)/sizeof(arr[0]) ;

  int cows =  2 ; //aggressive cows  

  cout<<"Maximum distance = ";
  cout<<search(arr , n , cows )<<endl;

  return 0 ;
}