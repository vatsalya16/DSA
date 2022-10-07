#include<iostream>
using namespace std ;

class Node
{
  public:
  int data ;
  Node* next;
};

void print(Node* n)
{
  while(n!=NULL)
  {
    cout<<n->data<<" " ;
    n= n->next;
  }
}

int length(Node*head)
{
  Node* temp = head ;
  int count = 1 ;
  while(temp->next !=NULL)
  {
    count++ ;
    temp= temp->next;
  }
  return count ;
}

class Node* del(Node* head ,  int pos)
{
  Node* curr = head;
  Node* prev  =head ;

  while(pos>1)
  {
    prev= curr;
    curr = curr->next;
    pos-- ;
  }
  prev->next = curr->next;
  free(curr);
  curr= NULL ;
  return head;
   
}
class Node* insert(Node*head , int data)
{
  Node* temp = new Node();
  temp->data = data;
  temp->next =NULL ;
  Node* p = head;
  while(p->next!=NULL)
  {
    p =p->next;
  }
 p->next = temp ;
  
 


  return head; 

}

int main()
{
  Node* head = new Node();
  Node* second = new Node() ;
  

  head->data =12;
  head->next = second;

  second->data =122 ;
  second->next  =NULL ;

 // print(head);

  //insert
  head = insert(head, 3);
  

  //delete
  int pos =2 ;

 // head = del(head, pos);


  //length  of linked list
   
   int ans = length(head);
   cout<<ans;
 // print(head);


  return 0 ;
}

