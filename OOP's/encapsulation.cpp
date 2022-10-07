#include<iostream>
using namespace std ;


//encapsulation
class Student 
{
    private:
    string name ;
    int age ;
    int height ; 

    public:

    int getAge()
    {
      return this->age ;
    }

};

int main()
{
    
    Student first ; 

      cout<<"Hello"<<endl;

    return 0 ;
}