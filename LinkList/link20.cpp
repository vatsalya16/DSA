#include<iostream>
using namespace std ;
//deleting the intermediate node in a doubly linked list

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
class Node* delFirst(Node* head)
{
  Node*temp = head;
  head = temp->next;
  free(temp);
  temp= NULL;
  return head;

};

class Node* delLast(Node* head)
{
  Node* temp = head;
  Node* temp2 ;
  while(temp->next !=NULL)
  {
    temp = temp->next;
  }
  temp2 = temp->prev ;
  temp2->next = NULL;
  free(temp);
  temp =NULL;
  return head;

}

class Node* delInt(Node* head , int pos)
{ 

  Node*temp = head ;
  Node* temp2 = NULL;
  if(pos==1)
  {
    head = delFirst(head);
    return head;
  }
  else if(temp->next ==NULL)
  {
    head =delLast(head);
  }
  else
  {
      while(pos>1)
      {
        temp  = temp->next;
        pos--;
      }
    temp2= temp->prev ;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    temp= NULL;
  }

  return head;
};



int main()
{ 
  Node* head = new Node() ;

  head = CreateList(head);
  print(head);

  int pos = 2; 
  head = delInt(head , pos);
  cout<<endl;

  print(head);




  return 0 ;

}