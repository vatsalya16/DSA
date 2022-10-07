#include<iostream>
using namespace std ;

int main()
{
    //part-------------1

    int arr[10] = { 1, 5, 3, 4};

    cout<<"Address of first element of array : "<<arr<<endl;
    //or
    cout<<"Address of first element of array : "<<&arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;

    //same value will be executed
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;

    int i =3 ;
    cout<<i[arr]<<endl;


    //part-------------2

    /*int temp[10] ;

    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0] ;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;*/

    //part----------3

   /* int a[20] = {1 , 2, 3} ;

    cout<<&a[0]<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;

    int *ptr = &a[0] ;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl; //&a[0] and &ptr have different address
    */

    //part----------4

  /*  int arr[10];

    //arr = arr+1 ; //error

    int *ptr = &arr[0] ;

    cout<<ptr<<endl; 
    ptr = ptr +1 ;

    cout<<ptr<<endl; // possible
    */

   //part-----------5

  /* int arr[5] = {1, 2, 3, 4, 5 } ;
   char ch[6] = "abcde" ;

   cout<<arr<<endl; //only address of first element is printed
   cout<<ch<<endl; //entire string is printed

   char *c = &ch[0] ;

   cout<<c<<endl; //again entire string is goint to be printed 

   char temp ='p' ;
   char *p = &temp ;

   cout<<p<<endl; //prints till it finds the null character 

*/

  return 0 ;
}