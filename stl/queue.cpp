#include<iostream>
#include<queue>

using namespace std ;
int main()
{
  queue<string> q ;

  q.push("Mine") ;
  q.push("Save");
  q.push("Make") ;

  cout<<"First element "<<q.front()<<endl;

  q.pop() ;

  cout<<"First element "<<q.front()<<endl;
  


  return  0 ;
}