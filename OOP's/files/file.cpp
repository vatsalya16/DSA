#include<iostream>
#include<fstream>

using namespace std ;

int main()
{

    //opening a file using constructor
    ofstream out("new.txt");  // dont use with ifstream 

    //writing something in a file
    string s = "hello world";
    //out<<s ;

    
    //reading a file
    string s2  ; // to store the content
    ifstream in("new.txt");
     getline(in, s2);
     cout<<s2;


  return 0 ;
}