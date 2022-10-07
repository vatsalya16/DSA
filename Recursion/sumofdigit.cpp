#include<iostream>
using namespace std ;
//sum of digits 253=10

int getsum(int n)
{   
  
  if(n==0)
  {
    return 0 ;
  }
  
 
  
  return getsum(n/10) + n%10  ;
  


}

int main()
{
  int fine = getsum(253) ;

  cout<<fine<<endl;
  
  return 0 ;

}