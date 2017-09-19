#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> post;
int search(int key,int in[],int n){
	for(int i=0;i<n;i++) if(in[i]==key) return i;
	return -1;

}
int postOrderFromInorderPreorder(int in[],int pr[],int n){
	int root=search(pr[0],in,n);
	if(root==-1) return -1;
	if(root!=0){
		int s=postOrderFromInorderPreorder(in,pr+1,root);
		if(s==-1) return -1;
	}
	if(root!=n-1) {
		int s=postOrderFromInorderPreorder(in+root+1,pr+root+1,n-root-1);
		if(s==-1) return -1;
	}
	post.push_back(pr[0]);
	return 1;
}
int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		post.clear();
		int n;
		cin>>n;
		int pr[n],in[n];
		for(int i=0;i<n;i++){
			cin>>pr[i];
			in[i]=pr[i];
		
		}
		sort(in,in+n);
		int s=postOrderFromInorderPreorder(in,pr,n);
		if(s==-1) cout<<"NO"<<endl;
		else{
			for(int i=0;i<n;i++) cout<<post[i]<<" ";
			cout<<endl;
			
		}
	}
}
