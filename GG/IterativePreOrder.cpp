#include<iostream>
#include<stack>
using namespace std;
typedef struct node{
	int data;
	struct node *left, *right;
} NODE;
void iterativePreOrder(NODE * root){
	if(!root) return;
	stack<NODE*> s;
	s.push(root);
	while(!s.empty()){
		if(root)
		cout<<root->data<<endl;
		
		if(root){s.push(root);
			root=root->left;
		}
		else{
			root=s.top();
			root=root->right;
			s.pop();
		}
	}
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
    iterativePreOrder(root);
    cout<<endl;
}
