#include<iostream>
#define ull unsigned long long int
using namespace std;
ull dp[21]={0};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[0]=1;
	for(ull i=1;i<21;i++)
		dp[i]=i*dp[i-1];
	int t,n,ar[200];
	cin>>t;
	while(t--){
		cin>>n;
		if(n<21) cout<<dp[n]<<endl;
		else{
			int m=0,x,i=0,temp,temp2=n,index=0;
			while(temp2){
			
				ar[index++]=temp2%10;
				temp2/=10; m++;
			}
			for(ull j=n-1;j>=2;j--){
				temp2=j;temp=0;
				for(index=0;index<m;index++){
					x=ar[index]*j+temp;
					temp=x/10;
					ar[index]=x%10;
				}
				while(temp){
					ar[m++]=temp%10;
					temp=temp/10;
				}
			}
			for(i=m-1;i>=0;i--) cout<<ar[i]; cout<<endl;
		}
	}
}
