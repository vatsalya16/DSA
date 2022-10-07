#include<iostream>
using namespace std;
//add node to end doubly linked list

class Node
{
  public:
  Node*prev ;
  int data ;
  Node* next;
};

class Node* addToEnd(Node* head , int data)
{
  Node* temp = new Node();
  temp->data = data ;
  temp->next = NULL;
  temp->prev = NULL;
  Node* rev = head;

  while(rev->next!=NULL)
  {
    rev =rev->next;
  }
   rev->next = temp ;
  temp->prev =rev ;
 
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
  Node* head = new Node();
  Node* two = new Node();
  head->data =10;
  head->prev =NULL;
  head->next = two;

  two->data = 20;
  two->prev =head;
  two->next = NULL;

  head = addToEnd(head , 30);
  print(head) ;

  return 0 ;
}