#pragma GCC optimize ("-O3")
#include<cstdio>
#define ull unsigned long long
using namespace std;
ull dp[5000001]={0};
ull solve(ull n){
	if(n<12) return n;
	if(n<5000001&&dp[n]>0) return dp[n];
	ull x=solve(n/2)+solve(n/3)+solve(n/4);
ull	r=x>n?x:n;
	if(n<5000001) dp[n]=r;
	return r;
}
int main(){
	int n,t=0;
	while(scanf("%d",&n)&&t++<10)
		printf("%lld\n",solve(n));
	


	return 0;
}
