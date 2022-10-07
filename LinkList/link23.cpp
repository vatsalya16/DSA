#include<iostream>
using namespace std ;
//insertion at the beginning CLL

class Node
{
  public:
  int data;
  Node* next; 
};



class Node* addToEmpty(int data)
{
 Node* temp = new Node();
  temp->data = data;
  temp->next = temp ;
  return temp ;

};

class Node* addAtBeg(Node* tail ,int data)
{
  Node* newP = new Node();
  newP->data = data ;
  newP->next = tail->next;
  tail->next = newP;
  return tail;

};


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
   Node*tail;
   tail  = addToEmpty(11); 
   tail  = addAtBeg(tail, 12);
   print(tail);


    return 0 ;
}
