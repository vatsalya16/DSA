#include<iostream>
using namespace std ; 

class Human 
{
    public :
    int height  ;
    int weight ;
    int age ; 

    public :
    int getAge()
    {
      return this->age ;

    }
    int setWeight(int w)
    {
      this->weight = w ; 
    }
};

class Male : public Human 
{ 
  public:
  string color ;

  void sleep()
  {
    cout<<"male sleeeping"<<endl;
  }

};

int main()
{
      Male object ;
      

      //these values get inherited from human 
      cout<<object.age<<endl;
      cout<<object.color<<endl;
      cout<<object.height<<endl;
      cout<<object.weight<<endl;

      object.setWeight(100);

      cout<<object.weight<<endl;

      object.sleep() ;


  return 0 ;
}