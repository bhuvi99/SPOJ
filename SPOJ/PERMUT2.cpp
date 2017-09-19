#include<iostream>
using namespace std;
int main(){
	int t, n,m;
	cin>>n;
	while(n){
		int a[n+1];
		bool flag=true;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n&&flag;i++) if(a[a[i]]!=i) flag=false;
		cout<<(flag?"ambiguous":"not ambiguous")<<endl;
		cin>>n;
	}
	return 0;
}
