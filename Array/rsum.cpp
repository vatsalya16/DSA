#include<iostream>
using namespace std ;

void printsum(int arr[][3], int n , int m)
{
    for(int i =0 ;i<3 ; i++)
    {   
      int sum = 0 ;
      for(int j =0 ;j<3 ; j++)
      {
        sum = sum + arr[i][j];
      }
      cout<<sum<<" ";
    }

    cout<<endl;

}

int main()
{ 

    int arr[3][3] ;

   for(int rows =0 ;rows<3 ; rows++)
  { 
      for(int cols =0 ;cols<3 ; cols++)
      {
        cin>>arr[rows][cols];
      }


  }

  printsum(arr , 3 ,3);



  return 0 ;

}