#include<iostream>
using namespace std ;

int main()
{
  //part---------1
 
  int n =5 ;

  cout<<n<<endl;

  //address of n is

  cout<<"Address of n is "<<&n<<endl;

  int *ptr = &n ;

  cout<<*ptr<<endl; //value 
  cout<<ptr<<endl; //address

  cout<<"Size of integer is "<<sizeof(n)<<endl;
  cout<<"Size of pointer is "<<sizeof(ptr)<<endl;


    int *p2 = 0 ; //pointing to some garbage value

    cout<<p2<<endl ;


    //part-----------2

    int num = 5 ;

    int *pt = &num ;
    (*pt)++ ;

    cout<<*pt<<endl;

    //copying a pointer 
    
    int *q = pt ;

    cout<<*q<<endl;


    //important cocept

    int i =3 ;
    int *t = &i ;

    *t = *t +1 ;
    cout<<*t<<endl;
    cout<<t<<endl;

    t = t+ 1; //only address changes by value of 4 since int takes 4 bytes

    cout<<t<<endl;

    


  return 0 ;
}