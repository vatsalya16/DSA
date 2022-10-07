#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    
    int cake =1;

    for(int i =0; i<=n ; i++)
    {
      
     for(int j = 0; j<= n-i ; j++)
     {
       cout<<" ";
     }
    
      
      for(int j =0 ; j<=i ; j++)
      {
        
        cout<<cake;
       
      
        
       
      }
       cake++;
      cout<<endl;

    }





    return 0;
}