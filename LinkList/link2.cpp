#include<iostream>
using namespace std ;
//inserting node at beginning

class Node 
{
  public:
  int data ;
  Node* next;
};

void print(Node* head)
{
  while(head!= NULL)
  {
    cout<<head->data<<" ";
    head= head->next;
  }

};

class Node* addToFront(Node* head , int ndata)
{
  Node* third = new Node() ;
  third->data = ndata;
  third->next = head ;
  head = third ;
  return head;
};

int main()
{
    Node* head = new Node();
    Node* two = new Node() ;

    head->data =10;
  head->next= two ;

  two->data =20 ;
  two->next =NULL;

    print(head);
    cout<<endl;
    
    int new_data =30 ;
    head = addToFront(head, 30);

    print(head);

  

  return 0 ;
}