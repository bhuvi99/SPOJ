#pragma GCC optimize ("-O3")
#include<iostream>
#include<map>
using namespace std;
int main(){
	int i,T,n;
	string al="abcdefghijklmnopqrstuvwxyz";
	string a,b;
	cin>>T>>a;
	map<char,int> mp;
	n=a.size();
	for(int i=0;i<n;i++)
		mp.insert(pair<char,int>(al[i],a[i]));
	while(T--){
		cin>>b;
		n=b.size();
		for(int i=0;i<n;i++)
			if(b[i]=='_') b[i]=' ';
			else if((b[i]>=65&&b[i]<=90)) b[i]=mp.at(b[i]+32)-32;
			else if((b[i]>=97&&b[i]<=122)) b[i]=mp.at(b[i]);
		cout<<b<<endl;
	}
}
