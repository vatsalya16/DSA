#include<iostream>
using namespace std ;

int arrsum(int arr[] , int n )
{
  int sum = 0 ;
    for(int i =0 ;i<n ; i++)
    {
      sum = sum + arr[i] ;
    }

    return sum ;

}


int main()
{
    int n ;
    cin>>n;

      int flask[100];

        for(int i=0 ;i<n ;i++)
        {
          cin>>flask[i];
        }

      int ans= arrsum(flask, 5);

      cout<<ans<<endl;



  return 0 ;
}