#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	unsigned long long int t,n,c;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>a;c=0;
		for(int i=0;i<n;i++)	if(a[i]=='1') c++;
		cout<<(c*(c+1)/2)<<endl;
	}
}
