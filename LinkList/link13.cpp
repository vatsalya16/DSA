#include<iostream>
using namespace std  ;
//doubly linked list

class Node 
{
  public:
  Node* prev;
  int data ;
  Node* next;
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
    Node* head = new Node();
    head->prev = NULL;
    head->data = 10 ;
    head->next = NULL ;

      print(head);

  return 0 ;
}