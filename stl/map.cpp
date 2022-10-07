#include<iostream>
#include<map>
#include<string>

using namespace std ;

int main()
{
    //each key is unique
    // A single key points to a single value 
    //same key abstain for two value 

    map<string , int> pricemap ;
    pricemap["cake"]=  100 ;
    pricemap["chips"]= 20 ;
    pricemap["chocolate"]= 10 ;

    map<string , int> :: iterator itr ;
    
    for(itr= pricemap.begin() ; itr!= pricemap.end() ; itr++)
    {
      cout<<(*itr).first<<" "<<(*itr).second<<endl ;
          //gets key         // gets value
    }
   


  return 0 ;
}