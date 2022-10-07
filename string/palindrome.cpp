#include<iostream>
using namespace std ;

int length(char ch[])
{
  int count = 0;

  for(int i=0 ; ch[i]!='\0'; i++)
  {
    count++ ;
  }

  return count ; 
}

bool palindrome(char ch[], int n)
{
    bool ans = true ;
   int s = 0 ;
  int e = n-1 ;

  while(s<=e)
  {
    if(ch[s]!=ch[e])
    {
      return false ;
    }
      s++;
      e--;
  }

  return true ; 

}


int main()
{

    char ch[20] ;

    cout<<"Enter character:";

    cin>> ch ;

    int n = length(ch);

    bool ans= palindrome(ch , n);

    if(ans)
    {
      cout<<"equal";
    }
    else
    {
      cout<<"Not equal";
    }

 

  return 0 ;
}