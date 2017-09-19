#include<iostream>
using namespace std;
int main(){
	int testcases,temp,n,m,chef_turn;
	cin>>testcases;
	while(testcases--){
		cin>>n>>m;
		bool jobs[n+1]={false};
		int chef[n-m+1],ast[n-m+1],chef_i=0,ast_i=0;
		for(int i=1;i<=m;i++){
			cin>>temp;
			jobs[temp]=true;
		}
		chef_turn=1;
		for(int i=1;i<=n;i++){
			if(!jobs[i]){
				if(chef_turn){
					chef[chef_i++]=i;
					chef_turn=0;
				}
				else{
					ast[ast_i++]=i;
					chef_turn=1;	
				}
			}
		}
		if(chef_i<1){
			cout<<endl;
		}
		else{
			for(int i=0;i<chef_i;i++)
				cout<<chef[i]<<" ";
			cout<<endl;
		}
		if(ast_i<1){
			cout<<endl;
		}
		else{
			for(int i=0;i<ast_i;i++)
				cout<<ast[i]<<" ";
			cout<<endl;		
		}
	}	

	return 0;
}
