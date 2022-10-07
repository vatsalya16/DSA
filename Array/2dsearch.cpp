#include<iostream>
using namespace std ;

bool isPresent(int arr[][4] , int t , int r , int c)
{
  for(int rows =0 ;rows<3 ; rows++)
  { 
      for(int cols =0 ;cols<4 ; cols++)
      {
        if(arr[rows][cols]== t)
        {
            return 1 ;
        }
      }


  }
    return 0 ;

}

int main()
{ 

    int arr[3][4] ;

      for(int rows =0 ;rows<3 ; rows++)
  { 
      for(int cols =0 ;cols<4 ; cols++)
      {
        cin>>arr[rows][cols];
      }


  }


    cout<<"Enter element to be searched ";
    int target ;
    cin>>target ;

    if(isPresent(arr , target , 3, 4))
    {
      cout<<"Element is found"<<endl;
    }
    else
    {
      cout<<"Not found"<<endl;
    }


  return 0 ;
}