#include<iostream>
using namespace std ;

//program --------3

bool linearSearch(int arr[] , int n , int key)
{
  for(int i =0 ; i<n ; i++)
  {
    if(arr[i]==key)
    {
          return  1;
    }
  }

  return 0 ;
  }


int main()
{
    int size = 10;
    int array[10] {1 ,2 , -3 ,5, 7 , 19 , 6, 8 , 10 , -21};
    
    
      int key;
    cout<<"Enter the key "<<endl;
    cin>>key;

    bool found = linearSearch(array, size , key) ;

    if( found )
    {
      cout<<"key is present "<<endl;
    }

    else
    {
        cout<<"key is absent"<<endl;
    } 


  return 0 ;
}