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
void printLeftBoundary(NODE * root){
	if(!root) return;
	if(root->left==NULL&&root->right==NULL) return;
	cout<<root->data<<" ";
	if(root->left!=NULL)
		printLeftBoundary(root->left);
	else printLeftBoundary(root->right);
	/*while(root->left!=NULL) {
		cout<<root->data<<" ";
		root=root->left;
	}
	if(root->right!=NULL) cout<<root->data<<" ";
	*/
	return;
}
void printLeaves(NODE * root){
	if(!root) return ;
	if(root->left==NULL&& root->right==NULL) cout<<root->data<<" ";
	else{
		printLeaves(root->left);
		printLeaves(root->right);
	}
	return;
}
void printRightBoundary(NODE *root){
	if(!root) return ;
	if(root->left==NULL&&root->right==NULL) return;
	if(root->right!=NULL)
		printRightBoundary(root->right);
	else printRightBoundary(root->left);
	cout<<root->data<<" ";
}
void boundarayTraversal(NODE * root){
	if(!root) return;
	cout<<root->data<<" ";
	printLeftBoundary(root->left);
	printLeaves(root);
	printRightBoundary(root->right);
	return;
}
int main(){
  NODE* root = newNode(1);
 root->left        = newNode(10);
    root->right       = newNode(20);
    root->right->left  = newNode(30);

    root->right->left->right = newNode(40);
   
    boundarayTraversal(root);
}
