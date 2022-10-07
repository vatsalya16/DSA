#include<iostream>
using namespace std ;
//delete the node at any position

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

class Node* delPos(Node* head, int pos)
{
  Node* current = head;
  Node* prev = head;

  if(head == NULL)
  {
    cout<<"List is already empty";
  }
  else if (pos ==1)
  {
    head = current->next ;
    free(current);
    current = NULL;
  }
  else
  {
    while(pos!=1)
    {
      prev = current ;
      current = current->next ;
      pos--;
    }
    prev->next =current->next;
    free(current);
    current = NULL;
  }
  return head ;
}

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


    //delete operation

    cout<<endl;
      int pos= 2  ;
    head = delPos(head, pos);
     print(head);



  return 0 ;
}