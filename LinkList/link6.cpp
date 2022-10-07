#include<iostream>
using namespace std ;
//delete the node form beginning

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

class Node* delBeg(Node* head)
{
  Node* temp = head;
  head = head->next;
  free(temp);
  temp = NULL;
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

    head = delBeg(head);
     print(head);



  return 0 ;
}