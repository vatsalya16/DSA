#include<iostream>
using namespace std ;
//money counting

int main()
{
  int n ;
  cin>>n ;

  int sum1 = 0 ;
   int sum2 = 0 ;
    int sum3 = 0 ;
     int sum4 = 0 ;

     int walter =0 ;
     int op ;

     cout<<"1. If value is more than or equal to 100 press '1' "<<endl;
     cout<<"2. If value is less than 100 Press '2' "<<endl;
     cout<<"3. If value is less than 50 Press '3' "<<endl;
     cout<<"4. If value is less than 20 Press '4' "<<endl;
     cout<<endl;

     cin>>op;
     cout<<endl; 

  switch(op)
  {
    case 1: 
    
      if(n>=100){
            sum1 = n /100 ;
            cout<<"100 notes = "<<sum1<<endl;
          walter= n - sum1*100;
      }
    
    if(walter>=50)
    {
      
        sum2 = walter /50 ;
      cout<<"50 notes = "<<sum2<<endl;
      walter = walter - sum2*50;
    }


    if(walter>=20) {
        sum3 = walter /20 ;
      cout<<"20 notes = "<<sum3<<endl;
      walter = walter- sum3*20 ;
    }
   
    
     if(walter>=1) {
        sum4 = walter /1 ;
      cout<<"1 coin = "<<sum4<<endl;
      
    }
    break;

    case 2 :

    if(n>=50)
    {
      
        sum2 = n/50 ;
      cout<<"50 notes = "<<sum2<<endl;
      walter = n - sum2*50;
    }


    if(walter>=20) {
        sum3 = walter /20 ;
      cout<<"20 notes = "<<sum3<<endl;
      walter = walter- sum3*20 ;
    }
   
    
     if(walter>=1) {
        sum4 = walter /1 ;
      cout<<"1 coin = "<<sum4<<endl;
      
    }
    break;

    case 3:

    if(n>=20) {
        sum3 = n /20 ;
      cout<<"20 notes = "<<sum3<<endl;
      walter = n- sum3*20 ;
    }
   
    
     if(walter>=1) {
        sum4 = walter /1 ;
      cout<<"1 coin = "<<sum4<<endl;
      
    }
    break;

    case 4 :
    
     if(n>=1) {
        sum4 = n /1 ;
      cout<<"1 coin = "<<sum4<<endl;
      
    }
    break;


  }




  return 0 ;
}