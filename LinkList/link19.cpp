#include<iostream>
using namespace std;
//deleting the last node in doubly linked list

class Node
{
  public:
  Node* prev;
  int data ;
  Node* next;
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

class Node* addToEmpty(Node * head, int data)
{ 
  Node* temp = new Node();
  temp->next = NULL ;
  temp->prev = NULL;
  temp->data = data ;
  head = temp;

};


class Node* CreateList(Node* head)
{
  int n , data ;
  cout<<"Enter number of nodes"<<endl;
  cin>>n;

  cout<<"Enter the data for Node 1"<<endl;
  cin>>data ;

  if(n == 0)
  {
    return head; 
  }

  head = addToEmpty(head , data);

  for(int i =1 ; i<n ; i++)
  {
      cout<<"Enter the element for Node "<<i+1<<endl;
      cin>>data ;
      head = addToEnd(head , data);
  }

  return head;      
};

class Node* delLas(Node* head)
{
  Node* temp = head;
  Node* temp2 = NULL;

  while(temp->next!=NULL)
  {
    temp= temp->next;
  }
  temp2 =temp->prev ;

  temp2->next =NULL;
  free(temp);
  temp =NULL;
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
  Node* head = nullptr;
  head= CreateList(head);
  print(head);
  cout<<endl;
  
  head = delLas(head);

  print(head);


  return 0 ;;
}