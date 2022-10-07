#include<iostream>
using namespace std ;
//creating entire new doubly linked list 

class Node 
{
  public:
  Node* prev ;
  int data ;
  Node* next ;
};

class Node* addToEnd(Node* head , int data)
{
  Node* temp = new Node();
  temp->data = data ;
  temp->prev = NULL;
  temp->next =NULL ;
  Node* rev = head ;

  while(rev->next !=NULL)
  {
      rev =rev->next;
  }
  rev->next = temp ;
  temp->prev = rev ;
  return head;
};


class Node* addToEmpty(Node* head , int data)
{
  Node * temp = new Node();
  temp->data = data;
  temp->next = NULL;
  temp->next =NULL ;
  head = temp ;
  return head;
};

class Node* CreateList(Node* head)
{
  int n , data ;

  cout<<"Enter the number of nodes"<<endl;
  cin>>n;

  if(n==0)
  {
    return head ;
  }

  cout<<"Enter the data for the Node 1:"<<endl;
  cin>>data ;

  head = addToEmpty(head , data);

  for(int i = 1 ; i<n ; i++)
  {
    cout<<"Enter the element for node"<<i+1<<endl ;
    cin>>data;
    head = addToEnd(head , data);
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

int main()
{
  Node * head = NULL ;
  head = CreateList(head);
  print(head);

  return 0 ;
}