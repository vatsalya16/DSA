#include<iostream>
using namespace std ;
//reversing the doubly linked list

class Node 
{
  public:
  Node* prev ;
  int data ;
  Node* next;

};

class Node* AddToEmpty(Node* head , int data)
{
  Node* temp = new Node() ;
  temp->data = data ;
  temp->next =NULL;
  temp->prev= NULL;
  head = temp ;
  head = temp ;
  return head ;

};

class Node* addAtEnd(Node* head , int data)
{
  Node* temp  = new Node() ;
  temp->data = data;
  temp->next = NULL;
  temp->prev = NULL;
  Node*rev = head;

  while(rev->next!=NULL)
  {
      rev = rev->next;
  }
  
  rev->next = temp ;
  temp->prev = rev ;
  return head;

};

class Node* CreateList(Node* head)
{
  int n ,data;
  cout<<"Enter number of nodes"<<endl;
  cin>>n;

  if(n==0)
  {
    cout<<"Node is empty"<<endl;
    exit(1);
  }

  cout<<"Enter the data for Node 1"<<endl;
  cin>>data;

  head = AddToEmpty(head, data);

  for(int i = 1 ; i <n ; i++)
  {
    cout<<"Enter the element for Node "<<i+1<<endl;
    cin>>data;

    head = addAtEnd(head , data);
  }
    return head; 
};

class Node* reverse(Node* head)
{
  Node* firs = head ;
  Node* sec = firs->next;

    firs->next = NULL;
    firs->prev = sec;

  while(sec!=NULL)
  {
    sec->prev =sec->next;
    sec->next = firs;
    firs =sec;
    sec = sec->prev ;
  }
    head = firs;
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


int main()
{ 
  Node* head = new Node() ;

  head = CreateList(head);
  print(head);
  cout<<endl;

  head = reverse(head);
  print(head);

  




  return 0 ;

}