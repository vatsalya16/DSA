#include<iostream>
using namespace std;
//circular linked list 

class Node
{
  public:
  int data ;
  Node* next;
};

class Node* Circular(int data)
{
  Node *temp = new Node();
  temp->data  =data ;
  temp->next = temp ;
  return temp ;
}


void print(Node* head)
{
  Node* temp = head;
  for(int i=0 ; i<1 ; i++)
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

int main()
{
    int data = 1;
    Node*tail;
    
    tail= Circular(data);
    print(tail);

  return 0;
}