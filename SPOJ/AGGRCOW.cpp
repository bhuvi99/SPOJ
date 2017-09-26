#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("-O3")
#define rep0(i,n) for(unsigned long long int i=0;i<n;i++)
#define rep(i,a,n) for(int i=(a);i<n;i++)
#define rRep(i,a,n) for(int i=(a);i>n;i--)
#define fore(i,a) for(auto &i:a)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define PB push_back
#define F first
#define S second
using LL = long long;
using ULL = unsigned long long;
void _main();
int main(){ ios::sync_with_stdio(0);cin.tie(0);_main();return 0;}
bool f(int x,int p[],int n, int C){
	int cowsplaced=1,lastplaced=p[0];
	rep(i,1,n){ 
		if(p[i]-lastplaced>=x){
		
			if(++cowsplaced==C) return true; // we can place all cows with this X distance apart
			lastplaced=p[i];
		
		}
	}
	return false;
}
void _main(){
	int t,n,c;
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>c;
		int p[n];
		rep0(i,n) cin>>p[i];
		sort(p,p+n);
		int start=0,end=p[n-1]-p[0]+1,mid;
		while(end-start>1){
			mid=(end+start)>>1;
			(f(mid,p,n,c)?start:end)=mid;
		}
		cout<<start<<endl;
	}
}
