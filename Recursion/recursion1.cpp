#include<iostream>
using namespace std ;
//terminating recursion function--------1

/*void fun(int n)
{
  if(n==0)
  {
    return ;
  }
  cout<<"hello"<<endl;
  fun(n-1) ;
}

int main()
{
  fun(2);
  return 0 ;
} */

//non-terminating recursion function---------2

void fun()
{
  cout<<"hello"<<endl;
  fun() ;
}

int main()
{
  fun();
  return 0 ;
}