#include<iostream>
#include<queue>
using namespace std;
typedef struct node{
	int data;
	struct node *left, *right;
} NODE;
void levelOrder(NODE * root){
	if(!root) return;
	queue<NODE*> q;
	q.push(root);
	while(!q.empty()){
		NODE * temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL) {q.push(temp->left);}
		if(temp->right!=NULL) q.push(temp->right);	
	}
}
NODE * newNode(int data){
	NODE * temp=new NODE;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int main(){
	NODE * root=newNode(1);
	root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    levelOrder(root);
    count<<endl;
}
