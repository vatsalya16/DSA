#include<iostream>
using namespace std ;

int reverse(char ch[] , int n)
{
  int s =0 ;
  int e =  n-1;

  while(s<=e)
  {
    swap(ch[s++], ch[e--]);
   
  }

  cout<<ch;
}

int length(char ch[])
{
  int count = 0;

  for(int i=0 ; ch[i]!='\0'; i++)
  {
    count++ ;
  }

  return count ; 
}


int main()
{
    char ch[20] ;

    cout<<"Enter name :";
    cin>>ch;

    cout<<"Name is :"<<ch<<endl;

   int n= length(ch);

    reverse(ch,n ) ;

    

  return 0 ;
}