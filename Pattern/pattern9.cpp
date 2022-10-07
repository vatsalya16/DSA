#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    int value =0;

    for(int i =1; i<=n ; i++)
    {
      
      for(int j =0 ; j<n ; j++)
      {
        

        char ch = 'A'+value;
        cout<<ch<<"  ";
        value++;
       
      }
      cout<<endl;

    }





    return 0;
}