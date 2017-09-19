#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t, n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a,b,aSum=0,bSum=0;
		for(int i=0;i<n;i++) {cin>>a;aSum=a>aSum?a:aSum;}
		for(int i=0;i<m;i++) {cin>> b;bSum=b>bSum?b:bSum;}
		 cout<<(aSum<bSum?"MechaGodzilla":"Godzilla")<<endl;
	
	}


}
