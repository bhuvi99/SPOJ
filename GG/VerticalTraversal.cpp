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
void verticalTraversal(NODE * root,int distance,map<int,vector<int>> & vertical){
	if(!root) return;
	vertical[distance].PB(root->data);
	verticalTraversal(root->left,distance-1,vertical);
	verticalTraversal(root->right,distance+1,vertical);
	
}
NODE * newNode(int data){
	NODE * temp=new NODE;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int main(){
 
 map<int,vector<int>> vertical;
  NODE* root = newNode(1);
 root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    verticalTraversal(root,0,vertical);
    for(map<int,vector<int>> ::iterator it=vertical.begin();it!=vertical.end();++it){
    	for(int n=it->second.size(),i=0; i<n;i++) cout<<it->second[i]<<" ";
    	cout<<endl;
    	}
}
