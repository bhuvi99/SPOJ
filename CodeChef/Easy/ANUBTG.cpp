#include<iostream>
#include<algorithm>
#define rep(i,a,n) for(int i=(a);i<n;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,cost;
	cin>>t;
	while(t--){
		cin>>n;
		int k[n];
		rep(i,0,n) cin>>k[i];
		sort(k,k+n);cost=0;
		for(int i=n-1;i>=0;i-=4){
			cost+=k[i];
			if(i)
				cost+=k[i-1]; 
		}
		cout<<cost<<endl;
	}
}
