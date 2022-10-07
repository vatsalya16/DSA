#include<iostream>
#include<stack>

using namespace std ;
//last in first out concept
//marriage plates


int main()
{
  stack<string> s ;

  s.push("Time");
  s.push("is");
  s.push("Money"); 

  cout<<"Top Element "<<s.top()<<endl;

  s.pop() ;
  cout<<"Top Element "<<s.top()<<endl;
  




  return 0 ;
}