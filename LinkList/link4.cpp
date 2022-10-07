#include<iostream>
using namespace std ;
//inserting node after a given position

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

class Node* addToAny(Node* head , int pos , int ndata)
{
  Node* temp = head;

  if(head== NULL)
  {
    return head; 
  }
  
  while(pos>1)
  {
    temp = temp->next;
    pos--;
  }
  Node* third = new Node();
  third->data = ndata;
   third->next = temp->next;
  temp->next = third;
 
  return head;
};

int main()
{ 
  Node* head = new Node();
  Node* two = new Node();
  Node* three = new Node();
  
   head->data =10;
   head->next= two ;

   two->data =20 ;
   two->next =three;

   three->data= 30;
   three->next= NULL;

    print(head);
    cout<<endl;

    int pos= 3;
    int data = 40;

    head = addToAny(head , pos, data);
     print(head);


  return 0 ;
}