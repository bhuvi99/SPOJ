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
bool childrenSumProperty(NODE * root){
	if(!root|| (root->left==NULL&&root->right==NULL)) return true;
	int a=0,b=0;
	if(root->left!=NULL) a=root->left->data;
	if(root->right!=NULL) b= root->right->data;
	if(root->data!=a+b) return false;
	
	return childrenSumProperty(root->right)&&childrenSumProperty(root->left);
}
int main(){
  NODE* root = newNode(10);
 root->left         = newNode(8);
  root->right        = newNode(2);
  root->left->left   = newNode(3);
  root->left->right  = newNode(5);
  root->right->right = newNode(2);
   cout<<(childrenSumProperty(root)?"yes":"no")<<endl;
}
