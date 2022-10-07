#include<iostream>
using namespace std ;
//recursion explanination

void home(int src , int des )
{
  cout<<"src "<<src<<" destination "<<des<<endl;
  if(src == des)
  {
    cout<<"Pauch gaya"<<endl;
    return ;
  }

  src++ ;
  home(src , des) ;

}

int main()
{
    home(1 , 10) ;

  return 0 ;
}