#include<iostream>
using namespace std ;

bool check(string s , int  i , int j)
{
  if(i>j)
  {
    return true ;
  }
  if(s[i]!=s[j])
  {
    return false ; 
  }
  else
  {

    return check(s , i+1, j-1) ; 
  

  }


}

int main()
{
  string s = "aba";

  bool ans = check(s, 0 , s.length()-1);

  if(ans)
  {
    cout<<"Palindrome"<<endl;

  }
  else
  {
    cout<<"Not a Palindrome"<<endl;
  }



  return 0 ;
}