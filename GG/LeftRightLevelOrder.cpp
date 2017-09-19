#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#define PB push_back
using namespace std;
typedef struct node{
	int data;
	struct node *left, *right;
} NODE;
NODE * newNode(int data){
	NODE * temp=new NODE;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void leftRightTraversal(NODE * root){
	if(!root) return;
	queue<NODE*> q;
	q.push(root);
	NODE * temp;
	while(!q.empty()){
		root=q.front();q.pop();
		cout<<root->data<<" ";
		if(q.empty()){
			if(root->left!=NULL) q.push(root->left);
			if(root->right!=NULL) q.push(root->right);
		}
		else{
			temp=q.front();q.pop();
			cout<<temp->data<<" ";
			if(root->left!=NULL) q.push(root->left);
			if(temp->right!=NULL)q.push(temp->right);
			if(root->right!=NULL) q.push(root->right);
			if(temp->left!=NULL) q.push(temp->left);
		}
	}
	return;
}
int main(){
  NODE* root = newNode(1);
 root->left        = newNode(2);
    root->right       = newNode(3);
 
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);
 
    root->left->left->left  = newNode(8);
    root->left->left->right  = newNode(9);
    root->left->right->left  = newNode(10);
    root->left->right->right  = newNode(11);
    root->right->left->left  = newNode(12);
    root->right->left->right  = newNode(13);
    root->right->right->left  = newNode(14);
    root->right->right->right  = newNode(15);
 
    root->left->left->left->left  = newNode(16);
    root->left->left->left->right  = newNode(17);
    root->left->left->right->left  = newNode(18);
    root->left->left->right->right  = newNode(19);
    root->left->right->left->left  = newNode(20);
    root->left->right->left->right  = newNode(21);
    root->left->right->right->left  = newNode(22);
    root->left->right->right->right  = newNode(23);
    root->right->left->left->left  = newNode(24);
    root->right->left->left->right  = newNode(25);
    root->right->left->right->left  = newNode(26);
    root->right->left->right->right  = newNode(27);
    root->right->right->left->left  = newNode(28);
    root->right->right->left->right  = newNode(29);
    root->right->right->right->left  = newNode(30);
    root->right->right->right->right  = newNode(31);
   leftRightTraversal(root);
}
