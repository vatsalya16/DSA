#include<iostream>
#include<vector>
using namespace std ;

void display(vector<int> v)
{
  for(int i =0 ; i<v.size() ; i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}


int main()
{

      //lecture---------------------1


    //Example 1
     vector<int> a(5,1); //5 is size of vector 
                     //1 represents that all elments are initillized by value 1

      cout<<"Size "<<a.size()<<endl;
      cout<<"Capacity "<<a.capacity()<<endl;

      a.push_back(1) ; 

      cout<<"Print a "<<endl;
        for(int i: a)
        {
          cout<<i<<" ";
        }cout<<endl;





    //Example 2
      vector<int> v ;
        
      cout<<"Capacity "<<a.capacity()<<endl;


      cout<<"Capacity "<<v.capacity()<<endl; //initially Capacity is 0

      v.push_back(1) ; //element assigning 

      cout<<"Capacity "<<v.capacity()<<endl;

      v.push_back(2);

      cout<<"Capacity "<<v.capacity()<<endl;

      v.push_back(3);
      cout<<"Capacity "<<v.capacity()<<endl;

      v.push_back(4);
      cout<<"Capacity "<<v.capacity()<<endl;

      v.push_back(5);
      cout<<"Capacity "<<v.capacity()<<endl;

      
      cout<<"Size "<<v.size()<<endl;  // tells total number of element

        
      cout<<"Before pop"<<endl;
        for(int i: v)
        {
          cout<<i<<" ";
        }cout<<endl;


      v.pop_back();    //throws last value

        cout<<"After pop"<<endl;
        for(int i:v)
        {
          cout<<i<<" ";
        }
        cout<<endl;

        cout<<"Before clear size "<<v.size()<<endl;

        v.clear();

        cout<<"After clear size "<<v.size()<<endl;


      //lecture---------------------------2



          vector<int> v ;
          int size , element ;

            cout<<"Enter size of element";
            cin>>size ;

        for(int i =0 ;i<size ; i++)
        {
          cout<<"Enter element :";
          cin>>element ;
          v.push_back(element);
        }

        display(v);

        vector<int> :: iterator itr =v.begin();
        v.insert(itr, 234);
        display(v);


  return 0 ;
}