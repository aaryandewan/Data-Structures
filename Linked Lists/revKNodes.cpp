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

node* kRev(node*& head, int k){
  int arr[6];
  std::vector<node*> vec ;
  std::vector<node*> tails ;
  node* c;
  node* n;
  node* p;
  c = head;
  n = c->next;
  p=NULL;
  
  
  for(int i =0; i<=2; i++){
    for(int j=0; j<2; j++){
      // cout << "on " << c->data << endl;
  cout << "cyrrently on  " << c << " " << c->data << endl;
      // cout << "n is " << p << endl;
      if(c->next != NULL){
            c->next=p;
      p=c;
      c=n;
      n=c->next;
      
      }
      else{
        c->next=p;
        p=c;
        // cout << "cyrrentlyyy on  " << c << " " << c->data << endl;
      }
    }
    
    vec.push_back(p);
    
    p=NULL;
    cout << "Hi" << endl;
  }
  
  // cout << vec[1]->next->data;
  
  
  
  node* curr;
  int sz = vec.size();
  for(int k = 0; k<sz; k++){
    curr = vec[k];
    while(curr->next!=NULL){
      curr = curr->next;
    }
    curr->next = vec[k+1];
    tails.push_back(curr);
    
  }
  cout << tails[2]->data;
  
  
  for(int fin=0; fin<tails.size(); fin++){
    tails[fin] = vec[fin+1];
  }
  
  return vec[0];

  // return head;
  
  
  
}


int main() {
  
  node *first = new node(10);
  node *second = new node(100);
    node *third = new node(110);
    node *fourth   = new node(120);
    node *fifth = new node(130);
    node *sixth = new node(140);
  
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next=fifth;
  fifth->next=sixth;
  node *head = first;
  
  node *newHead = kRev(head, 2);
  node *cc = newHead;
  cout << "Jj" << endl;
  while(cc->next!= NULL){
    cout << cc->data << endl;
    cc = cc->next; 
  }
  cout << cc->data;
  
  // cout << cc->next->next->next->next->next->data;
  

  
}


