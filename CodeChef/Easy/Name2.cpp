#include<iostream>
#include<string>
#include<cmath>
#pragma GCC optimize ("-O3")
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
	int t,m,n,j=0,count=0;
	cin>>t;
	string M,N;
	while(t--){
		cin>>M>>N;
		m=M.length();
		n=N.length();
		count=0;j=0;		
		for(int i=0;i<m;i++)
			while(j<n)
				if(M[i]==N[j++]){
					count++;
					break;
				
			}
		if(count==m) cout<<"YES"<<endl;
		else {
		
		
		
		count=0;j=0;		
		for(int i=0;i<n;i++)
			while(j<m)
				if(N[i]==M[j++]){
					count++;
					break;
				
			}
		
		if(count==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
		
		
		}
	}
}
