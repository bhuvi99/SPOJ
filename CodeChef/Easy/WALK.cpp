#include<iostream>
#include<cmath>
#define rep(i,a,n) for(unsigned long long i=(a);i<n;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long t,n,p,q,m;
	cin>>t;
	while(t--){
		
		cin>>n>>m;
		rep(i,1,n) {
			cin>>q;
			m=max(m,q+i);
		}
		cout<<m<<endl;
	}
}
