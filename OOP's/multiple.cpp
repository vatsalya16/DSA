#include<iostream>
using namespace std ;
//multiple inheritance 

class Animal
{
    public:
    int age ;
    int weight ;

    public:
    void bark()
    {
      cout<<"Barking "<<endl;
    }
};

class Human 
{
    public:
    string color ;

    public:
    void speak()
    {
      cout<<"Speaking"<<endl;
    }
};

class Hybrid: public Animal , public Human 
{

};


int main()
{
    Hybrid a ;
    a.bark() ;
    a.speak();


  return 0 ;
}