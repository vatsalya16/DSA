#include<iostream>
using namespace std ;

int print(int *p)
{
  cout<<p<<endl;
  cout<<*p<<endl;

}

int main()
{
    int value = 5 ;
    
    int *ptr = &value ;

    print(ptr);

  return 0 ;
}