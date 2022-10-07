#include<iostream>
using namespace std ;
//add in between in a doubly linked list

class Node 
{
  public:
  Node* prev ;
  int data ;
  Node* next ;
};

class Node* addToEnd(Node* head , int data)
{
  Node* temp = new Node();
  temp->data = data ;
  temp->prev = NULL;
  temp->next =NULL ;
  Node* rev = head ;

  while(rev->next !=NULL)
  {
      rev =rev->next;
  }
  rev->next = temp ;
  temp->prev = rev ;
  return head;
};

void print(Node* head)
{
  Node* temp = head;
  while(temp!=NULL)
  { 
    if(temp->next==NULL)
    {
        cout<<temp->data<<" ";
    }
    else
    {    
      cout<<temp->data<<"->";
    }
    temp = temp->next;
  }
}

class Node* addAny(Node*head , int data , int pos)
{
  Node* temp = new Node() ; 
  temp->data = data ;
  temp->next = NULL;
  temp->prev = NULL;

  Node* rev =head;
  Node* rev2 = NULL;
  while(pos!=1)
  {
    rev =rev->next ;
    pos--;
  }
  if(rev->next!=NULL)
  {
    rev2 = rev->next;
    rev->next = temp ;
    rev2->prev = temp ;
    temp->prev =rev ;
    temp->next= rev2 ;

  }
  else
  {
    rev->next = temp ;
    temp->prev = rev ;
  }
  return head; 
};

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
  cout<<endl;

  int pos = 2 ;
  head = addAny(head , 25 , pos);
   print(head) ;


}
