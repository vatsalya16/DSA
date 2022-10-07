#include<iostream>
using namespace std ;
//delete the node at any position
//recursive
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

int getCount(Node*head)
{
  int count = 0 ;
  if(head==NULL)
  {
    return 0;
  }

  return 1+ getCount(head->next) ; 
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
    cout<<getCount(head);



  return 0 ;
}