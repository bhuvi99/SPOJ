#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#define rep(i,a,n) for(int i=(a);i<n;i++)
#define PB push_back
using namespace std;
int a[1000];
typedef struct Node{
	int data;
	struct Node *left, *right;
} Node;
Node * newNode(int data){
	Node * temp=new Node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int maxWidthOfTree( Node * root){
	if(root==NULL) return 0;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int curMax=0,globalMax=0;
	while(!q.empty()){
		root=q.front();
		q.pop();
		if(root!=NULL){
		curMax++;
			if(root->left) q.push(root->left);
			if(root->right) q.push(root->right);
		}
		else{
			globalMax=max(globalMax,curMax);
			curMax=0;
			if(q.front()==NULL) break;
			q.push(NULL);
		
		}
	
	}
	return globalMax;
}

int main(){
  Node* root = newNode(1);
root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(8);
    root->right->right->left  = newNode(6);
    root->right->right->right  = newNode(7);
  cout<< maxWidthOfTree(root)<<endl;
}
