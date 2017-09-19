#pragma GCC optimize ("-O3")
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
#define rep(i,a,n) for(long long i=(a);i<n;i++)
#define  PB push_back
#define vI vector<long long> 
void simple_seive(long long limit, vI &prime){
	bool mark[limit+1];
	memset(mark,true,sizeof(mark));
	for(long long p=2;p*p<limit;p++)
			if(mark[p])  for(long long i=2*p;i<limit;i+=p) mark[i]=false;
	for(long long p=2;p<limit;p++) 
		if(mark[p]) {prime.PB(p); }
	return;
}
void segmented_seive(long long m,long long n){
	vI prime;
	long long limit=floor(sqrt(n))+1;
	simple_seive(limit,prime);
	if(m<2) m=2;
	long long low=m;
	long long high=n+1/*2*limit*/,l=prime.size();
//	while(low<n){
		
		bool mark[n-m+1];
		memset(mark,true,sizeof(mark));
		for(long long i=0;prime[i]>=m&&prime[i]<=limit;i++) cout<<prime[i]<<endl;
		for(long long i=0;i<l;i++){
			
				long long loLow=floor(low/prime[i])*prime[i]; //125 to 124
				if(loLow<low) loLow+=prime[i];
				for(long long j=loLow;j<high;j+=prime[i]) mark[j-low]=false;		
		}
		for(long long i=low;i<high;i++) if(mark[i-low]) cout<<i<<endl;
	//	low+=limit;
		//high+=limit;
	//	if(high>n) high=n;
		//}	
}

int main()
{
	long long t, n,m;
	cin>>t;
	while(t--){
			cin>>m>>n;
			segmented_seive(m,n);
	}
	return 0;
}

