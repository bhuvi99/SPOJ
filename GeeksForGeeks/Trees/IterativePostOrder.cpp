#include<iostream>
#include<stack>
using namespace std;
typedef struct node{
	int data;
	struct node *left, *right;
} NODE;
void iterativePostOrder2Stacks(NODE * root){
	if(!root) return;
	stack<NODE*> result,temp;
	
	while(root!=NULL){
		result.push(root);
		if(root->left!=NULL) temp.push(root->left);
		if(root->right!=NULL) temp.push(root->right);
		if(temp.empty()) break;
		root=temp.top();
		temp.pop();
	}
	while(!result.empty()) {cout<<result.top()->data<<" "; result.pop();}
}
NODE * newNode(int data){
	NODE * temp=new NODE;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int main(){
  
  NODE* root = newNode(10);
  root->left        = newNode(8);
  root->right       = newNode(2);
  root->left->left  = newNode(3);
  root->left->right = newNode(5);
  root->right->left = newNode(2);
    iterativePostOrder2Stacks(root);
    cout<<endl;
}
