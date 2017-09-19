#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#define rep(i,a,n) for(int i=(a);i<n;i++)
#define PB push_back
using namespace std;
int a[1000];
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
void printLeafPath(NODE * root,int a[],int pathLength){
	if(!root) return ;
	a[pathLength++]=root->data;
	if(root->left==NULL&&root->right==NULL){
		rep(i,0,pathLength) cout<<a[i]<<" ";
		cout<<endl;
	}
	else{
		printLeafPath(root->left,a,pathLength);
		printLeafPath(root->right,a,pathLength);
	
	
	}
}
int main(){
  NODE* root = newNode(10);
 root->left         = newNode(8);
  root->right        = newNode(2);
  root->left->left   = newNode(3);
  root->left->right  = newNode(5);
  root->right->right = newNode(2);
   printLeafPath(root,a,0);
}
