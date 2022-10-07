#include<iostream>
using namespace std ;

int main()
{

  //int arr[3][4];

 //1st way int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
          int arr[3][4] = {{1,2,3,4}, {5,6,7,8,}, {9,10,11,12}};

    //taking input from row wise
  // for(int rows =0 ;rows<3 ; rows++)
  // { 
  //     for(int cols =0 ;cols<4 ; cols++)
  //     {
  //       cin>>arr[rows][cols];
  //     }


  // }


  //taking input column wise
  // for(int cols =0 ;cols<4 ; cols++)
  // { 
  //     for(int rows =0 ;rows<3 ; rows++)
  //     {
  //       cin>>arr[rows][cols];
  //     }


  // }



  for(int i =0 ;i<3 ; i++)
  { 
      for(int j =0 ;j<4 ; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;

  }




  return 0 ;
}