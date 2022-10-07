#include<iostream>
using namespace std;

//total number of set bits in two number

int setbit(int num)
{
  int count =0 ;
  while(num!=0)
  {
    if(num&1)
    {
      count++ ;

    }
    num = num>>1 ;

  }
  return count ;
}


int main()
{
  int a , b ;
  cin>>a>>b;

  int sum = setbit(a)+setbit(b);

  cout<<sum;

  return 0 ;
}