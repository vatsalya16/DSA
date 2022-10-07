#include<iostream>
using namespace std ;
//palindrome
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
  }
      return prev ;
};

bool Palindrome(Node* head)
{
  Node* fast = head;
  Node* slow = head;

  while(fast !=NULL && fast->next!=NULL)
  {
    slow= slow->next;
    fast = fast->next->next;
  }

  slow = reverse(slow->next);

  while(slow!=NULL)
  {
    if(head->data != slow->data)
    {
      return false ;
    }
    head = head->next;
    slow= slow->next;
  }

  return true;
}

int main()
{
   Node* head = new Node();
  Node* two = new Node();
  Node* three = new Node();
  Node* four = new Node();
  Node* five = new Node();
 

  
   head->data =10;
   head->next= two ;

   two->data =20 ;
   two->next =three;

   three->data= 30;
   three->next= four;

   four->data = 20 ;
   four->next = five;

   five->data = 10 ;
   five->next = NULL;

    print(head);
    cout<<endl;

    
    
    bool ans = Palindrome(head);

    if(ans)
    {
      cout<<"Palindrome";
    }
    else
    {
      cout<<"Not a Palindrome";
    }




  return 0 ;
}