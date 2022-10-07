#include<iostream>
#include<string>
using namespace std;
//leacture 43 OOPs concept in C++

//program -------------1
/*class hero
{
  //empty
  int value ;
};

int main()
{
    hero h1 ;

    cout<<"Size :"<<sizeof(h1)<<endl;

  return 0 ;
}*/

//program ----------2 acess modifier

/*class hero
{
  public:
  int health ;
  char level ;

};

int main()
{
    hero ramesh ;

    ramesh.health =70 ;
    ramesh.level = 'A' ;

    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;


  return 0 ;
}*/

//program -----------3 getter&setter
 
 /*class hero

{
  private: 
  int health ;

  public:
  char level ;

  int getHealth()
  {
    return health ;
  }
  char getLevel()
  {
    return level ;
  }
  int setHealth(int h)
  {
    health = h ;
  }
  char setLevel(char c)
  {
    level = c ;
  }

};

int main()
{
    //static allocation
    hero ramesh ;

    ramesh.setHealth(5);
    ramesh.setLevel('a');

    cout<<ramesh.getHealth()<<endl;

    //dynamic allocation
    
    hero *suresh = new hero ; 
    (*suresh).setHealth(4);

    cout<<(*suresh).getHealth()<<endl;
    //or
    cout<<suresh->getHealth()<<endl;


  return  0;
}*/

//program-----------4 constructor

 /*class hero
{
  

  public:
 

  hero()
  {
    cout<<"Constructor called"<<endl;
  }

  
};

int main()
{

  //object created statically
  cout<<"Before"<<endl;
  hero ramesh ;
  cout<<"After" ;
  


  

  return  0;
}*/

//program------------5 this keyword

/*class hero
{
    private :
    int health;

    public:

    hero(int health)
    {
      cout<<"Address of this :"<<this<<endl;
      this-> health = health;
    }

  
};

int main()
{
    hero ramesh(10) ;
    cout<<"Address of ramesh :"<<&ramesh<<endl;
   
  return 0 ;
}*/

//program-----------6 copy constructor
/*class hero 
{
  public :

  int health ;
  char level ;

  hero(int health , char level)
  {
    this->health = health ; 
    this->level = level ; 
  }

  void print()
  {
    cout<<"Health "<<this->health<<endl;
    cout<<"Level "<<this->level<<endl;
  }

};

int main()
{
  hero s(70, 'C') ;
  s.print() ;

  hero r(s);  //copy constructor 
  r.print();
}*/

//program-----------------7 shallow and deep copy

//program------------8 destructor

class hero
{
    public :

    hero()
    {
      cout<<"Constructor called"<<endl;
    }

    ~hero()
    {
      cout<<"Destructor called"<<endl;
    }

};

int main()
{
    //static
  hero h ;

  //dynamic
  hero *b = new hero() ;

  //manually calling of destructor in dynamic memory allocation
   delete b ;

}


