#include<iostream>
using namespace std ;

class Node
{
  public:
  int data ;
  Node* next;
};

void print(Node*head)
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head =head->next;
  }
}

int main()
{
  Node* head = new Node();
  Node* two = new Node();

  head->data =10;
  head->next= two ;

  two->data =20 ;
  two->next =NULL;

  print(head);
  return 0 ;
}