#include<iostream>
#include<set>
using namespace std ;
//all unique elements are stored 
int main()
{
  set<int> s ;

  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(2);
  s.insert(0);
  s.insert(6);
  s.insert(5);

  for(int i : s)
  {
    cout<<i<<" ";
  }
    cout<<endl;

    s.erase(s.begin() );

    for(int i : s)
  {
    cout<<i<<" ";
  }
    cout<<endl;

    cout<<s.count(-5)<<endl; //checks weather 5 is present or not returns bool value

  return  0 ;
}