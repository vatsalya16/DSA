#include<iostream>
using namespace std ;
//multi level inheritance 

class Animal
{
    public:
    int age ;
    int weight ;

    public:
    void speak()
    {
      cout<<"Speaking "<<endl;
    }
};

class Dog : public Animal 
{

};

class labrador : public Animal
{
   
};


int main()
{
    labrador l ;
    l.speak();

  return 0 ;
}