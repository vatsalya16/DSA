#include<iostream>
using namespace std ;

int main()
{
  int n ;
  cin>>n;
  int num = 0;
int temp = 0;
  while(n!=0)
  {
     temp = n%10 ;
    num = num*10 +temp;
    n=n/10 ;

  }


    cout<<num;



  return 0 ;
}