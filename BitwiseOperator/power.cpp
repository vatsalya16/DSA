#include<iostream>

using namespace std ;

int pow()
{
  int a , b ;
  cin>>a>>b ;
  int ans = 1;

  for(int i =1 ; i<=b ; i++)
  {
    ans = ans *a ;
  }
  return ans ;
}

int main()
{

  int ans = pow();
  cout<<"Answer is "<<ans<<endl;

   ans = pow();
  cout<<"Answer is "<<ans<<endl;

   ans = pow();
  cout<<"Answer is "<<ans<<endl;

  return 0 ;
}