#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }
 
    void push_back(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode;
      } else {
        Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newNode;
      }    
    }

    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list are: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }    
};

// testing the code  
int main() {
  LinkedList MyList;

  MyList.push_back(30);
  MyList.push_back(60);
  MyList.push_back(80);
  MyList.PrintList();
  
  return 0; 
}
