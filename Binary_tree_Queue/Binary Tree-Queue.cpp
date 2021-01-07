#include <iostream>
#include <queue>
using namespace std;
struct node{
  char data;
  struct node *left;
  struct node *right;
};
queue<node*> qu;
void levelorder(node*);
int main(void){
  node *root,*p1,*p2,*p3,*p4,*p5,*p6,*p7;
  p1=new node;
  p1->data='1';
  root=p1;
  p2=new node;
  p2->data='2';  
  p3=new node;
  p3->data='3';
  p4=new node;
  p4->data='4';
  p5=new node;
  p5->data='5';
  p6=new node;
  p6->data='6';
  p7=new node;
  p7->data='7';
  p1->left=p2;
  p1->right=p3;
  p2->left=p4;
  p2->right=p5;
  p3->left=NULL;
  p3->right=p6;
  p4->left=NULL;
  p4->right=p7;
  p5->left=NULL;
  p5->right=NULL;
  p6->left=NULL;
  p6->right=NULL;
  p7->left=NULL;
  p7->right=NULL;
  levelorder(root);
  cout << endl;
}
void levelorder(node *now){ 
  qu.push(now); 
  while (!qu.empty()){
    cout  << qu.front()->data <<" ";
    if (qu.front()->left!=NULL) {
      qu.push(qu.front()->left);
    }
	  if (qu.front()->right!=NULL){
	    qu.push(qu.front()->right);
    } 
    qu.pop();    
  }
}
