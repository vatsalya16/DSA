#include<iostream>
using namespace std ;
//insertion of a node doubly linke list 

class Node
{
  public:
  Node* prev ;
  int data ;
  Node* next;
};

class Node* addToEmpty(Node* head, int data)
{
  Node* temp = new Node() ;
   temp->prev = NULL;
  temp->data = data ;
  temp->next = NULL;
  //temp->next = head;
  //head->prev = temp ;
  head = temp ;
  return head;
  
};

void print(Node* head)
{
  Node* temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

int main()
{
    Node* head = NULL;
   
    head = addToEmpty(head , 30);

    print(head);

  return 0 ;
}
