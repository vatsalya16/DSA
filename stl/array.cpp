#include<iostream>
#include<array>
using namespace std ;

int main()
{

  array<int , 4> a = {1 , 2 , 3 , 4 };

  int size = a.size() ;
  
  for(int i  = 0 ; i<size ; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;

  cout<<"Element at second index "<<a.at(2)<<endl;

  cout<<"Empty or not "<<a.empty()<<endl; //returns a bool value

  cout<<"First element "<<a.front()<<endl;

  cout<<"Last element "<<a.back()<<endl;

      //insert, find , erase , count ---> O(logn)
      //size , begin , empty , end ---> O(1)



  return 0 ;
}