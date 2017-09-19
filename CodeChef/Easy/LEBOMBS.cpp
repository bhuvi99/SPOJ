#pragma GCC optimize ("-O3")
#include<iostream>
#include<string>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
int main(){

	int t,n,count;
	cin>>t;
	string s;
	bool blast=false;
	while(t--){
		cin>>n;
		cin>>s;
		count=0;
		rep(i,0,n) {
			blast=false;
			if(s[i]=='1') blast=true;
			if(i>0&&s[i-1]=='1') blast =true;
			if(i<n-1&&s[i+1]=='1') blast=true;
			if(blast) count++;		
		}
		cout<<n-count<<endl;
	}
}
