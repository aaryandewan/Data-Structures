#include <iostream>
using namespace std;
#include <bits/stdc++.h>

class node{
  public:
    int data;
    node* next;
  node (int d){
    data = d;
    next = NULL;
  }
};

node* revLL(node *&head){
  node* p = NULL;
  node *c = head;
  node *n = head->next;

  while(c->next != NULL){
    c->next = p;
    p=c;
    c=n;
    n=c->next;
  }
  c->next = p;
  head = c;
  return head;
  
}


int main() {
  
  node *first = new node(10);
  node *second = new node(100);
    node *third = new node(110);
  
  first->next = second;
  second->next = third;
  node *head = first;
  
  node *newHead = revLL(head);
  cout << newHead->next->next->next;
  
        
  

  
}


