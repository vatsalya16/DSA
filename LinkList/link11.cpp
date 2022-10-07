#include<iostream>
using namespace std ;
//reverse a linked list 
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

class Node* addToEnd(Node* head , int ndata)
{
    Node* temp = head;
    
    if(head==NULL)
    {
      return head; 
    }

    else{
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    Node* third = new Node();
    third->data =ndata;
    third->next =NULL;
    temp->next = third;
    }
    
    return head ;
};

class Node* reverse(Node* head)
{
  Node* curr = head ;
  Node* prev = NULL;

  while(curr!=NULL)
  {
    Node* temp = curr->next ;
    curr->next = prev ;
    prev =curr;
    curr =temp ;
  head = prev ;
  }
  
      return prev ;
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

    
    int data = 40;

    head = addToEnd(head ,  data);
     print(head);
    
    cout<<endl;
    
    head = reverse(head) ;
    print(head);




  return 0 ;
}