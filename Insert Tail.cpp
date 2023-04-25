#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct Node
{
 int data;
 Node *next;
};


Node* Insert(Node *head,int data)
{
  
    Node *p,*tmp;
    
    Node* temp = (Node*)malloc(sizeof(Node));



    temp->data = data;
   
    // If head is NULL, means first element
 
    if(head == NULL){

       temp->next = NULL;
       head = temp;

    } else {
        
         p =head;

        // Traverse the linked list and insert at the end

        while(p->next!=NULL){
          p = p->next;
        }

        // Last link point to inserted element
   
        p->next = temp;
    
        temp->next = NULL;
    }
    
    return head;
}

void Print(Node *head)
{
 Node *temp = head;
 while(temp!= NULL)
         { cout<<temp->data<<"\n";
           temp = temp->next;
         }
}


int main()
{
 
 Node *head = NULL;
 
 head = Insert(head,3);
 head = Insert(head,5);
 head = Insert(head,2);
 head = Insert(head,7);
 
 Print(head);
}
