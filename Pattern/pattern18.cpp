#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    
    
    for(int i =0; i<=n ; i++)
    {
      
     for(int j = 0; j<= n-i ; j++)
     {
       cout<<" ";
     }
    
      int cake =1;

      for(int j =1 ; j<=i ; j++)
      {
        
        cout<<cake;
        cake++;
       
      
        
       
      }
       int apple =i-1 ;
       for(int j =1 ; j<=i-1 ; j++)
       {
         cout<<apple;
         apple--;
       }

      
     
      cout<<endl;

    }





    return 0;
}