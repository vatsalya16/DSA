#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    

    for(int i =0; i<n ; i++)
    {
      int value =i;
      
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