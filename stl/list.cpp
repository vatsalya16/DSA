#include<iostream>
#include<list>

using namespace std ;

void display(list<int> &lst)
{
  list<int> :: iterator itr ;

  for(itr =lst.begin(); itr !=lst.end() ; itr++)
  {
    cout<<*itr<<" ";
  }
}

int main()
{

   list<int> list1 ;
   int element ; 

   for(int i =0 ; i<5 ; i++)
   {
     cout<<"Enter elements :";
     cin>>element ;
     list1.push_back(element);
   }

      list1.sort() ;
      display(list1);

  //instead use display function
  //  list<int> :: iterator itr ;
  //  itr = list1.begin() ;

  //  cout<<*itr;
  //  itr++;
  //  cout<<*itr;




  return  0 ;
}