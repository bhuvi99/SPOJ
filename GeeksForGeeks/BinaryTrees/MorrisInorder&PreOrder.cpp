#include<iostream>
#include<queue>
using namespace std;
typedef struct node{
	int data;
	struct node *left, *right;
} NODE;
void morrisInOrder(NODE * current){
	NODE * pre=new NODE;
	while(current!=NULL){
		if(current->left==NULL){
			cout<<current->data<<endl;
			current=current->right;
		}
		else{
			pre=current->left;
			while(pre->right!=NULL&&pre->right!=current) pre=pre->right;	
			if(pre->right==NULL){
				pre->right=current;
				current=current->left;
			
			}
			else{
				pre->right=NULL;
				cout<<current->data<<endl;
				current=current->right;
			
			
			}
		
		}
		
	}
	return;
}
void morrisPreOrder(NODE * current){
	NODE * pre=new NODE;
	while(current!=NULL){
		if(current->left==NULL){
			cout<<current->data<<endl;
			current=current->right;
		}
		else{
			pre=current->left;
			while(pre->right!=NULL&&pre->right!=current) pre=pre->right;	
			if(pre->right==NULL){
				pre->right=current;
				cout<<current->data<<endl;
				current=current->left;
			
			}
			else{
				pre->right=NULL;
				
				current=current->right;
			
			
			}
		
		}
		
	}
	return;
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
    cout<<"Inorder: "<<endl;
    morrisInOrder(root);
    cout<<endl;
    cout<<"Preorder: "<<endl;
    morrisPreOrder(root);
    
}
