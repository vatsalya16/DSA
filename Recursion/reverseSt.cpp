#include<iostream>
using namespace std ;
//reverse string using recursion

void reverse(int i , int j , string& s)
{

  cout<<s<<endl;
  //base case
  if(i>j)
  {
    return ; 
  }
  else
  {
    swap(s[i], s[j]);
    i++;
    j-- ;
    reverse(i , j ,s); 
  }

}

int main()
{
  string s = "ABCDE" ;

  reverse(0 , s.length()-1 ,s) ;

      cout<<s<<endl;


  return 0 ;
}