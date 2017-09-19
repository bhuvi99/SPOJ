#pragma GCC optimize ("-O3")
#include<iostream>
#include<string>
#define rep(i,a,l) for(long long i=(a);i<l;i++)
using namespace std;
int main(){
	int t,count;
	unsigned long long l;
	string n;
	cin>>t;
	while(t--){
		cin>>n;count=0;
		l=n.size();
		rep(i,0,l) if(n[i]!=52&&n[i]!=55) count++;
		cout<<count<<endl;
	
	}
}
