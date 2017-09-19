#include<iostream>
#include<stack>
#include<queue>
using namespace std;
typedef struct node{
	int data;
	struct node *left, *right;
} NODE;
void reverseLevelOrder(NODE * root){
	if(!root) return;
	queue<NODE*> q;
	stack<NODE *> s;
	NODE * temp=root;
	q.push(root);
	while(!q.empty()){
		root=q.front();
		s.push(root);
		q.pop();
		if(root->right) q.push(root->right);
		if(root->left) q.push(root->left);
		
	

	
	}

	while(!s.empty()){
	
		root=s.top();
		cout<<root->data<<" ";
		s.pop();
	}
}
NODE * newNode(int data){
	NODE * temp=new NODE;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int main(){
  
  NODE* root = newNode(1);
 root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);
    reverseLevelOrder(root);
}
