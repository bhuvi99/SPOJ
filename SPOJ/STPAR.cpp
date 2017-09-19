#include<iostream>
#include<vector>
#include<cstdio>
#include<stack>
#define sf(n) scanf("%d",&n)
#define rep(i,a,n) for(int i=(a);i<n;i++)
#define PB push_back
using namespace std;
int main(){
	int n;
	sf(n);
	while(n){
		int a[n],b[n],x=0;
		rep(i,0,n) sf(a[i]);
		stack<int> s;
		bool flag=true;
		rep(i,0,n-1){
			if(a[i]<a[i+1]) { while(!s.empty()&&s.top()<a[i]) {b[x++]=s.top();s.pop();} b[x++]=a[i];}
			else if(a[i]>a[i+1]) {while(!s.empty()&&s.top()<a[i]) {b[x++]=s.top();s.pop();};  s.push(a[i]);} 
		}
		while(!s.empty()&&s.top()<a[n-1]) {b[x++]=s.top();s.pop();}
		b[x++]=a[n-1];
		while(!s.empty()){b[x++]=s.top(); s.pop();}
		rep(i,0,x-1) if(b[i]>b[i+1]) { flag=false; break;}
		if(flag) printf("yes\n");
		else printf("no\n");
		
	sf(n);
	}
	


}
