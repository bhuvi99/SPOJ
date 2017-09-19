#pragma GCC optimize ("-O3")
#include<iostream>
#define rep(i,a,n) for(int i=(a);i<n;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(cin>>s){
		int n=s.size();
		bool invalid=false;
		if(n<=1&&s[0]=='0') break;
		unsigned long long int ar[n]={1};
		if(n>0) ar[1]=1;
		if(n>0&&s[0]<'3'){ ar[1]=2; if(s[1]=='0') ar[1]=0;};
		rep(i,1,n) {
			if(s[i]>'0'&&s[i]<='9') ar[i]=ar[i-1];
			int x=(s[i-1]-'0')*10+(s[i]-'0');
			if(x>=10&&x<=26) ar[i]+=(i>1?ar[i-2]:1);
			if(s[i]=='0'&&x>20) invalid=true;
		//	ar[i]=(s[i-1]>'2'||s[i]=='0')?ar[i]=ar[i-1]:ar[i-1]+ar[i-2];
		}
		cout<<(invalid?0:ar[n-1])<<endl;
	}
}
