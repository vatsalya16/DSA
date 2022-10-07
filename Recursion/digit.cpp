#include<iostream>
using namespace std ;

void print(int n , string arr[])
{ 
  if(n==0)
  {
    return ;
  }
  int digit = n%10 ;
  n =n/10 ;

 
  print(n , arr);

   cout<<arr[digit]<<" " ;


}

int main()
{
  string arr[11]={"zero" , "one" , "two" , "three" , "four", "five" ,
                    "six" , "seven" , "eight" , "nine" , "ten"} ;
    int n ;
    cin>>n ;
  print( n , arr) ;

  return 0;
}